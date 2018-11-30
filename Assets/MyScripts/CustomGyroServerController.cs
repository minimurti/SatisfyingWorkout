using UnityEngine;
using System.Collections;
using EasyWiFi.Core;
using System;


namespace EasyWiFi.ServerControls
{
   
    [AddComponentMenu("EasyWiFiController/Server/UserControls/Custom Gyro")]
    public class CustomGyroServerController : MonoBehaviour, IServerController
    {

        public static Animator anim;

        public string control = "Gyro";
        public EasyWiFiConstants.PLAYER_NUMBER player = EasyWiFiConstants.PLAYER_NUMBER.Player1;
        public string notifyMethod = "yourMethod";

        public static Quaternion orientation;
        public static float piF, angle, angleref, angleOld, angleDiff;
        string message;
        Vector3 vectr, vectref, vectrefup, vectrefcross,vectproj;
        double pi;

        //runtime variables
        GyroControllerType[] gyro = new GyroControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
        int currentNumberControllers = 0;

        void OnEnable()
        {
            pi = Math.PI;
            piF = Convert.ToSingle(pi);
            vectref[0] = 0;
            vectref[1] = 0;
            vectref[2] = -1;

            vectrefup[0] = 0;
            vectrefup[1] = 1;
            vectrefup[2] = 0;

            vectrefcross = Vector3.Cross(vectref, vectrefup);

            angleref = 60;

            anim = this.GetComponent<Animator>();
            anim.speed = 0f;
            EasyWiFiController.On_ConnectionsChanged += checkForNewConnections;

            //do one check at the beginning just in case we're being spawned after startup and after the callbacks
            //have already been called
            if (gyro[0] == null && EasyWiFiController.lastConnectedPlayerNumber >= 0)
            {
                EasyWiFiUtilities.checkForClient(control, (int)player, ref gyro, ref currentNumberControllers);
            }
        }

        void OnDestroy()
        {
            EasyWiFiController.On_ConnectionsChanged -= checkForNewConnections;
        }

        // Update is called once per frame
        void Update()
        {
            //iterate over the current number of connected controllers
            for (int i = 0; i < currentNumberControllers; i++)
            {
                if (gyro[i] != null && gyro[i].serverKey != null && gyro[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
                {
                    mapDataStructureToAction(i);
                }
            }



        }


        public void mapDataStructureToAction(int index)
        {

            //anim.Play("CINEMA_4D_Main", 0, thetafinal/(2*piT));



            orientation.w = gyro[index].GYRO_W;
            orientation.x = gyro[index].GYRO_X;
            orientation.y = gyro[index].GYRO_Y;
            orientation.z = gyro[index].GYRO_Z;//these are a "Quaternion" whatever that is
            //vect = orientation.eulerAngles;


            //vectf = orientation * Vector3.forward;
            //vectu = orientation * Vector3.up;
            vectr = orientation * Vector3.right; //a unit vector [001] or... [010]... something




            if (Input.GetAxis("Vertical") < 0)
            {
                vectref = vectr;
            }

            if (Input.GetAxis("Vertical") > 0)
            {
                vectrefup = vectr;
                vectrefcross = Vector3.Cross(vectref, vectrefup);
                angleref = Vector3.SignedAngle(vectref,vectr, vectrefcross) ;
            }


            vectproj = Vector3.ProjectOnPlane(vectr, vectrefcross);

            angle = Vector3.SignedAngle(vectref, vectproj , vectrefcross);


            if (angle / angleref < 0)
            {
                angle = 0;
            }

            if (angle / angleref > 1)
            {
                angleOld = angle;//this prevents movement when the legs arent moving. 
                angle = angleref;//this prevents ratio from ever being larger than 1.
                angleDiff = 0;
            }
            else
            angleDiff = angle - angleOld;
            //transform.Translate(Vector3.forward * Math.Abs(angle-angleOld)/50);




            anim.Play("CINEMA_4D_Main", 0, (angle/angleref)*Vector3.Magnitude(vectproj));

            //message = String.Format("{0:0,0.00}", angle / angleref);
            //message += ": angle ratio";
            //Debug.Log(message, gameObject);
            //message = String.Format("{0:0,0.00}", Vector3.Magnitude(vectproj));
            //message += ": magnitude of projection";
            //Debug.Log(message, gameObject);




            //messagex = String.Format("{0:0,0.00}", mtheta);
            //messagex += " radians :m";
            //Debug.Log(messagex, gameObject)


            //Debug.Log(vectr.ToString(), gameObject);

            //oriw = gyro[index].GYRO_W;
            //orix = gyro[index].GYRO_X;
            //oriy = gyro[index].GYRO_Y;
            //oriz = gyro[index].GYRO_Z;//these are floats

            //xtheta = (vect[0] * pi) / 180;
            //ytheta = (vect[1] * pi) / 180;
            //ztheta = (vect[2] * pi) / 180;


            //A = Math.Cos(ztheta);
            //B = Math.Sin(ztheta);
            //A = A * A;
            //B = B * B;

            //mtheta = (A * xtheta) + (B * ytheta);


            //thetafinal = Convert.ToSingle(mtheta);












            //messagex = String.Format("{0:0,0.00}", mtheta);
            //messagex += " radians :m";
            //Debug.Log(messagex, gameObject);

            //messagew =  String.Format("{0:0,0.00}", oriw);
            //messagew += "*pi radians :w";
            //Debug.Log(messagew, gameObject);

            //messagex = String.Format("{0:0,0.00}", orix);
            //messagex += "*pi radians :x";
            //Debug.Log(messagex, gameObject);

            //messagew = String.Format("{0:0,0.00}", oriy);
            //messagew += "*pi radians :y";
            //Debug.Log(messagew, gameObject);

            //messagew = String.Format("{0:0,0.00}", oriz);
            //messagew += "*pi radians :z";
            //Debug.Log(messagew, gameObject);
            angleOld = angle;

        }

        public void checkForNewConnections(bool isConnect, int playerNumber)
        {
            EasyWiFiUtilities.checkForClient(control, (int)player, ref gyro, ref currentNumberControllers);
        }
    }

}
