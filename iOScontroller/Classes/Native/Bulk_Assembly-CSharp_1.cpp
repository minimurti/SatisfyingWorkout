#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// ControllerConnected
struct ControllerConnected_t2933086185;
// EasyWiFi.Core.AccelerometerControllerType
struct AccelerometerControllerType_t3432367267;
// EasyWiFi.Core.ButtonControllerType
struct ButtonControllerType_t4022003499;
// EasyWiFi.Core.ButtonControllerType[]
struct ButtonControllerTypeU5BU5D_t3475699658;
// EasyWiFi.Core.DpadControllerType
struct DpadControllerType_t3440649293;
// EasyWiFi.Core.DpadControllerType[]
struct DpadControllerTypeU5BU5D_t241551328;
// EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler
struct controllerConnectionsChangedHandler_t1809440778;
// EasyWiFi.Core.FloatBackchannelType
struct FloatBackchannelType_t2465646524;
// EasyWiFi.Core.FloatBackchannelType[]
struct FloatBackchannelTypeU5BU5D_t2165954005;
// EasyWiFi.Core.JoystickControllerType
struct JoystickControllerType_t2945305588;
// EasyWiFi.Core.JoystickControllerType[]
struct JoystickControllerTypeU5BU5D_t3315982781;
// EasyWiFi.Core.TouchpadControllerType
struct TouchpadControllerType_t2430310142;
// EasyWiFi.ServerBackchannels.FloatServerBackchannel
struct FloatServerBackchannel_t1497256550;
// SelectPlayer
struct SelectPlayer_t1420868008;
// Spedometer
struct Spedometer_t2461391377;
// Steering
struct Steering_t318343568;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,EasyWiFi.Core.BaseControllerType>
struct Dictionary_2_t2233432893;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.IPEndPoint>
struct Dictionary_2_t3577143517;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Sockets.UdpClient>
struct Dictionary_2_t752538305;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.Sockets.UdpClient
struct UdpClient_t967282006;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Void
struct Void_t1185182177;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AnimationState
struct AnimationState_t1108360407;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// UnityEngine.EventSystems.EasyWiFiInputModule
struct EasyWiFiInputModule_t2360561143;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t1764640198;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t2658898854;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t3912835512;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t2950825503;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t3974364820;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t933334182;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t2790798304;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t4266291469;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3495933518;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t957311111;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// alphaBlink
struct alphaBlink_t3172065299;
// myjig
struct myjig_t2622873490;
// painting
struct painting_t1121717621;
// think
struct think_t1053191122;

extern RuntimeClass* ButtonControllerTypeU5BU5D_t3475699658_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t2948259380_il2cpp_TypeInfo_var;
extern RuntimeClass* DpadControllerTypeU5BU5D_t241551328_il2cpp_TypeInfo_var;
extern RuntimeClass* EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var;
extern RuntimeClass* EasyWiFiController_t765539194_il2cpp_TypeInfo_var;
extern RuntimeClass* ExecuteEvents_t3484638744_il2cpp_TypeInfo_var;
extern RuntimeClass* JoystickControllerTypeU5BU5D_t3315982781_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* controllerConnectionsChangedHandler_t1809440778_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1757590412;
extern String_t* _stringLiteral2160874939;
extern String_t* _stringLiteral2323074440;
extern String_t* _stringLiteral2608531016;
extern String_t* _stringLiteral2801924628;
extern String_t* _stringLiteral4157998269;
extern String_t* _stringLiteral436226321;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const RuntimeMethod* EasyWiFiInputModule_checkForNewConnections_m3658888376_RuntimeMethod_var;
extern const RuntimeMethod* EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728_RuntimeMethod_var;
extern const RuntimeMethod* EasyWiFiUtilities_checkForClient_TisDpadControllerType_t3440649293_m2166070655_RuntimeMethod_var;
extern const RuntimeMethod* EasyWiFiUtilities_checkForClient_TisJoystickControllerType_t2945305588_m4143447703_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisICancelHandler_t3974364820_m2876577334_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisIMoveHandler_t933334182_m109549_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644_RuntimeMethod_var;
extern const RuntimeMethod* ExecuteEvents_Execute_TisIUpdateSelectedHandler_t4266291469_m1289077245_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const uint32_t EasyWiFiInputModule_ActivateModule_m359813451_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_GetRawMoveVector_m2393733022_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_OnDestroy_m3276105333_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_OnEnable_m2460388209_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_SendMoveEventToSelectedObject_m3525210972_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_SendSubmitEventToSelectedObject_m2326808280_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_SendUpdateEventToSelectedObject_m3290230098_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_ShouldActivateModule_m47970245_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule__ctor_m3444412674_MetadataUsageId;
extern const uint32_t EasyWiFiInputModule_checkForNewConnections_m3658888376_MetadataUsageId;
extern const uint32_t SelectPlayer_Start_m2813840962_MetadataUsageId;
extern const uint32_t SelectPlayer_unAssignPlayer_m4196190020_MetadataUsageId;
extern const uint32_t Spedometer_Start_m2240748540_MetadataUsageId;
extern const uint32_t Spedometer_updateSpeed_m2882988911_MetadataUsageId;
extern const uint32_t Steering_Start_m834360697_MetadataUsageId;
extern const uint32_t Steering_brakePedal_m3879917413_MetadataUsageId;
extern const uint32_t Steering_gasPedal_m2664735627_MetadataUsageId;
extern const uint32_t Steering_moveX_m3436276748_MetadataUsageId;
extern const uint32_t Steering_moveZ_m1169759186_MetadataUsageId;
extern const uint32_t Steering_steerBall_m2156374613_MetadataUsageId;
extern const uint32_t alphaBlink_Start_m132004815_MetadataUsageId;
extern const uint32_t alphaBlink_endBlink_m3060121822_MetadataUsageId;
extern const uint32_t alphaBlink_startBlink_m1006529611_MetadataUsageId;
extern const uint32_t myjig_Update_m3733654096_MetadataUsageId;
extern const uint32_t painting_Start_m2499149194_MetadataUsageId;
extern const uint32_t painting_paint_m2374920261_MetadataUsageId;

struct ButtonControllerTypeU5BU5D_t3475699658;
struct DpadControllerTypeU5BU5D_t241551328;
struct JoystickControllerTypeU5BU5D_t3315982781;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EASYWIFICONSTANTS_T2324710436_H
#define EASYWIFICONSTANTS_T2324710436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiConstants
struct  EasyWiFiConstants_t2324710436  : public RuntimeObject
{
public:

public:
};

struct EasyWiFiConstants_t2324710436_StaticFields
{
public:
	// System.String[] EasyWiFi.Core.EasyWiFiConstants::SPLITARRAY_POUND
	StringU5BU5D_t1281789340* ___SPLITARRAY_POUND_39;
	// System.String[] EasyWiFi.Core.EasyWiFiConstants::SPLITARRAY_COLON
	StringU5BU5D_t1281789340* ___SPLITARRAY_COLON_40;
	// System.String[] EasyWiFi.Core.EasyWiFiConstants::SPLITARRAY_COMMA
	StringU5BU5D_t1281789340* ___SPLITARRAY_COMMA_41;
	// System.String[] EasyWiFi.Core.EasyWiFiConstants::SPLITARRAY_NEWLINE
	StringU5BU5D_t1281789340* ___SPLITARRAY_NEWLINE_42;
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants::PLAYERNUMBER_DISCONNECTED
	int32_t ___PLAYERNUMBER_DISCONNECTED_43;
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants::PLAYERNUMBER_ANY
	int32_t ___PLAYERNUMBER_ANY_44;
	// System.Single EasyWiFi.Core.EasyWiFiConstants::SIMULATED_TOUCH
	float ___SIMULATED_TOUCH_45;
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants::MAX_CONTROLLERS
	int32_t ___MAX_CONTROLLERS_46;

public:
	inline static int32_t get_offset_of_SPLITARRAY_POUND_39() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___SPLITARRAY_POUND_39)); }
	inline StringU5BU5D_t1281789340* get_SPLITARRAY_POUND_39() const { return ___SPLITARRAY_POUND_39; }
	inline StringU5BU5D_t1281789340** get_address_of_SPLITARRAY_POUND_39() { return &___SPLITARRAY_POUND_39; }
	inline void set_SPLITARRAY_POUND_39(StringU5BU5D_t1281789340* value)
	{
		___SPLITARRAY_POUND_39 = value;
		Il2CppCodeGenWriteBarrier((&___SPLITARRAY_POUND_39), value);
	}

	inline static int32_t get_offset_of_SPLITARRAY_COLON_40() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___SPLITARRAY_COLON_40)); }
	inline StringU5BU5D_t1281789340* get_SPLITARRAY_COLON_40() const { return ___SPLITARRAY_COLON_40; }
	inline StringU5BU5D_t1281789340** get_address_of_SPLITARRAY_COLON_40() { return &___SPLITARRAY_COLON_40; }
	inline void set_SPLITARRAY_COLON_40(StringU5BU5D_t1281789340* value)
	{
		___SPLITARRAY_COLON_40 = value;
		Il2CppCodeGenWriteBarrier((&___SPLITARRAY_COLON_40), value);
	}

	inline static int32_t get_offset_of_SPLITARRAY_COMMA_41() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___SPLITARRAY_COMMA_41)); }
	inline StringU5BU5D_t1281789340* get_SPLITARRAY_COMMA_41() const { return ___SPLITARRAY_COMMA_41; }
	inline StringU5BU5D_t1281789340** get_address_of_SPLITARRAY_COMMA_41() { return &___SPLITARRAY_COMMA_41; }
	inline void set_SPLITARRAY_COMMA_41(StringU5BU5D_t1281789340* value)
	{
		___SPLITARRAY_COMMA_41 = value;
		Il2CppCodeGenWriteBarrier((&___SPLITARRAY_COMMA_41), value);
	}

	inline static int32_t get_offset_of_SPLITARRAY_NEWLINE_42() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___SPLITARRAY_NEWLINE_42)); }
	inline StringU5BU5D_t1281789340* get_SPLITARRAY_NEWLINE_42() const { return ___SPLITARRAY_NEWLINE_42; }
	inline StringU5BU5D_t1281789340** get_address_of_SPLITARRAY_NEWLINE_42() { return &___SPLITARRAY_NEWLINE_42; }
	inline void set_SPLITARRAY_NEWLINE_42(StringU5BU5D_t1281789340* value)
	{
		___SPLITARRAY_NEWLINE_42 = value;
		Il2CppCodeGenWriteBarrier((&___SPLITARRAY_NEWLINE_42), value);
	}

	inline static int32_t get_offset_of_PLAYERNUMBER_DISCONNECTED_43() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___PLAYERNUMBER_DISCONNECTED_43)); }
	inline int32_t get_PLAYERNUMBER_DISCONNECTED_43() const { return ___PLAYERNUMBER_DISCONNECTED_43; }
	inline int32_t* get_address_of_PLAYERNUMBER_DISCONNECTED_43() { return &___PLAYERNUMBER_DISCONNECTED_43; }
	inline void set_PLAYERNUMBER_DISCONNECTED_43(int32_t value)
	{
		___PLAYERNUMBER_DISCONNECTED_43 = value;
	}

	inline static int32_t get_offset_of_PLAYERNUMBER_ANY_44() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___PLAYERNUMBER_ANY_44)); }
	inline int32_t get_PLAYERNUMBER_ANY_44() const { return ___PLAYERNUMBER_ANY_44; }
	inline int32_t* get_address_of_PLAYERNUMBER_ANY_44() { return &___PLAYERNUMBER_ANY_44; }
	inline void set_PLAYERNUMBER_ANY_44(int32_t value)
	{
		___PLAYERNUMBER_ANY_44 = value;
	}

	inline static int32_t get_offset_of_SIMULATED_TOUCH_45() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___SIMULATED_TOUCH_45)); }
	inline float get_SIMULATED_TOUCH_45() const { return ___SIMULATED_TOUCH_45; }
	inline float* get_address_of_SIMULATED_TOUCH_45() { return &___SIMULATED_TOUCH_45; }
	inline void set_SIMULATED_TOUCH_45(float value)
	{
		___SIMULATED_TOUCH_45 = value;
	}

	inline static int32_t get_offset_of_MAX_CONTROLLERS_46() { return static_cast<int32_t>(offsetof(EasyWiFiConstants_t2324710436_StaticFields, ___MAX_CONTROLLERS_46)); }
	inline int32_t get_MAX_CONTROLLERS_46() const { return ___MAX_CONTROLLERS_46; }
	inline int32_t* get_address_of_MAX_CONTROLLERS_46() { return &___MAX_CONTROLLERS_46; }
	inline void set_MAX_CONTROLLERS_46(int32_t value)
	{
		___MAX_CONTROLLERS_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWIFICONSTANTS_T2324710436_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_13;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_14;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_15;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_16;

public:
	inline static int32_t get_offset_of_flags_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_13)); }
	inline uint32_t get_flags_13() const { return ___flags_13; }
	inline uint32_t* get_address_of_flags_13() { return &___flags_13; }
	inline void set_flags_13(uint32_t value)
	{
		___flags_13 = value;
	}

	inline static int32_t get_offset_of_hi_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_14)); }
	inline uint32_t get_hi_14() const { return ___hi_14; }
	inline uint32_t* get_address_of_hi_14() { return &___hi_14; }
	inline void set_hi_14(uint32_t value)
	{
		___hi_14 = value;
	}

	inline static int32_t get_offset_of_lo_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_15)); }
	inline uint32_t get_lo_15() const { return ___lo_15; }
	inline uint32_t* get_address_of_lo_15() { return &___lo_15; }
	inline void set_lo_15(uint32_t value)
	{
		___lo_15 = value;
	}

	inline static int32_t get_offset_of_mid_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_16)); }
	inline uint32_t get_mid_16() const { return ___mid_16; }
	inline uint32_t* get_address_of_mid_16() { return &___mid_16; }
	inline void set_mid_16(uint32_t value)
	{
		___mid_16 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_12;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_4)); }
	inline Decimal_t2948259380  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2948259380 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2948259380  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_12)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_12() const { return ___MaxValueDiv10_12; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_12() { return &___MaxValueDiv10_12; }
	inline void set_MaxValueDiv10_12(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef CURRENT_CLIENT_STATE_T2143854839_H
#define CURRENT_CLIENT_STATE_T2143854839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiConstants/CURRENT_CLIENT_STATE
struct  CURRENT_CLIENT_STATE_t2143854839 
{
public:
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants/CURRENT_CLIENT_STATE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CURRENT_CLIENT_STATE_t2143854839, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENT_CLIENT_STATE_T2143854839_H
#ifndef CURRENT_SERVER_STATE_T2522447981_H
#define CURRENT_SERVER_STATE_T2522447981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiConstants/CURRENT_SERVER_STATE
struct  CURRENT_SERVER_STATE_t2522447981 
{
public:
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants/CURRENT_SERVER_STATE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CURRENT_SERVER_STATE_t2522447981, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENT_SERVER_STATE_T2522447981_H
#ifndef PLAYER_NUMBER_T3582152307_H
#define PLAYER_NUMBER_T3582152307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER
struct  PLAYER_NUMBER_t3582152307 
{
public:
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PLAYER_NUMBER_t3582152307, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_NUMBER_T3582152307_H
#ifndef UNITY_UI_INPUT_TYPE_T1622461641_H
#define UNITY_UI_INPUT_TYPE_T1622461641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_INPUT_TYPE
struct  UNITY_UI_INPUT_TYPE_t1622461641 
{
public:
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_INPUT_TYPE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UNITY_UI_INPUT_TYPE_t1622461641, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITY_UI_INPUT_TYPE_T1622461641_H
#ifndef UNITY_UI_SELECTION_TYPE_T4268215720_H
#define UNITY_UI_SELECTION_TYPE_T4268215720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_SELECTION_TYPE
struct  UNITY_UI_SELECTION_TYPE_t4268215720 
{
public:
	// System.Int32 EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_SELECTION_TYPE::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UNITY_UI_SELECTION_TYPE_t4268215720, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITY_UI_SELECTION_TYPE_T4268215720_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef MOVEDIRECTION_T1216237838_H
#define MOVEDIRECTION_T1216237838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.MoveDirection
struct  MoveDirection_t1216237838 
{
public:
	// System.Int32 UnityEngine.EventSystems.MoveDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MoveDirection_t1216237838, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEDIRECTION_T1216237838_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TRACKEDREFERENCE_T1199777556_H
#define TRACKEDREFERENCE_T1199777556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1199777556  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1199777556, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1199777556_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef ANIMATIONSTATE_T1108360407_H
#define ANIMATIONSTATE_T1108360407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t1108360407  : public TrackedReference_t1199777556
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T1108360407_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef AXISEVENTDATA_T2331243652_H
#define AXISEVENTDATA_T2331243652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AxisEventData
struct  AxisEventData_t2331243652  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::<moveVector>k__BackingField
	Vector2_t2156229523  ___U3CmoveVectorU3Ek__BackingField_2;
	// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::<moveDir>k__BackingField
	int32_t ___U3CmoveDirU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CmoveVectorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AxisEventData_t2331243652, ___U3CmoveVectorU3Ek__BackingField_2)); }
	inline Vector2_t2156229523  get_U3CmoveVectorU3Ek__BackingField_2() const { return ___U3CmoveVectorU3Ek__BackingField_2; }
	inline Vector2_t2156229523 * get_address_of_U3CmoveVectorU3Ek__BackingField_2() { return &___U3CmoveVectorU3Ek__BackingField_2; }
	inline void set_U3CmoveVectorU3Ek__BackingField_2(Vector2_t2156229523  value)
	{
		___U3CmoveVectorU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmoveDirU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AxisEventData_t2331243652, ___U3CmoveDirU3Ek__BackingField_3)); }
	inline int32_t get_U3CmoveDirU3Ek__BackingField_3() const { return ___U3CmoveDirU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmoveDirU3Ek__BackingField_3() { return &___U3CmoveDirU3Ek__BackingField_3; }
	inline void set_U3CmoveDirU3Ek__BackingField_3(int32_t value)
	{
		___U3CmoveDirU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISEVENTDATA_T2331243652_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef BASECONTROLLERTYPE_T2448176594_H
#define BASECONTROLLERTYPE_T2448176594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.BaseControllerType
struct  BaseControllerType_t2448176594  : public RuntimeObject
{
public:
	// System.String EasyWiFi.Core.BaseControllerType::clientKey
	String_t* ___clientKey_0;
	// System.String EasyWiFi.Core.BaseControllerType::serverKey
	String_t* ___serverKey_1;
	// System.String EasyWiFi.Core.BaseControllerType::clientIP
	String_t* ___clientIP_2;
	// System.String EasyWiFi.Core.BaseControllerType::controllerType
	String_t* ___controllerType_3;
	// System.Int32 EasyWiFi.Core.BaseControllerType::lastPacketNumber
	int32_t ___lastPacketNumber_4;
	// System.Boolean EasyWiFi.Core.BaseControllerType::justReconnected
	bool ___justReconnected_5;
	// System.Int32 EasyWiFi.Core.BaseControllerType::logicalPlayerNumber
	int32_t ___logicalPlayerNumber_6;
	// System.Int32 EasyWiFi.Core.BaseControllerType::previousConnectionPlayerNumber
	int32_t ___previousConnectionPlayerNumber_7;
	// System.DateTime EasyWiFi.Core.BaseControllerType::lastReceivedPacketTime
	DateTime_t3738529785  ___lastReceivedPacketTime_8;

public:
	inline static int32_t get_offset_of_clientKey_0() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___clientKey_0)); }
	inline String_t* get_clientKey_0() const { return ___clientKey_0; }
	inline String_t** get_address_of_clientKey_0() { return &___clientKey_0; }
	inline void set_clientKey_0(String_t* value)
	{
		___clientKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___clientKey_0), value);
	}

	inline static int32_t get_offset_of_serverKey_1() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___serverKey_1)); }
	inline String_t* get_serverKey_1() const { return ___serverKey_1; }
	inline String_t** get_address_of_serverKey_1() { return &___serverKey_1; }
	inline void set_serverKey_1(String_t* value)
	{
		___serverKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverKey_1), value);
	}

	inline static int32_t get_offset_of_clientIP_2() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___clientIP_2)); }
	inline String_t* get_clientIP_2() const { return ___clientIP_2; }
	inline String_t** get_address_of_clientIP_2() { return &___clientIP_2; }
	inline void set_clientIP_2(String_t* value)
	{
		___clientIP_2 = value;
		Il2CppCodeGenWriteBarrier((&___clientIP_2), value);
	}

	inline static int32_t get_offset_of_controllerType_3() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___controllerType_3)); }
	inline String_t* get_controllerType_3() const { return ___controllerType_3; }
	inline String_t** get_address_of_controllerType_3() { return &___controllerType_3; }
	inline void set_controllerType_3(String_t* value)
	{
		___controllerType_3 = value;
		Il2CppCodeGenWriteBarrier((&___controllerType_3), value);
	}

	inline static int32_t get_offset_of_lastPacketNumber_4() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___lastPacketNumber_4)); }
	inline int32_t get_lastPacketNumber_4() const { return ___lastPacketNumber_4; }
	inline int32_t* get_address_of_lastPacketNumber_4() { return &___lastPacketNumber_4; }
	inline void set_lastPacketNumber_4(int32_t value)
	{
		___lastPacketNumber_4 = value;
	}

	inline static int32_t get_offset_of_justReconnected_5() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___justReconnected_5)); }
	inline bool get_justReconnected_5() const { return ___justReconnected_5; }
	inline bool* get_address_of_justReconnected_5() { return &___justReconnected_5; }
	inline void set_justReconnected_5(bool value)
	{
		___justReconnected_5 = value;
	}

	inline static int32_t get_offset_of_logicalPlayerNumber_6() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___logicalPlayerNumber_6)); }
	inline int32_t get_logicalPlayerNumber_6() const { return ___logicalPlayerNumber_6; }
	inline int32_t* get_address_of_logicalPlayerNumber_6() { return &___logicalPlayerNumber_6; }
	inline void set_logicalPlayerNumber_6(int32_t value)
	{
		___logicalPlayerNumber_6 = value;
	}

	inline static int32_t get_offset_of_previousConnectionPlayerNumber_7() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___previousConnectionPlayerNumber_7)); }
	inline int32_t get_previousConnectionPlayerNumber_7() const { return ___previousConnectionPlayerNumber_7; }
	inline int32_t* get_address_of_previousConnectionPlayerNumber_7() { return &___previousConnectionPlayerNumber_7; }
	inline void set_previousConnectionPlayerNumber_7(int32_t value)
	{
		___previousConnectionPlayerNumber_7 = value;
	}

	inline static int32_t get_offset_of_lastReceivedPacketTime_8() { return static_cast<int32_t>(offsetof(BaseControllerType_t2448176594, ___lastReceivedPacketTime_8)); }
	inline DateTime_t3738529785  get_lastReceivedPacketTime_8() const { return ___lastReceivedPacketTime_8; }
	inline DateTime_t3738529785 * get_address_of_lastReceivedPacketTime_8() { return &___lastReceivedPacketTime_8; }
	inline void set_lastReceivedPacketTime_8(DateTime_t3738529785  value)
	{
		___lastReceivedPacketTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLERTYPE_T2448176594_H
#ifndef EASYWIFICONTROLLER_T765539194_H
#define EASYWIFICONTROLLER_T765539194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiController
struct  EasyWiFiController_t765539194  : public RuntimeObject
{
public:

public:
};

struct EasyWiFiController_t765539194_StaticFields
{
public:
	// System.String EasyWiFi.Core.EasyWiFiController::peerType
	String_t* ___peerType_0;
	// System.String EasyWiFi.Core.EasyWiFiController::serverIPAddress
	String_t* ___serverIPAddress_1;
	// System.String EasyWiFi.Core.EasyWiFiController::myIPAddress
	String_t* ___myIPAddress_2;
	// System.String EasyWiFi.Core.EasyWiFiController::appName
	String_t* ___appName_3;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::isVerbose
	bool ___isVerbose_4;
	// System.Int32 EasyWiFi.Core.EasyWiFiController::serverSocketListenPort
	int32_t ___serverSocketListenPort_5;
	// System.Int32 EasyWiFi.Core.EasyWiFiController::clientScoketListenPort
	int32_t ___clientScoketListenPort_6;
	// System.Threading.Thread EasyWiFi.Core.EasyWiFiController::listenThread
	Thread_t2300836069 * ___listenThread_7;
	// System.Threading.Thread EasyWiFi.Core.EasyWiFiController::broadcastThread
	Thread_t2300836069 * ___broadcastThread_8;
	// EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler EasyWiFi.Core.EasyWiFiController::On_ConnectionsChanged
	controllerConnectionsChangedHandler_t1809440778 * ___On_ConnectionsChanged_9;
	// System.Collections.Generic.Dictionary`2<System.String,EasyWiFi.Core.BaseControllerType> EasyWiFi.Core.EasyWiFiController::controllerDataDictionary
	Dictionary_2_t2233432893 * ___controllerDataDictionary_10;
	// EasyWiFi.Core.EasyWiFiConstants/CURRENT_CLIENT_STATE EasyWiFi.Core.EasyWiFiController::clientState
	int32_t ___clientState_11;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::readyToTransmitInventory
	bool ___readyToTransmitInventory_12;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::readyToTransmitBackchannel
	bool ___readyToTransmitBackchannel_13;
	// System.DateTime EasyWiFi.Core.EasyWiFiController::lastHeartbeatTime
	DateTime_t3738529785  ___lastHeartbeatTime_14;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::clientBroadcast
	UdpClient_t967282006 * ___clientBroadcast_15;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::clientSend
	UdpClient_t967282006 * ___clientSend_16;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::clientListen
	UdpClient_t967282006 * ___clientListen_17;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::clientBroadcastEndPoint
	IPEndPoint_t3791887218 * ___clientBroadcastEndPoint_18;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::clientSendEndPoint
	IPEndPoint_t3791887218 * ___clientSendEndPoint_19;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::clientListenEndPoint
	IPEndPoint_t3791887218 * ___clientListenEndPoint_20;
	// EasyWiFi.Core.EasyWiFiConstants/CURRENT_SERVER_STATE EasyWiFi.Core.EasyWiFiController::serverState
	int32_t ___serverState_21;
	// System.Net.Sockets.UdpClient EasyWiFi.Core.EasyWiFiController::serverListen
	UdpClient_t967282006 * ___serverListen_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Sockets.UdpClient> EasyWiFi.Core.EasyWiFiController::serverSendDictionary
	Dictionary_2_t752538305 * ___serverSendDictionary_23;
	// System.Net.IPEndPoint EasyWiFi.Core.EasyWiFiController::serverListenEndPoint
	IPEndPoint_t3791887218 * ___serverListenEndPoint_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.IPEndPoint> EasyWiFi.Core.EasyWiFiController::serverSendEndPointDictionary
	Dictionary_2_t3577143517 * ___serverSendEndPointDictionary_25;
	// System.Collections.Generic.List`1<System.String> EasyWiFi.Core.EasyWiFiController::serverSendKeys
	List_1_t3319525431 * ___serverSendKeys_26;
	// System.Int32 EasyWiFi.Core.EasyWiFiController::lastConnectedPlayerNumber
	int32_t ___lastConnectedPlayerNumber_27;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::isConnect
	bool ___isConnect_28;
	// System.Boolean EasyWiFi.Core.EasyWiFiController::isNew
	bool ___isNew_29;
	// System.DateTime EasyWiFi.Core.EasyWiFiController::lastCallbackTime
	DateTime_t3738529785  ___lastCallbackTime_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> EasyWiFi.Core.EasyWiFiController::<>f__switch$map0
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map0_31;

public:
	inline static int32_t get_offset_of_peerType_0() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___peerType_0)); }
	inline String_t* get_peerType_0() const { return ___peerType_0; }
	inline String_t** get_address_of_peerType_0() { return &___peerType_0; }
	inline void set_peerType_0(String_t* value)
	{
		___peerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___peerType_0), value);
	}

	inline static int32_t get_offset_of_serverIPAddress_1() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverIPAddress_1)); }
	inline String_t* get_serverIPAddress_1() const { return ___serverIPAddress_1; }
	inline String_t** get_address_of_serverIPAddress_1() { return &___serverIPAddress_1; }
	inline void set_serverIPAddress_1(String_t* value)
	{
		___serverIPAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverIPAddress_1), value);
	}

	inline static int32_t get_offset_of_myIPAddress_2() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___myIPAddress_2)); }
	inline String_t* get_myIPAddress_2() const { return ___myIPAddress_2; }
	inline String_t** get_address_of_myIPAddress_2() { return &___myIPAddress_2; }
	inline void set_myIPAddress_2(String_t* value)
	{
		___myIPAddress_2 = value;
		Il2CppCodeGenWriteBarrier((&___myIPAddress_2), value);
	}

	inline static int32_t get_offset_of_appName_3() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___appName_3)); }
	inline String_t* get_appName_3() const { return ___appName_3; }
	inline String_t** get_address_of_appName_3() { return &___appName_3; }
	inline void set_appName_3(String_t* value)
	{
		___appName_3 = value;
		Il2CppCodeGenWriteBarrier((&___appName_3), value);
	}

	inline static int32_t get_offset_of_isVerbose_4() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___isVerbose_4)); }
	inline bool get_isVerbose_4() const { return ___isVerbose_4; }
	inline bool* get_address_of_isVerbose_4() { return &___isVerbose_4; }
	inline void set_isVerbose_4(bool value)
	{
		___isVerbose_4 = value;
	}

	inline static int32_t get_offset_of_serverSocketListenPort_5() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverSocketListenPort_5)); }
	inline int32_t get_serverSocketListenPort_5() const { return ___serverSocketListenPort_5; }
	inline int32_t* get_address_of_serverSocketListenPort_5() { return &___serverSocketListenPort_5; }
	inline void set_serverSocketListenPort_5(int32_t value)
	{
		___serverSocketListenPort_5 = value;
	}

	inline static int32_t get_offset_of_clientScoketListenPort_6() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientScoketListenPort_6)); }
	inline int32_t get_clientScoketListenPort_6() const { return ___clientScoketListenPort_6; }
	inline int32_t* get_address_of_clientScoketListenPort_6() { return &___clientScoketListenPort_6; }
	inline void set_clientScoketListenPort_6(int32_t value)
	{
		___clientScoketListenPort_6 = value;
	}

	inline static int32_t get_offset_of_listenThread_7() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___listenThread_7)); }
	inline Thread_t2300836069 * get_listenThread_7() const { return ___listenThread_7; }
	inline Thread_t2300836069 ** get_address_of_listenThread_7() { return &___listenThread_7; }
	inline void set_listenThread_7(Thread_t2300836069 * value)
	{
		___listenThread_7 = value;
		Il2CppCodeGenWriteBarrier((&___listenThread_7), value);
	}

	inline static int32_t get_offset_of_broadcastThread_8() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___broadcastThread_8)); }
	inline Thread_t2300836069 * get_broadcastThread_8() const { return ___broadcastThread_8; }
	inline Thread_t2300836069 ** get_address_of_broadcastThread_8() { return &___broadcastThread_8; }
	inline void set_broadcastThread_8(Thread_t2300836069 * value)
	{
		___broadcastThread_8 = value;
		Il2CppCodeGenWriteBarrier((&___broadcastThread_8), value);
	}

	inline static int32_t get_offset_of_On_ConnectionsChanged_9() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___On_ConnectionsChanged_9)); }
	inline controllerConnectionsChangedHandler_t1809440778 * get_On_ConnectionsChanged_9() const { return ___On_ConnectionsChanged_9; }
	inline controllerConnectionsChangedHandler_t1809440778 ** get_address_of_On_ConnectionsChanged_9() { return &___On_ConnectionsChanged_9; }
	inline void set_On_ConnectionsChanged_9(controllerConnectionsChangedHandler_t1809440778 * value)
	{
		___On_ConnectionsChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___On_ConnectionsChanged_9), value);
	}

	inline static int32_t get_offset_of_controllerDataDictionary_10() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___controllerDataDictionary_10)); }
	inline Dictionary_2_t2233432893 * get_controllerDataDictionary_10() const { return ___controllerDataDictionary_10; }
	inline Dictionary_2_t2233432893 ** get_address_of_controllerDataDictionary_10() { return &___controllerDataDictionary_10; }
	inline void set_controllerDataDictionary_10(Dictionary_2_t2233432893 * value)
	{
		___controllerDataDictionary_10 = value;
		Il2CppCodeGenWriteBarrier((&___controllerDataDictionary_10), value);
	}

	inline static int32_t get_offset_of_clientState_11() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientState_11)); }
	inline int32_t get_clientState_11() const { return ___clientState_11; }
	inline int32_t* get_address_of_clientState_11() { return &___clientState_11; }
	inline void set_clientState_11(int32_t value)
	{
		___clientState_11 = value;
	}

	inline static int32_t get_offset_of_readyToTransmitInventory_12() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___readyToTransmitInventory_12)); }
	inline bool get_readyToTransmitInventory_12() const { return ___readyToTransmitInventory_12; }
	inline bool* get_address_of_readyToTransmitInventory_12() { return &___readyToTransmitInventory_12; }
	inline void set_readyToTransmitInventory_12(bool value)
	{
		___readyToTransmitInventory_12 = value;
	}

	inline static int32_t get_offset_of_readyToTransmitBackchannel_13() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___readyToTransmitBackchannel_13)); }
	inline bool get_readyToTransmitBackchannel_13() const { return ___readyToTransmitBackchannel_13; }
	inline bool* get_address_of_readyToTransmitBackchannel_13() { return &___readyToTransmitBackchannel_13; }
	inline void set_readyToTransmitBackchannel_13(bool value)
	{
		___readyToTransmitBackchannel_13 = value;
	}

	inline static int32_t get_offset_of_lastHeartbeatTime_14() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___lastHeartbeatTime_14)); }
	inline DateTime_t3738529785  get_lastHeartbeatTime_14() const { return ___lastHeartbeatTime_14; }
	inline DateTime_t3738529785 * get_address_of_lastHeartbeatTime_14() { return &___lastHeartbeatTime_14; }
	inline void set_lastHeartbeatTime_14(DateTime_t3738529785  value)
	{
		___lastHeartbeatTime_14 = value;
	}

	inline static int32_t get_offset_of_clientBroadcast_15() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientBroadcast_15)); }
	inline UdpClient_t967282006 * get_clientBroadcast_15() const { return ___clientBroadcast_15; }
	inline UdpClient_t967282006 ** get_address_of_clientBroadcast_15() { return &___clientBroadcast_15; }
	inline void set_clientBroadcast_15(UdpClient_t967282006 * value)
	{
		___clientBroadcast_15 = value;
		Il2CppCodeGenWriteBarrier((&___clientBroadcast_15), value);
	}

	inline static int32_t get_offset_of_clientSend_16() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientSend_16)); }
	inline UdpClient_t967282006 * get_clientSend_16() const { return ___clientSend_16; }
	inline UdpClient_t967282006 ** get_address_of_clientSend_16() { return &___clientSend_16; }
	inline void set_clientSend_16(UdpClient_t967282006 * value)
	{
		___clientSend_16 = value;
		Il2CppCodeGenWriteBarrier((&___clientSend_16), value);
	}

	inline static int32_t get_offset_of_clientListen_17() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientListen_17)); }
	inline UdpClient_t967282006 * get_clientListen_17() const { return ___clientListen_17; }
	inline UdpClient_t967282006 ** get_address_of_clientListen_17() { return &___clientListen_17; }
	inline void set_clientListen_17(UdpClient_t967282006 * value)
	{
		___clientListen_17 = value;
		Il2CppCodeGenWriteBarrier((&___clientListen_17), value);
	}

	inline static int32_t get_offset_of_clientBroadcastEndPoint_18() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientBroadcastEndPoint_18)); }
	inline IPEndPoint_t3791887218 * get_clientBroadcastEndPoint_18() const { return ___clientBroadcastEndPoint_18; }
	inline IPEndPoint_t3791887218 ** get_address_of_clientBroadcastEndPoint_18() { return &___clientBroadcastEndPoint_18; }
	inline void set_clientBroadcastEndPoint_18(IPEndPoint_t3791887218 * value)
	{
		___clientBroadcastEndPoint_18 = value;
		Il2CppCodeGenWriteBarrier((&___clientBroadcastEndPoint_18), value);
	}

	inline static int32_t get_offset_of_clientSendEndPoint_19() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientSendEndPoint_19)); }
	inline IPEndPoint_t3791887218 * get_clientSendEndPoint_19() const { return ___clientSendEndPoint_19; }
	inline IPEndPoint_t3791887218 ** get_address_of_clientSendEndPoint_19() { return &___clientSendEndPoint_19; }
	inline void set_clientSendEndPoint_19(IPEndPoint_t3791887218 * value)
	{
		___clientSendEndPoint_19 = value;
		Il2CppCodeGenWriteBarrier((&___clientSendEndPoint_19), value);
	}

	inline static int32_t get_offset_of_clientListenEndPoint_20() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___clientListenEndPoint_20)); }
	inline IPEndPoint_t3791887218 * get_clientListenEndPoint_20() const { return ___clientListenEndPoint_20; }
	inline IPEndPoint_t3791887218 ** get_address_of_clientListenEndPoint_20() { return &___clientListenEndPoint_20; }
	inline void set_clientListenEndPoint_20(IPEndPoint_t3791887218 * value)
	{
		___clientListenEndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___clientListenEndPoint_20), value);
	}

	inline static int32_t get_offset_of_serverState_21() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverState_21)); }
	inline int32_t get_serverState_21() const { return ___serverState_21; }
	inline int32_t* get_address_of_serverState_21() { return &___serverState_21; }
	inline void set_serverState_21(int32_t value)
	{
		___serverState_21 = value;
	}

	inline static int32_t get_offset_of_serverListen_22() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverListen_22)); }
	inline UdpClient_t967282006 * get_serverListen_22() const { return ___serverListen_22; }
	inline UdpClient_t967282006 ** get_address_of_serverListen_22() { return &___serverListen_22; }
	inline void set_serverListen_22(UdpClient_t967282006 * value)
	{
		___serverListen_22 = value;
		Il2CppCodeGenWriteBarrier((&___serverListen_22), value);
	}

	inline static int32_t get_offset_of_serverSendDictionary_23() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverSendDictionary_23)); }
	inline Dictionary_2_t752538305 * get_serverSendDictionary_23() const { return ___serverSendDictionary_23; }
	inline Dictionary_2_t752538305 ** get_address_of_serverSendDictionary_23() { return &___serverSendDictionary_23; }
	inline void set_serverSendDictionary_23(Dictionary_2_t752538305 * value)
	{
		___serverSendDictionary_23 = value;
		Il2CppCodeGenWriteBarrier((&___serverSendDictionary_23), value);
	}

	inline static int32_t get_offset_of_serverListenEndPoint_24() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverListenEndPoint_24)); }
	inline IPEndPoint_t3791887218 * get_serverListenEndPoint_24() const { return ___serverListenEndPoint_24; }
	inline IPEndPoint_t3791887218 ** get_address_of_serverListenEndPoint_24() { return &___serverListenEndPoint_24; }
	inline void set_serverListenEndPoint_24(IPEndPoint_t3791887218 * value)
	{
		___serverListenEndPoint_24 = value;
		Il2CppCodeGenWriteBarrier((&___serverListenEndPoint_24), value);
	}

	inline static int32_t get_offset_of_serverSendEndPointDictionary_25() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverSendEndPointDictionary_25)); }
	inline Dictionary_2_t3577143517 * get_serverSendEndPointDictionary_25() const { return ___serverSendEndPointDictionary_25; }
	inline Dictionary_2_t3577143517 ** get_address_of_serverSendEndPointDictionary_25() { return &___serverSendEndPointDictionary_25; }
	inline void set_serverSendEndPointDictionary_25(Dictionary_2_t3577143517 * value)
	{
		___serverSendEndPointDictionary_25 = value;
		Il2CppCodeGenWriteBarrier((&___serverSendEndPointDictionary_25), value);
	}

	inline static int32_t get_offset_of_serverSendKeys_26() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___serverSendKeys_26)); }
	inline List_1_t3319525431 * get_serverSendKeys_26() const { return ___serverSendKeys_26; }
	inline List_1_t3319525431 ** get_address_of_serverSendKeys_26() { return &___serverSendKeys_26; }
	inline void set_serverSendKeys_26(List_1_t3319525431 * value)
	{
		___serverSendKeys_26 = value;
		Il2CppCodeGenWriteBarrier((&___serverSendKeys_26), value);
	}

	inline static int32_t get_offset_of_lastConnectedPlayerNumber_27() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___lastConnectedPlayerNumber_27)); }
	inline int32_t get_lastConnectedPlayerNumber_27() const { return ___lastConnectedPlayerNumber_27; }
	inline int32_t* get_address_of_lastConnectedPlayerNumber_27() { return &___lastConnectedPlayerNumber_27; }
	inline void set_lastConnectedPlayerNumber_27(int32_t value)
	{
		___lastConnectedPlayerNumber_27 = value;
	}

	inline static int32_t get_offset_of_isConnect_28() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___isConnect_28)); }
	inline bool get_isConnect_28() const { return ___isConnect_28; }
	inline bool* get_address_of_isConnect_28() { return &___isConnect_28; }
	inline void set_isConnect_28(bool value)
	{
		___isConnect_28 = value;
	}

	inline static int32_t get_offset_of_isNew_29() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___isNew_29)); }
	inline bool get_isNew_29() const { return ___isNew_29; }
	inline bool* get_address_of_isNew_29() { return &___isNew_29; }
	inline void set_isNew_29(bool value)
	{
		___isNew_29 = value;
	}

	inline static int32_t get_offset_of_lastCallbackTime_30() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___lastCallbackTime_30)); }
	inline DateTime_t3738529785  get_lastCallbackTime_30() const { return ___lastCallbackTime_30; }
	inline DateTime_t3738529785 * get_address_of_lastCallbackTime_30() { return &___lastCallbackTime_30; }
	inline void set_lastCallbackTime_30(DateTime_t3738529785  value)
	{
		___lastCallbackTime_30 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_31() { return static_cast<int32_t>(offsetof(EasyWiFiController_t765539194_StaticFields, ___U3CU3Ef__switchU24map0_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map0_31() const { return ___U3CU3Ef__switchU24map0_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map0_31() { return &___U3CU3Ef__switchU24map0_31; }
	inline void set_U3CU3Ef__switchU24map0_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map0_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWIFICONTROLLER_T765539194_H
#ifndef CONTROLLERCONNECTIONSCHANGEDHANDLER_T1809440778_H
#define CONTROLLERCONNECTIONSCHANGEDHANDLER_T1809440778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler
struct  controllerConnectionsChangedHandler_t1809440778  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERCONNECTIONSCHANGEDHANDLER_T1809440778_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef EVENTFUNCTION_1_T2658898854_H
#define EVENTFUNCTION_1_T2658898854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct  EventFunction_1_t2658898854  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T2658898854_H
#ifndef EVENTFUNCTION_1_T3912835512_H
#define EVENTFUNCTION_1_T3912835512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct  EventFunction_1_t3912835512  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T3912835512_H
#ifndef EVENTFUNCTION_1_T1475332338_H
#define EVENTFUNCTION_1_T1475332338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct  EventFunction_1_t1475332338  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T1475332338_H
#ifndef EVENTFUNCTION_1_T2950825503_H
#define EVENTFUNCTION_1_T2950825503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct  EventFunction_1_t2950825503  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTFUNCTION_1_T2950825503_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef STATEMACHINEBEHAVIOUR_T957311111_H
#define STATEMACHINEBEHAVIOUR_T957311111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t957311111  : public ScriptableObject_t2528358522
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T957311111_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ACCELEROMETERCONTROLLERTYPE_T3432367267_H
#define ACCELEROMETERCONTROLLERTYPE_T3432367267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.AccelerometerControllerType
struct  AccelerometerControllerType_t3432367267  : public BaseControllerType_t2448176594
{
public:
	// System.Single EasyWiFi.Core.AccelerometerControllerType::ACCELERATION_X
	float ___ACCELERATION_X_9;
	// System.Single EasyWiFi.Core.AccelerometerControllerType::ACCELERATION_Y
	float ___ACCELERATION_Y_10;
	// System.Single EasyWiFi.Core.AccelerometerControllerType::ACCELERATION_Z
	float ___ACCELERATION_Z_11;

public:
	inline static int32_t get_offset_of_ACCELERATION_X_9() { return static_cast<int32_t>(offsetof(AccelerometerControllerType_t3432367267, ___ACCELERATION_X_9)); }
	inline float get_ACCELERATION_X_9() const { return ___ACCELERATION_X_9; }
	inline float* get_address_of_ACCELERATION_X_9() { return &___ACCELERATION_X_9; }
	inline void set_ACCELERATION_X_9(float value)
	{
		___ACCELERATION_X_9 = value;
	}

	inline static int32_t get_offset_of_ACCELERATION_Y_10() { return static_cast<int32_t>(offsetof(AccelerometerControllerType_t3432367267, ___ACCELERATION_Y_10)); }
	inline float get_ACCELERATION_Y_10() const { return ___ACCELERATION_Y_10; }
	inline float* get_address_of_ACCELERATION_Y_10() { return &___ACCELERATION_Y_10; }
	inline void set_ACCELERATION_Y_10(float value)
	{
		___ACCELERATION_Y_10 = value;
	}

	inline static int32_t get_offset_of_ACCELERATION_Z_11() { return static_cast<int32_t>(offsetof(AccelerometerControllerType_t3432367267, ___ACCELERATION_Z_11)); }
	inline float get_ACCELERATION_Z_11() const { return ___ACCELERATION_Z_11; }
	inline float* get_address_of_ACCELERATION_Z_11() { return &___ACCELERATION_Z_11; }
	inline void set_ACCELERATION_Z_11(float value)
	{
		___ACCELERATION_Z_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCELEROMETERCONTROLLERTYPE_T3432367267_H
#ifndef BUTTONCONTROLLERTYPE_T4022003499_H
#define BUTTONCONTROLLERTYPE_T4022003499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.ButtonControllerType
struct  ButtonControllerType_t4022003499  : public BaseControllerType_t2448176594
{
public:
	// System.Boolean EasyWiFi.Core.ButtonControllerType::BUTTON_STATE_IS_PRESSED
	bool ___BUTTON_STATE_IS_PRESSED_9;

public:
	inline static int32_t get_offset_of_BUTTON_STATE_IS_PRESSED_9() { return static_cast<int32_t>(offsetof(ButtonControllerType_t4022003499, ___BUTTON_STATE_IS_PRESSED_9)); }
	inline bool get_BUTTON_STATE_IS_PRESSED_9() const { return ___BUTTON_STATE_IS_PRESSED_9; }
	inline bool* get_address_of_BUTTON_STATE_IS_PRESSED_9() { return &___BUTTON_STATE_IS_PRESSED_9; }
	inline void set_BUTTON_STATE_IS_PRESSED_9(bool value)
	{
		___BUTTON_STATE_IS_PRESSED_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCONTROLLERTYPE_T4022003499_H
#ifndef DPADCONTROLLERTYPE_T3440649293_H
#define DPADCONTROLLERTYPE_T3440649293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.DpadControllerType
struct  DpadControllerType_t3440649293  : public BaseControllerType_t2448176594
{
public:
	// System.Boolean EasyWiFi.Core.DpadControllerType::DPAD_LEFT_PRESSED
	bool ___DPAD_LEFT_PRESSED_9;
	// System.Boolean EasyWiFi.Core.DpadControllerType::DPAD_UP_PRESSED
	bool ___DPAD_UP_PRESSED_10;
	// System.Boolean EasyWiFi.Core.DpadControllerType::DPAD_RIGHT_PRESSED
	bool ___DPAD_RIGHT_PRESSED_11;
	// System.Boolean EasyWiFi.Core.DpadControllerType::DPAD_DOWN_PRESSED
	bool ___DPAD_DOWN_PRESSED_12;

public:
	inline static int32_t get_offset_of_DPAD_LEFT_PRESSED_9() { return static_cast<int32_t>(offsetof(DpadControllerType_t3440649293, ___DPAD_LEFT_PRESSED_9)); }
	inline bool get_DPAD_LEFT_PRESSED_9() const { return ___DPAD_LEFT_PRESSED_9; }
	inline bool* get_address_of_DPAD_LEFT_PRESSED_9() { return &___DPAD_LEFT_PRESSED_9; }
	inline void set_DPAD_LEFT_PRESSED_9(bool value)
	{
		___DPAD_LEFT_PRESSED_9 = value;
	}

	inline static int32_t get_offset_of_DPAD_UP_PRESSED_10() { return static_cast<int32_t>(offsetof(DpadControllerType_t3440649293, ___DPAD_UP_PRESSED_10)); }
	inline bool get_DPAD_UP_PRESSED_10() const { return ___DPAD_UP_PRESSED_10; }
	inline bool* get_address_of_DPAD_UP_PRESSED_10() { return &___DPAD_UP_PRESSED_10; }
	inline void set_DPAD_UP_PRESSED_10(bool value)
	{
		___DPAD_UP_PRESSED_10 = value;
	}

	inline static int32_t get_offset_of_DPAD_RIGHT_PRESSED_11() { return static_cast<int32_t>(offsetof(DpadControllerType_t3440649293, ___DPAD_RIGHT_PRESSED_11)); }
	inline bool get_DPAD_RIGHT_PRESSED_11() const { return ___DPAD_RIGHT_PRESSED_11; }
	inline bool* get_address_of_DPAD_RIGHT_PRESSED_11() { return &___DPAD_RIGHT_PRESSED_11; }
	inline void set_DPAD_RIGHT_PRESSED_11(bool value)
	{
		___DPAD_RIGHT_PRESSED_11 = value;
	}

	inline static int32_t get_offset_of_DPAD_DOWN_PRESSED_12() { return static_cast<int32_t>(offsetof(DpadControllerType_t3440649293, ___DPAD_DOWN_PRESSED_12)); }
	inline bool get_DPAD_DOWN_PRESSED_12() const { return ___DPAD_DOWN_PRESSED_12; }
	inline bool* get_address_of_DPAD_DOWN_PRESSED_12() { return &___DPAD_DOWN_PRESSED_12; }
	inline void set_DPAD_DOWN_PRESSED_12(bool value)
	{
		___DPAD_DOWN_PRESSED_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DPADCONTROLLERTYPE_T3440649293_H
#ifndef FLOATBACKCHANNELTYPE_T2465646524_H
#define FLOATBACKCHANNELTYPE_T2465646524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.FloatBackchannelType
struct  FloatBackchannelType_t2465646524  : public BaseControllerType_t2448176594
{
public:
	// System.Single EasyWiFi.Core.FloatBackchannelType::FLOAT_VALUE
	float ___FLOAT_VALUE_9;

public:
	inline static int32_t get_offset_of_FLOAT_VALUE_9() { return static_cast<int32_t>(offsetof(FloatBackchannelType_t2465646524, ___FLOAT_VALUE_9)); }
	inline float get_FLOAT_VALUE_9() const { return ___FLOAT_VALUE_9; }
	inline float* get_address_of_FLOAT_VALUE_9() { return &___FLOAT_VALUE_9; }
	inline void set_FLOAT_VALUE_9(float value)
	{
		___FLOAT_VALUE_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATBACKCHANNELTYPE_T2465646524_H
#ifndef JOYSTICKCONTROLLERTYPE_T2945305588_H
#define JOYSTICKCONTROLLERTYPE_T2945305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.JoystickControllerType
struct  JoystickControllerType_t2945305588  : public BaseControllerType_t2448176594
{
public:
	// System.Single EasyWiFi.Core.JoystickControllerType::JOYSTICK_HORIZONTAL
	float ___JOYSTICK_HORIZONTAL_9;
	// System.Single EasyWiFi.Core.JoystickControllerType::JOYSTICK_VERTICAL
	float ___JOYSTICK_VERTICAL_10;

public:
	inline static int32_t get_offset_of_JOYSTICK_HORIZONTAL_9() { return static_cast<int32_t>(offsetof(JoystickControllerType_t2945305588, ___JOYSTICK_HORIZONTAL_9)); }
	inline float get_JOYSTICK_HORIZONTAL_9() const { return ___JOYSTICK_HORIZONTAL_9; }
	inline float* get_address_of_JOYSTICK_HORIZONTAL_9() { return &___JOYSTICK_HORIZONTAL_9; }
	inline void set_JOYSTICK_HORIZONTAL_9(float value)
	{
		___JOYSTICK_HORIZONTAL_9 = value;
	}

	inline static int32_t get_offset_of_JOYSTICK_VERTICAL_10() { return static_cast<int32_t>(offsetof(JoystickControllerType_t2945305588, ___JOYSTICK_VERTICAL_10)); }
	inline float get_JOYSTICK_VERTICAL_10() const { return ___JOYSTICK_VERTICAL_10; }
	inline float* get_address_of_JOYSTICK_VERTICAL_10() { return &___JOYSTICK_VERTICAL_10; }
	inline void set_JOYSTICK_VERTICAL_10(float value)
	{
		___JOYSTICK_VERTICAL_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICKCONTROLLERTYPE_T2945305588_H
#ifndef TOUCHPADCONTROLLERTYPE_T2430310142_H
#define TOUCHPADCONTROLLERTYPE_T2430310142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.Core.TouchpadControllerType
struct  TouchpadControllerType_t2430310142  : public BaseControllerType_t2448176594
{
public:
	// System.Single EasyWiFi.Core.TouchpadControllerType::POSITION_HORIZONTAL
	float ___POSITION_HORIZONTAL_9;
	// System.Single EasyWiFi.Core.TouchpadControllerType::POSITION_VERTICAL
	float ___POSITION_VERTICAL_10;
	// System.Boolean EasyWiFi.Core.TouchpadControllerType::IS_TOUCHING
	bool ___IS_TOUCHING_11;

public:
	inline static int32_t get_offset_of_POSITION_HORIZONTAL_9() { return static_cast<int32_t>(offsetof(TouchpadControllerType_t2430310142, ___POSITION_HORIZONTAL_9)); }
	inline float get_POSITION_HORIZONTAL_9() const { return ___POSITION_HORIZONTAL_9; }
	inline float* get_address_of_POSITION_HORIZONTAL_9() { return &___POSITION_HORIZONTAL_9; }
	inline void set_POSITION_HORIZONTAL_9(float value)
	{
		___POSITION_HORIZONTAL_9 = value;
	}

	inline static int32_t get_offset_of_POSITION_VERTICAL_10() { return static_cast<int32_t>(offsetof(TouchpadControllerType_t2430310142, ___POSITION_VERTICAL_10)); }
	inline float get_POSITION_VERTICAL_10() const { return ___POSITION_VERTICAL_10; }
	inline float* get_address_of_POSITION_VERTICAL_10() { return &___POSITION_VERTICAL_10; }
	inline void set_POSITION_VERTICAL_10(float value)
	{
		___POSITION_VERTICAL_10 = value;
	}

	inline static int32_t get_offset_of_IS_TOUCHING_11() { return static_cast<int32_t>(offsetof(TouchpadControllerType_t2430310142, ___IS_TOUCHING_11)); }
	inline bool get_IS_TOUCHING_11() const { return ___IS_TOUCHING_11; }
	inline bool* get_address_of_IS_TOUCHING_11() { return &___IS_TOUCHING_11; }
	inline void set_IS_TOUCHING_11(bool value)
	{
		___IS_TOUCHING_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPADCONTROLLERTYPE_T2430310142_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef THINK_T1053191122_H
#define THINK_T1053191122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// think
struct  think_t1053191122  : public StateMachineBehaviour_t957311111
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THINK_T1053191122_H
#ifndef CONTROLLERCONNECTED_T2933086185_H
#define CONTROLLERCONNECTED_T2933086185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ControllerConnected
struct  ControllerConnected_t2933086185  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ControllerConnected::playerBadgeObject
	GameObject_t1113636619 * ___playerBadgeObject_4;
	// UnityEngine.GameObject ControllerConnected::p1Area
	GameObject_t1113636619 * ___p1Area_5;
	// UnityEngine.GameObject ControllerConnected::p2Area
	GameObject_t1113636619 * ___p2Area_6;
	// UnityEngine.GameObject ControllerConnected::p3Area
	GameObject_t1113636619 * ___p3Area_7;
	// UnityEngine.GameObject ControllerConnected::p4Area
	GameObject_t1113636619 * ___p4Area_8;
	// UnityEngine.GameObject ControllerConnected::selectionPanel
	GameObject_t1113636619 * ___selectionPanel_9;
	// alphaBlink ControllerConnected::startGameButton
	alphaBlink_t3172065299 * ___startGameButton_10;
	// UnityEngine.GameObject[] ControllerConnected::instanceArray
	GameObjectU5BU5D_t3328599146* ___instanceArray_11;
	// System.Boolean[] ControllerConnected::playerLockArray
	BooleanU5BU5D_t2897418192* ___playerLockArray_12;
	// System.Int32[] ControllerConnected::playerMap
	Int32U5BU5D_t385246372* ___playerMap_13;
	// UnityEngine.Vector2[] ControllerConnected::midpoints
	Vector2U5BU5D_t1457185986* ___midpoints_14;
	// System.Int32 ControllerConnected::controllersConnected
	int32_t ___controllersConnected_15;
	// System.Int32 ControllerConnected::playersReady
	int32_t ___playersReady_16;
	// System.Boolean ControllerConnected::justInstantiated
	bool ___justInstantiated_17;
	// System.Boolean ControllerConnected::messageWaiting
	bool ___messageWaiting_18;
	// System.Int32 ControllerConnected::messagePlayerNumber
	int32_t ___messagePlayerNumber_19;
	// System.Boolean ControllerConnected::messageIsConnect
	bool ___messageIsConnect_20;

public:
	inline static int32_t get_offset_of_playerBadgeObject_4() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___playerBadgeObject_4)); }
	inline GameObject_t1113636619 * get_playerBadgeObject_4() const { return ___playerBadgeObject_4; }
	inline GameObject_t1113636619 ** get_address_of_playerBadgeObject_4() { return &___playerBadgeObject_4; }
	inline void set_playerBadgeObject_4(GameObject_t1113636619 * value)
	{
		___playerBadgeObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerBadgeObject_4), value);
	}

	inline static int32_t get_offset_of_p1Area_5() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___p1Area_5)); }
	inline GameObject_t1113636619 * get_p1Area_5() const { return ___p1Area_5; }
	inline GameObject_t1113636619 ** get_address_of_p1Area_5() { return &___p1Area_5; }
	inline void set_p1Area_5(GameObject_t1113636619 * value)
	{
		___p1Area_5 = value;
		Il2CppCodeGenWriteBarrier((&___p1Area_5), value);
	}

	inline static int32_t get_offset_of_p2Area_6() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___p2Area_6)); }
	inline GameObject_t1113636619 * get_p2Area_6() const { return ___p2Area_6; }
	inline GameObject_t1113636619 ** get_address_of_p2Area_6() { return &___p2Area_6; }
	inline void set_p2Area_6(GameObject_t1113636619 * value)
	{
		___p2Area_6 = value;
		Il2CppCodeGenWriteBarrier((&___p2Area_6), value);
	}

	inline static int32_t get_offset_of_p3Area_7() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___p3Area_7)); }
	inline GameObject_t1113636619 * get_p3Area_7() const { return ___p3Area_7; }
	inline GameObject_t1113636619 ** get_address_of_p3Area_7() { return &___p3Area_7; }
	inline void set_p3Area_7(GameObject_t1113636619 * value)
	{
		___p3Area_7 = value;
		Il2CppCodeGenWriteBarrier((&___p3Area_7), value);
	}

	inline static int32_t get_offset_of_p4Area_8() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___p4Area_8)); }
	inline GameObject_t1113636619 * get_p4Area_8() const { return ___p4Area_8; }
	inline GameObject_t1113636619 ** get_address_of_p4Area_8() { return &___p4Area_8; }
	inline void set_p4Area_8(GameObject_t1113636619 * value)
	{
		___p4Area_8 = value;
		Il2CppCodeGenWriteBarrier((&___p4Area_8), value);
	}

	inline static int32_t get_offset_of_selectionPanel_9() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___selectionPanel_9)); }
	inline GameObject_t1113636619 * get_selectionPanel_9() const { return ___selectionPanel_9; }
	inline GameObject_t1113636619 ** get_address_of_selectionPanel_9() { return &___selectionPanel_9; }
	inline void set_selectionPanel_9(GameObject_t1113636619 * value)
	{
		___selectionPanel_9 = value;
		Il2CppCodeGenWriteBarrier((&___selectionPanel_9), value);
	}

	inline static int32_t get_offset_of_startGameButton_10() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___startGameButton_10)); }
	inline alphaBlink_t3172065299 * get_startGameButton_10() const { return ___startGameButton_10; }
	inline alphaBlink_t3172065299 ** get_address_of_startGameButton_10() { return &___startGameButton_10; }
	inline void set_startGameButton_10(alphaBlink_t3172065299 * value)
	{
		___startGameButton_10 = value;
		Il2CppCodeGenWriteBarrier((&___startGameButton_10), value);
	}

	inline static int32_t get_offset_of_instanceArray_11() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___instanceArray_11)); }
	inline GameObjectU5BU5D_t3328599146* get_instanceArray_11() const { return ___instanceArray_11; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_instanceArray_11() { return &___instanceArray_11; }
	inline void set_instanceArray_11(GameObjectU5BU5D_t3328599146* value)
	{
		___instanceArray_11 = value;
		Il2CppCodeGenWriteBarrier((&___instanceArray_11), value);
	}

	inline static int32_t get_offset_of_playerLockArray_12() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___playerLockArray_12)); }
	inline BooleanU5BU5D_t2897418192* get_playerLockArray_12() const { return ___playerLockArray_12; }
	inline BooleanU5BU5D_t2897418192** get_address_of_playerLockArray_12() { return &___playerLockArray_12; }
	inline void set_playerLockArray_12(BooleanU5BU5D_t2897418192* value)
	{
		___playerLockArray_12 = value;
		Il2CppCodeGenWriteBarrier((&___playerLockArray_12), value);
	}

	inline static int32_t get_offset_of_playerMap_13() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___playerMap_13)); }
	inline Int32U5BU5D_t385246372* get_playerMap_13() const { return ___playerMap_13; }
	inline Int32U5BU5D_t385246372** get_address_of_playerMap_13() { return &___playerMap_13; }
	inline void set_playerMap_13(Int32U5BU5D_t385246372* value)
	{
		___playerMap_13 = value;
		Il2CppCodeGenWriteBarrier((&___playerMap_13), value);
	}

	inline static int32_t get_offset_of_midpoints_14() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___midpoints_14)); }
	inline Vector2U5BU5D_t1457185986* get_midpoints_14() const { return ___midpoints_14; }
	inline Vector2U5BU5D_t1457185986** get_address_of_midpoints_14() { return &___midpoints_14; }
	inline void set_midpoints_14(Vector2U5BU5D_t1457185986* value)
	{
		___midpoints_14 = value;
		Il2CppCodeGenWriteBarrier((&___midpoints_14), value);
	}

	inline static int32_t get_offset_of_controllersConnected_15() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___controllersConnected_15)); }
	inline int32_t get_controllersConnected_15() const { return ___controllersConnected_15; }
	inline int32_t* get_address_of_controllersConnected_15() { return &___controllersConnected_15; }
	inline void set_controllersConnected_15(int32_t value)
	{
		___controllersConnected_15 = value;
	}

	inline static int32_t get_offset_of_playersReady_16() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___playersReady_16)); }
	inline int32_t get_playersReady_16() const { return ___playersReady_16; }
	inline int32_t* get_address_of_playersReady_16() { return &___playersReady_16; }
	inline void set_playersReady_16(int32_t value)
	{
		___playersReady_16 = value;
	}

	inline static int32_t get_offset_of_justInstantiated_17() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___justInstantiated_17)); }
	inline bool get_justInstantiated_17() const { return ___justInstantiated_17; }
	inline bool* get_address_of_justInstantiated_17() { return &___justInstantiated_17; }
	inline void set_justInstantiated_17(bool value)
	{
		___justInstantiated_17 = value;
	}

	inline static int32_t get_offset_of_messageWaiting_18() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___messageWaiting_18)); }
	inline bool get_messageWaiting_18() const { return ___messageWaiting_18; }
	inline bool* get_address_of_messageWaiting_18() { return &___messageWaiting_18; }
	inline void set_messageWaiting_18(bool value)
	{
		___messageWaiting_18 = value;
	}

	inline static int32_t get_offset_of_messagePlayerNumber_19() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___messagePlayerNumber_19)); }
	inline int32_t get_messagePlayerNumber_19() const { return ___messagePlayerNumber_19; }
	inline int32_t* get_address_of_messagePlayerNumber_19() { return &___messagePlayerNumber_19; }
	inline void set_messagePlayerNumber_19(int32_t value)
	{
		___messagePlayerNumber_19 = value;
	}

	inline static int32_t get_offset_of_messageIsConnect_20() { return static_cast<int32_t>(offsetof(ControllerConnected_t2933086185, ___messageIsConnect_20)); }
	inline bool get_messageIsConnect_20() const { return ___messageIsConnect_20; }
	inline bool* get_address_of_messageIsConnect_20() { return &___messageIsConnect_20; }
	inline void set_messageIsConnect_20(bool value)
	{
		___messageIsConnect_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERCONNECTED_T2933086185_H
#ifndef FLOATSERVERBACKCHANNEL_T1497256550_H
#define FLOATSERVERBACKCHANNEL_T1497256550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyWiFi.ServerBackchannels.FloatServerBackchannel
struct  FloatServerBackchannel_t1497256550  : public MonoBehaviour_t3962482529
{
public:
	// System.String EasyWiFi.ServerBackchannels.FloatServerBackchannel::control
	String_t* ___control_4;
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER EasyWiFi.ServerBackchannels.FloatServerBackchannel::player
	int32_t ___player_5;
	// EasyWiFi.Core.FloatBackchannelType[] EasyWiFi.ServerBackchannels.FloatServerBackchannel::floatBackchannel
	FloatBackchannelTypeU5BU5D_t2165954005* ___floatBackchannel_6;
	// System.Int32 EasyWiFi.ServerBackchannels.FloatServerBackchannel::currentNumberControllers
	int32_t ___currentNumberControllers_7;
	// System.Single EasyWiFi.ServerBackchannels.FloatServerBackchannel::value
	float ___value_8;

public:
	inline static int32_t get_offset_of_control_4() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t1497256550, ___control_4)); }
	inline String_t* get_control_4() const { return ___control_4; }
	inline String_t** get_address_of_control_4() { return &___control_4; }
	inline void set_control_4(String_t* value)
	{
		___control_4 = value;
		Il2CppCodeGenWriteBarrier((&___control_4), value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t1497256550, ___player_5)); }
	inline int32_t get_player_5() const { return ___player_5; }
	inline int32_t* get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(int32_t value)
	{
		___player_5 = value;
	}

	inline static int32_t get_offset_of_floatBackchannel_6() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t1497256550, ___floatBackchannel_6)); }
	inline FloatBackchannelTypeU5BU5D_t2165954005* get_floatBackchannel_6() const { return ___floatBackchannel_6; }
	inline FloatBackchannelTypeU5BU5D_t2165954005** get_address_of_floatBackchannel_6() { return &___floatBackchannel_6; }
	inline void set_floatBackchannel_6(FloatBackchannelTypeU5BU5D_t2165954005* value)
	{
		___floatBackchannel_6 = value;
		Il2CppCodeGenWriteBarrier((&___floatBackchannel_6), value);
	}

	inline static int32_t get_offset_of_currentNumberControllers_7() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t1497256550, ___currentNumberControllers_7)); }
	inline int32_t get_currentNumberControllers_7() const { return ___currentNumberControllers_7; }
	inline int32_t* get_address_of_currentNumberControllers_7() { return &___currentNumberControllers_7; }
	inline void set_currentNumberControllers_7(int32_t value)
	{
		___currentNumberControllers_7 = value;
	}

	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(FloatServerBackchannel_t1497256550, ___value_8)); }
	inline float get_value_8() const { return ___value_8; }
	inline float* get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(float value)
	{
		___value_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATSERVERBACKCHANNEL_T1497256550_H
#ifndef SELECTPLAYER_T1420868008_H
#define SELECTPLAYER_T1420868008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectPlayer
struct  SelectPlayer_t1420868008  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Vector2 SelectPlayer::p1Center
	Vector2_t2156229523  ___p1Center_4;
	// UnityEngine.Vector2 SelectPlayer::p2Center
	Vector2_t2156229523  ___p2Center_5;
	// UnityEngine.Vector2 SelectPlayer::p3Center
	Vector2_t2156229523  ___p3Center_6;
	// UnityEngine.Vector2 SelectPlayer::p4Center
	Vector2_t2156229523  ___p4Center_7;
	// ControllerConnected SelectPlayer::cc
	ControllerConnected_t2933086185 * ___cc_8;
	// System.Int32 SelectPlayer::currentLogicalPlayer
	int32_t ___currentLogicalPlayer_9;
	// UnityEngine.Vector3 SelectPlayer::lockedPosition
	Vector3_t3722313464  ___lockedPosition_10;
	// System.Boolean SelectPlayer::isLocked
	bool ___isLocked_11;
	// System.Int32 SelectPlayer::lockedArea
	int32_t ___lockedArea_12;
	// UnityEngine.RectTransform SelectPlayer::myRT
	RectTransform_t3704657025 * ___myRT_13;
	// UnityEngine.UI.Image SelectPlayer::sprite
	Image_t2670269651 * ___sprite_14;

public:
	inline static int32_t get_offset_of_p1Center_4() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___p1Center_4)); }
	inline Vector2_t2156229523  get_p1Center_4() const { return ___p1Center_4; }
	inline Vector2_t2156229523 * get_address_of_p1Center_4() { return &___p1Center_4; }
	inline void set_p1Center_4(Vector2_t2156229523  value)
	{
		___p1Center_4 = value;
	}

	inline static int32_t get_offset_of_p2Center_5() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___p2Center_5)); }
	inline Vector2_t2156229523  get_p2Center_5() const { return ___p2Center_5; }
	inline Vector2_t2156229523 * get_address_of_p2Center_5() { return &___p2Center_5; }
	inline void set_p2Center_5(Vector2_t2156229523  value)
	{
		___p2Center_5 = value;
	}

	inline static int32_t get_offset_of_p3Center_6() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___p3Center_6)); }
	inline Vector2_t2156229523  get_p3Center_6() const { return ___p3Center_6; }
	inline Vector2_t2156229523 * get_address_of_p3Center_6() { return &___p3Center_6; }
	inline void set_p3Center_6(Vector2_t2156229523  value)
	{
		___p3Center_6 = value;
	}

	inline static int32_t get_offset_of_p4Center_7() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___p4Center_7)); }
	inline Vector2_t2156229523  get_p4Center_7() const { return ___p4Center_7; }
	inline Vector2_t2156229523 * get_address_of_p4Center_7() { return &___p4Center_7; }
	inline void set_p4Center_7(Vector2_t2156229523  value)
	{
		___p4Center_7 = value;
	}

	inline static int32_t get_offset_of_cc_8() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___cc_8)); }
	inline ControllerConnected_t2933086185 * get_cc_8() const { return ___cc_8; }
	inline ControllerConnected_t2933086185 ** get_address_of_cc_8() { return &___cc_8; }
	inline void set_cc_8(ControllerConnected_t2933086185 * value)
	{
		___cc_8 = value;
		Il2CppCodeGenWriteBarrier((&___cc_8), value);
	}

	inline static int32_t get_offset_of_currentLogicalPlayer_9() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___currentLogicalPlayer_9)); }
	inline int32_t get_currentLogicalPlayer_9() const { return ___currentLogicalPlayer_9; }
	inline int32_t* get_address_of_currentLogicalPlayer_9() { return &___currentLogicalPlayer_9; }
	inline void set_currentLogicalPlayer_9(int32_t value)
	{
		___currentLogicalPlayer_9 = value;
	}

	inline static int32_t get_offset_of_lockedPosition_10() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___lockedPosition_10)); }
	inline Vector3_t3722313464  get_lockedPosition_10() const { return ___lockedPosition_10; }
	inline Vector3_t3722313464 * get_address_of_lockedPosition_10() { return &___lockedPosition_10; }
	inline void set_lockedPosition_10(Vector3_t3722313464  value)
	{
		___lockedPosition_10 = value;
	}

	inline static int32_t get_offset_of_isLocked_11() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___isLocked_11)); }
	inline bool get_isLocked_11() const { return ___isLocked_11; }
	inline bool* get_address_of_isLocked_11() { return &___isLocked_11; }
	inline void set_isLocked_11(bool value)
	{
		___isLocked_11 = value;
	}

	inline static int32_t get_offset_of_lockedArea_12() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___lockedArea_12)); }
	inline int32_t get_lockedArea_12() const { return ___lockedArea_12; }
	inline int32_t* get_address_of_lockedArea_12() { return &___lockedArea_12; }
	inline void set_lockedArea_12(int32_t value)
	{
		___lockedArea_12 = value;
	}

	inline static int32_t get_offset_of_myRT_13() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___myRT_13)); }
	inline RectTransform_t3704657025 * get_myRT_13() const { return ___myRT_13; }
	inline RectTransform_t3704657025 ** get_address_of_myRT_13() { return &___myRT_13; }
	inline void set_myRT_13(RectTransform_t3704657025 * value)
	{
		___myRT_13 = value;
		Il2CppCodeGenWriteBarrier((&___myRT_13), value);
	}

	inline static int32_t get_offset_of_sprite_14() { return static_cast<int32_t>(offsetof(SelectPlayer_t1420868008, ___sprite_14)); }
	inline Image_t2670269651 * get_sprite_14() const { return ___sprite_14; }
	inline Image_t2670269651 ** get_address_of_sprite_14() { return &___sprite_14; }
	inline void set_sprite_14(Image_t2670269651 * value)
	{
		___sprite_14 = value;
		Il2CppCodeGenWriteBarrier((&___sprite_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTPLAYER_T1420868008_H
#ifndef SPEDOMETER_T2461391377_H
#define SPEDOMETER_T2461391377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spedometer
struct  Spedometer_t2461391377  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform Spedometer::myRectTransform
	RectTransform_t3704657025 * ___myRectTransform_4;
	// System.Single Spedometer::currentSpeed
	float ___currentSpeed_5;
	// UnityEngine.Vector3 Spedometer::myRotation
	Vector3_t3722313464  ___myRotation_6;

public:
	inline static int32_t get_offset_of_myRectTransform_4() { return static_cast<int32_t>(offsetof(Spedometer_t2461391377, ___myRectTransform_4)); }
	inline RectTransform_t3704657025 * get_myRectTransform_4() const { return ___myRectTransform_4; }
	inline RectTransform_t3704657025 ** get_address_of_myRectTransform_4() { return &___myRectTransform_4; }
	inline void set_myRectTransform_4(RectTransform_t3704657025 * value)
	{
		___myRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___myRectTransform_4), value);
	}

	inline static int32_t get_offset_of_currentSpeed_5() { return static_cast<int32_t>(offsetof(Spedometer_t2461391377, ___currentSpeed_5)); }
	inline float get_currentSpeed_5() const { return ___currentSpeed_5; }
	inline float* get_address_of_currentSpeed_5() { return &___currentSpeed_5; }
	inline void set_currentSpeed_5(float value)
	{
		___currentSpeed_5 = value;
	}

	inline static int32_t get_offset_of_myRotation_6() { return static_cast<int32_t>(offsetof(Spedometer_t2461391377, ___myRotation_6)); }
	inline Vector3_t3722313464  get_myRotation_6() const { return ___myRotation_6; }
	inline Vector3_t3722313464 * get_address_of_myRotation_6() { return &___myRotation_6; }
	inline void set_myRotation_6(Vector3_t3722313464  value)
	{
		___myRotation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEDOMETER_T2461391377_H
#ifndef STEERING_T318343568_H
#define STEERING_T318343568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Steering
struct  Steering_t318343568  : public MonoBehaviour_t3962482529
{
public:
	// EasyWiFi.ServerBackchannels.FloatServerBackchannel Steering::floatBackchannel
	FloatServerBackchannel_t1497256550 * ___floatBackchannel_4;
	// UnityEngine.Rigidbody Steering::myRigidbody
	Rigidbody_t3916780224 * ___myRigidbody_5;
	// UnityEngine.Vector3 Steering::accel
	Vector3_t3722313464  ___accel_6;
	// System.Single Steering::horizontal
	float ___horizontal_7;
	// System.Single Steering::vertical
	float ___vertical_8;
	// System.Single Steering::normalizeDegrees
	float ___normalizeDegrees_9;
	// System.Single Steering::sensitivity
	float ___sensitivity_10;
	// UnityEngine.Vector3 Steering::actionVectorPosition
	Vector3_t3722313464  ___actionVectorPosition_11;
	// UnityEngine.Vector3 Steering::computerVector
	Vector3_t3722313464  ___computerVector_12;

public:
	inline static int32_t get_offset_of_floatBackchannel_4() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___floatBackchannel_4)); }
	inline FloatServerBackchannel_t1497256550 * get_floatBackchannel_4() const { return ___floatBackchannel_4; }
	inline FloatServerBackchannel_t1497256550 ** get_address_of_floatBackchannel_4() { return &___floatBackchannel_4; }
	inline void set_floatBackchannel_4(FloatServerBackchannel_t1497256550 * value)
	{
		___floatBackchannel_4 = value;
		Il2CppCodeGenWriteBarrier((&___floatBackchannel_4), value);
	}

	inline static int32_t get_offset_of_myRigidbody_5() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___myRigidbody_5)); }
	inline Rigidbody_t3916780224 * get_myRigidbody_5() const { return ___myRigidbody_5; }
	inline Rigidbody_t3916780224 ** get_address_of_myRigidbody_5() { return &___myRigidbody_5; }
	inline void set_myRigidbody_5(Rigidbody_t3916780224 * value)
	{
		___myRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((&___myRigidbody_5), value);
	}

	inline static int32_t get_offset_of_accel_6() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___accel_6)); }
	inline Vector3_t3722313464  get_accel_6() const { return ___accel_6; }
	inline Vector3_t3722313464 * get_address_of_accel_6() { return &___accel_6; }
	inline void set_accel_6(Vector3_t3722313464  value)
	{
		___accel_6 = value;
	}

	inline static int32_t get_offset_of_horizontal_7() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___horizontal_7)); }
	inline float get_horizontal_7() const { return ___horizontal_7; }
	inline float* get_address_of_horizontal_7() { return &___horizontal_7; }
	inline void set_horizontal_7(float value)
	{
		___horizontal_7 = value;
	}

	inline static int32_t get_offset_of_vertical_8() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___vertical_8)); }
	inline float get_vertical_8() const { return ___vertical_8; }
	inline float* get_address_of_vertical_8() { return &___vertical_8; }
	inline void set_vertical_8(float value)
	{
		___vertical_8 = value;
	}

	inline static int32_t get_offset_of_normalizeDegrees_9() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___normalizeDegrees_9)); }
	inline float get_normalizeDegrees_9() const { return ___normalizeDegrees_9; }
	inline float* get_address_of_normalizeDegrees_9() { return &___normalizeDegrees_9; }
	inline void set_normalizeDegrees_9(float value)
	{
		___normalizeDegrees_9 = value;
	}

	inline static int32_t get_offset_of_sensitivity_10() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___sensitivity_10)); }
	inline float get_sensitivity_10() const { return ___sensitivity_10; }
	inline float* get_address_of_sensitivity_10() { return &___sensitivity_10; }
	inline void set_sensitivity_10(float value)
	{
		___sensitivity_10 = value;
	}

	inline static int32_t get_offset_of_actionVectorPosition_11() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___actionVectorPosition_11)); }
	inline Vector3_t3722313464  get_actionVectorPosition_11() const { return ___actionVectorPosition_11; }
	inline Vector3_t3722313464 * get_address_of_actionVectorPosition_11() { return &___actionVectorPosition_11; }
	inline void set_actionVectorPosition_11(Vector3_t3722313464  value)
	{
		___actionVectorPosition_11 = value;
	}

	inline static int32_t get_offset_of_computerVector_12() { return static_cast<int32_t>(offsetof(Steering_t318343568, ___computerVector_12)); }
	inline Vector3_t3722313464  get_computerVector_12() const { return ___computerVector_12; }
	inline Vector3_t3722313464 * get_address_of_computerVector_12() { return &___computerVector_12; }
	inline void set_computerVector_12(Vector3_t3722313464  value)
	{
		___computerVector_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEERING_T318343568_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef ALPHABLINK_T3172065299_H
#define ALPHABLINK_T3172065299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// alphaBlink
struct  alphaBlink_t3172065299  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image alphaBlink::myImage
	Image_t2670269651 * ___myImage_4;
	// UnityEngine.UI.Text alphaBlink::myText
	Text_t1901882714 * ___myText_5;
	// UnityEngine.Color alphaBlink::currentImageColor
	Color_t2555686324  ___currentImageColor_6;
	// UnityEngine.Color alphaBlink::currentTextColor
	Color_t2555686324  ___currentTextColor_7;
	// System.Boolean alphaBlink::ascending
	bool ___ascending_8;

public:
	inline static int32_t get_offset_of_myImage_4() { return static_cast<int32_t>(offsetof(alphaBlink_t3172065299, ___myImage_4)); }
	inline Image_t2670269651 * get_myImage_4() const { return ___myImage_4; }
	inline Image_t2670269651 ** get_address_of_myImage_4() { return &___myImage_4; }
	inline void set_myImage_4(Image_t2670269651 * value)
	{
		___myImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___myImage_4), value);
	}

	inline static int32_t get_offset_of_myText_5() { return static_cast<int32_t>(offsetof(alphaBlink_t3172065299, ___myText_5)); }
	inline Text_t1901882714 * get_myText_5() const { return ___myText_5; }
	inline Text_t1901882714 ** get_address_of_myText_5() { return &___myText_5; }
	inline void set_myText_5(Text_t1901882714 * value)
	{
		___myText_5 = value;
		Il2CppCodeGenWriteBarrier((&___myText_5), value);
	}

	inline static int32_t get_offset_of_currentImageColor_6() { return static_cast<int32_t>(offsetof(alphaBlink_t3172065299, ___currentImageColor_6)); }
	inline Color_t2555686324  get_currentImageColor_6() const { return ___currentImageColor_6; }
	inline Color_t2555686324 * get_address_of_currentImageColor_6() { return &___currentImageColor_6; }
	inline void set_currentImageColor_6(Color_t2555686324  value)
	{
		___currentImageColor_6 = value;
	}

	inline static int32_t get_offset_of_currentTextColor_7() { return static_cast<int32_t>(offsetof(alphaBlink_t3172065299, ___currentTextColor_7)); }
	inline Color_t2555686324  get_currentTextColor_7() const { return ___currentTextColor_7; }
	inline Color_t2555686324 * get_address_of_currentTextColor_7() { return &___currentTextColor_7; }
	inline void set_currentTextColor_7(Color_t2555686324  value)
	{
		___currentTextColor_7 = value;
	}

	inline static int32_t get_offset_of_ascending_8() { return static_cast<int32_t>(offsetof(alphaBlink_t3172065299, ___ascending_8)); }
	inline bool get_ascending_8() const { return ___ascending_8; }
	inline bool* get_address_of_ascending_8() { return &___ascending_8; }
	inline void set_ascending_8(bool value)
	{
		___ascending_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALPHABLINK_T3172065299_H
#ifndef MYJIG_T2622873490_H
#define MYJIG_T2622873490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// myjig
struct  myjig_t2622873490  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animation myjig::anim
	Animation_t3648466861 * ___anim_4;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(myjig_t2622873490, ___anim_4)); }
	inline Animation_t3648466861 * get_anim_4() const { return ___anim_4; }
	inline Animation_t3648466861 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animation_t3648466861 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((&___anim_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYJIG_T2622873490_H
#ifndef PAINTING_T1121717621_H
#define PAINTING_T1121717621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// painting
struct  painting_t1121717621  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject painting::paintObject
	GameObject_t1113636619 * ___paintObject_4;
	// UnityEngine.GameObject painting::panel
	GameObject_t1113636619 * ___panel_5;
	// UnityEngine.GameObject painting::currentObject
	GameObject_t1113636619 * ___currentObject_6;
	// UnityEngine.RectTransform painting::currentRT
	RectTransform_t3704657025 * ___currentRT_7;
	// UnityEngine.UI.Image painting::currentImage
	Image_t2670269651 * ___currentImage_8;
	// UnityEngine.RectTransform painting::canvas
	RectTransform_t3704657025 * ___canvas_9;
	// UnityEngine.Color painting::currentColor
	Color_t2555686324  ___currentColor_10;
	// System.Single painting::canvasWidth
	float ___canvasWidth_11;
	// System.Single painting::canvasHeight
	float ___canvasHeight_12;
	// System.Single painting::drawPositionX
	float ___drawPositionX_13;
	// System.Single painting::drawPositionY
	float ___drawPositionY_14;
	// System.Boolean painting::isRed
	bool ___isRed_15;
	// System.Boolean painting::isBlue
	bool ___isBlue_16;
	// System.Boolean painting::isGreen
	bool ___isGreen_17;

public:
	inline static int32_t get_offset_of_paintObject_4() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___paintObject_4)); }
	inline GameObject_t1113636619 * get_paintObject_4() const { return ___paintObject_4; }
	inline GameObject_t1113636619 ** get_address_of_paintObject_4() { return &___paintObject_4; }
	inline void set_paintObject_4(GameObject_t1113636619 * value)
	{
		___paintObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___paintObject_4), value);
	}

	inline static int32_t get_offset_of_panel_5() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___panel_5)); }
	inline GameObject_t1113636619 * get_panel_5() const { return ___panel_5; }
	inline GameObject_t1113636619 ** get_address_of_panel_5() { return &___panel_5; }
	inline void set_panel_5(GameObject_t1113636619 * value)
	{
		___panel_5 = value;
		Il2CppCodeGenWriteBarrier((&___panel_5), value);
	}

	inline static int32_t get_offset_of_currentObject_6() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___currentObject_6)); }
	inline GameObject_t1113636619 * get_currentObject_6() const { return ___currentObject_6; }
	inline GameObject_t1113636619 ** get_address_of_currentObject_6() { return &___currentObject_6; }
	inline void set_currentObject_6(GameObject_t1113636619 * value)
	{
		___currentObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentObject_6), value);
	}

	inline static int32_t get_offset_of_currentRT_7() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___currentRT_7)); }
	inline RectTransform_t3704657025 * get_currentRT_7() const { return ___currentRT_7; }
	inline RectTransform_t3704657025 ** get_address_of_currentRT_7() { return &___currentRT_7; }
	inline void set_currentRT_7(RectTransform_t3704657025 * value)
	{
		___currentRT_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentRT_7), value);
	}

	inline static int32_t get_offset_of_currentImage_8() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___currentImage_8)); }
	inline Image_t2670269651 * get_currentImage_8() const { return ___currentImage_8; }
	inline Image_t2670269651 ** get_address_of_currentImage_8() { return &___currentImage_8; }
	inline void set_currentImage_8(Image_t2670269651 * value)
	{
		___currentImage_8 = value;
		Il2CppCodeGenWriteBarrier((&___currentImage_8), value);
	}

	inline static int32_t get_offset_of_canvas_9() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___canvas_9)); }
	inline RectTransform_t3704657025 * get_canvas_9() const { return ___canvas_9; }
	inline RectTransform_t3704657025 ** get_address_of_canvas_9() { return &___canvas_9; }
	inline void set_canvas_9(RectTransform_t3704657025 * value)
	{
		___canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_9), value);
	}

	inline static int32_t get_offset_of_currentColor_10() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___currentColor_10)); }
	inline Color_t2555686324  get_currentColor_10() const { return ___currentColor_10; }
	inline Color_t2555686324 * get_address_of_currentColor_10() { return &___currentColor_10; }
	inline void set_currentColor_10(Color_t2555686324  value)
	{
		___currentColor_10 = value;
	}

	inline static int32_t get_offset_of_canvasWidth_11() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___canvasWidth_11)); }
	inline float get_canvasWidth_11() const { return ___canvasWidth_11; }
	inline float* get_address_of_canvasWidth_11() { return &___canvasWidth_11; }
	inline void set_canvasWidth_11(float value)
	{
		___canvasWidth_11 = value;
	}

	inline static int32_t get_offset_of_canvasHeight_12() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___canvasHeight_12)); }
	inline float get_canvasHeight_12() const { return ___canvasHeight_12; }
	inline float* get_address_of_canvasHeight_12() { return &___canvasHeight_12; }
	inline void set_canvasHeight_12(float value)
	{
		___canvasHeight_12 = value;
	}

	inline static int32_t get_offset_of_drawPositionX_13() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___drawPositionX_13)); }
	inline float get_drawPositionX_13() const { return ___drawPositionX_13; }
	inline float* get_address_of_drawPositionX_13() { return &___drawPositionX_13; }
	inline void set_drawPositionX_13(float value)
	{
		___drawPositionX_13 = value;
	}

	inline static int32_t get_offset_of_drawPositionY_14() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___drawPositionY_14)); }
	inline float get_drawPositionY_14() const { return ___drawPositionY_14; }
	inline float* get_address_of_drawPositionY_14() { return &___drawPositionY_14; }
	inline void set_drawPositionY_14(float value)
	{
		___drawPositionY_14 = value;
	}

	inline static int32_t get_offset_of_isRed_15() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___isRed_15)); }
	inline bool get_isRed_15() const { return ___isRed_15; }
	inline bool* get_address_of_isRed_15() { return &___isRed_15; }
	inline void set_isRed_15(bool value)
	{
		___isRed_15 = value;
	}

	inline static int32_t get_offset_of_isBlue_16() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___isBlue_16)); }
	inline bool get_isBlue_16() const { return ___isBlue_16; }
	inline bool* get_address_of_isBlue_16() { return &___isBlue_16; }
	inline void set_isBlue_16(bool value)
	{
		___isBlue_16 = value;
	}

	inline static int32_t get_offset_of_isGreen_17() { return static_cast<int32_t>(offsetof(painting_t1121717621, ___isGreen_17)); }
	inline bool get_isGreen_17() const { return ___isGreen_17; }
	inline bool* get_address_of_isGreen_17() { return &___isGreen_17; }
	inline void set_isGreen_17(bool value)
	{
		___isGreen_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAINTING_T1121717621_H
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_4)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_4), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_5)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_5), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_6)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_6), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_7)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_7), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_8)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_8), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_9)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_4)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_7)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_10)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_13)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t2475741330 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t2475741330 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef EASYWIFIINPUTMODULE_T2360561143_H
#define EASYWIFIINPUTMODULE_T2360561143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EasyWiFiInputModule
struct  EasyWiFiInputModule_t2360561143  : public BaseInputModule_t2019268878
{
public:
	// EasyWiFi.Core.EasyWiFiConstants/PLAYER_NUMBER UnityEngine.EventSystems.EasyWiFiInputModule::player
	int32_t ___player_10;
	// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_INPUT_TYPE UnityEngine.EventSystems.EasyWiFiInputModule::navigationControlType
	int32_t ___navigationControlType_11;
	// System.String UnityEngine.EventSystems.EasyWiFiInputModule::navigationControlName
	String_t* ___navigationControlName_12;
	// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_SELECTION_TYPE UnityEngine.EventSystems.EasyWiFiInputModule::submitControlType
	int32_t ___submitControlType_13;
	// System.String UnityEngine.EventSystems.EasyWiFiInputModule::submitControlName
	String_t* ___submitControlName_14;
	// EasyWiFi.Core.EasyWiFiConstants/UNITY_UI_SELECTION_TYPE UnityEngine.EventSystems.EasyWiFiInputModule::cancelControlType
	int32_t ___cancelControlType_15;
	// System.String UnityEngine.EventSystems.EasyWiFiInputModule::cancelControlName
	String_t* ___cancelControlName_16;
	// System.Single UnityEngine.EventSystems.EasyWiFiInputModule::repeatEventRate
	float ___repeatEventRate_17;
	// EasyWiFi.Core.JoystickControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::joystick
	JoystickControllerTypeU5BU5D_t3315982781* ___joystick_18;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::joystickCurrentNumberControllers
	int32_t ___joystickCurrentNumberControllers_19;
	// EasyWiFi.Core.DpadControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::dpad
	DpadControllerTypeU5BU5D_t241551328* ___dpad_20;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::dpadCurrentNumberControllers
	int32_t ___dpadCurrentNumberControllers_21;
	// EasyWiFi.Core.ButtonControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::submitButton
	ButtonControllerTypeU5BU5D_t3475699658* ___submitButton_22;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::submitCurrentNumberControllers
	int32_t ___submitCurrentNumberControllers_23;
	// EasyWiFi.Core.ButtonControllerType[] UnityEngine.EventSystems.EasyWiFiInputModule::cancelButton
	ButtonControllerTypeU5BU5D_t3475699658* ___cancelButton_24;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::cancelCurrentNumberControllers
	int32_t ___cancelCurrentNumberControllers_25;
	// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::eventLock
	bool ___eventLock_26;
	// System.Int32 UnityEngine.EventSystems.EasyWiFiInputModule::currentEventIndex
	int32_t ___currentEventIndex_27;

public:
	inline static int32_t get_offset_of_player_10() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___player_10)); }
	inline int32_t get_player_10() const { return ___player_10; }
	inline int32_t* get_address_of_player_10() { return &___player_10; }
	inline void set_player_10(int32_t value)
	{
		___player_10 = value;
	}

	inline static int32_t get_offset_of_navigationControlType_11() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___navigationControlType_11)); }
	inline int32_t get_navigationControlType_11() const { return ___navigationControlType_11; }
	inline int32_t* get_address_of_navigationControlType_11() { return &___navigationControlType_11; }
	inline void set_navigationControlType_11(int32_t value)
	{
		___navigationControlType_11 = value;
	}

	inline static int32_t get_offset_of_navigationControlName_12() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___navigationControlName_12)); }
	inline String_t* get_navigationControlName_12() const { return ___navigationControlName_12; }
	inline String_t** get_address_of_navigationControlName_12() { return &___navigationControlName_12; }
	inline void set_navigationControlName_12(String_t* value)
	{
		___navigationControlName_12 = value;
		Il2CppCodeGenWriteBarrier((&___navigationControlName_12), value);
	}

	inline static int32_t get_offset_of_submitControlType_13() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___submitControlType_13)); }
	inline int32_t get_submitControlType_13() const { return ___submitControlType_13; }
	inline int32_t* get_address_of_submitControlType_13() { return &___submitControlType_13; }
	inline void set_submitControlType_13(int32_t value)
	{
		___submitControlType_13 = value;
	}

	inline static int32_t get_offset_of_submitControlName_14() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___submitControlName_14)); }
	inline String_t* get_submitControlName_14() const { return ___submitControlName_14; }
	inline String_t** get_address_of_submitControlName_14() { return &___submitControlName_14; }
	inline void set_submitControlName_14(String_t* value)
	{
		___submitControlName_14 = value;
		Il2CppCodeGenWriteBarrier((&___submitControlName_14), value);
	}

	inline static int32_t get_offset_of_cancelControlType_15() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___cancelControlType_15)); }
	inline int32_t get_cancelControlType_15() const { return ___cancelControlType_15; }
	inline int32_t* get_address_of_cancelControlType_15() { return &___cancelControlType_15; }
	inline void set_cancelControlType_15(int32_t value)
	{
		___cancelControlType_15 = value;
	}

	inline static int32_t get_offset_of_cancelControlName_16() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___cancelControlName_16)); }
	inline String_t* get_cancelControlName_16() const { return ___cancelControlName_16; }
	inline String_t** get_address_of_cancelControlName_16() { return &___cancelControlName_16; }
	inline void set_cancelControlName_16(String_t* value)
	{
		___cancelControlName_16 = value;
		Il2CppCodeGenWriteBarrier((&___cancelControlName_16), value);
	}

	inline static int32_t get_offset_of_repeatEventRate_17() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___repeatEventRate_17)); }
	inline float get_repeatEventRate_17() const { return ___repeatEventRate_17; }
	inline float* get_address_of_repeatEventRate_17() { return &___repeatEventRate_17; }
	inline void set_repeatEventRate_17(float value)
	{
		___repeatEventRate_17 = value;
	}

	inline static int32_t get_offset_of_joystick_18() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___joystick_18)); }
	inline JoystickControllerTypeU5BU5D_t3315982781* get_joystick_18() const { return ___joystick_18; }
	inline JoystickControllerTypeU5BU5D_t3315982781** get_address_of_joystick_18() { return &___joystick_18; }
	inline void set_joystick_18(JoystickControllerTypeU5BU5D_t3315982781* value)
	{
		___joystick_18 = value;
		Il2CppCodeGenWriteBarrier((&___joystick_18), value);
	}

	inline static int32_t get_offset_of_joystickCurrentNumberControllers_19() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___joystickCurrentNumberControllers_19)); }
	inline int32_t get_joystickCurrentNumberControllers_19() const { return ___joystickCurrentNumberControllers_19; }
	inline int32_t* get_address_of_joystickCurrentNumberControllers_19() { return &___joystickCurrentNumberControllers_19; }
	inline void set_joystickCurrentNumberControllers_19(int32_t value)
	{
		___joystickCurrentNumberControllers_19 = value;
	}

	inline static int32_t get_offset_of_dpad_20() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___dpad_20)); }
	inline DpadControllerTypeU5BU5D_t241551328* get_dpad_20() const { return ___dpad_20; }
	inline DpadControllerTypeU5BU5D_t241551328** get_address_of_dpad_20() { return &___dpad_20; }
	inline void set_dpad_20(DpadControllerTypeU5BU5D_t241551328* value)
	{
		___dpad_20 = value;
		Il2CppCodeGenWriteBarrier((&___dpad_20), value);
	}

	inline static int32_t get_offset_of_dpadCurrentNumberControllers_21() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___dpadCurrentNumberControllers_21)); }
	inline int32_t get_dpadCurrentNumberControllers_21() const { return ___dpadCurrentNumberControllers_21; }
	inline int32_t* get_address_of_dpadCurrentNumberControllers_21() { return &___dpadCurrentNumberControllers_21; }
	inline void set_dpadCurrentNumberControllers_21(int32_t value)
	{
		___dpadCurrentNumberControllers_21 = value;
	}

	inline static int32_t get_offset_of_submitButton_22() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___submitButton_22)); }
	inline ButtonControllerTypeU5BU5D_t3475699658* get_submitButton_22() const { return ___submitButton_22; }
	inline ButtonControllerTypeU5BU5D_t3475699658** get_address_of_submitButton_22() { return &___submitButton_22; }
	inline void set_submitButton_22(ButtonControllerTypeU5BU5D_t3475699658* value)
	{
		___submitButton_22 = value;
		Il2CppCodeGenWriteBarrier((&___submitButton_22), value);
	}

	inline static int32_t get_offset_of_submitCurrentNumberControllers_23() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___submitCurrentNumberControllers_23)); }
	inline int32_t get_submitCurrentNumberControllers_23() const { return ___submitCurrentNumberControllers_23; }
	inline int32_t* get_address_of_submitCurrentNumberControllers_23() { return &___submitCurrentNumberControllers_23; }
	inline void set_submitCurrentNumberControllers_23(int32_t value)
	{
		___submitCurrentNumberControllers_23 = value;
	}

	inline static int32_t get_offset_of_cancelButton_24() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___cancelButton_24)); }
	inline ButtonControllerTypeU5BU5D_t3475699658* get_cancelButton_24() const { return ___cancelButton_24; }
	inline ButtonControllerTypeU5BU5D_t3475699658** get_address_of_cancelButton_24() { return &___cancelButton_24; }
	inline void set_cancelButton_24(ButtonControllerTypeU5BU5D_t3475699658* value)
	{
		___cancelButton_24 = value;
		Il2CppCodeGenWriteBarrier((&___cancelButton_24), value);
	}

	inline static int32_t get_offset_of_cancelCurrentNumberControllers_25() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___cancelCurrentNumberControllers_25)); }
	inline int32_t get_cancelCurrentNumberControllers_25() const { return ___cancelCurrentNumberControllers_25; }
	inline int32_t* get_address_of_cancelCurrentNumberControllers_25() { return &___cancelCurrentNumberControllers_25; }
	inline void set_cancelCurrentNumberControllers_25(int32_t value)
	{
		___cancelCurrentNumberControllers_25 = value;
	}

	inline static int32_t get_offset_of_eventLock_26() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___eventLock_26)); }
	inline bool get_eventLock_26() const { return ___eventLock_26; }
	inline bool* get_address_of_eventLock_26() { return &___eventLock_26; }
	inline void set_eventLock_26(bool value)
	{
		___eventLock_26 = value;
	}

	inline static int32_t get_offset_of_currentEventIndex_27() { return static_cast<int32_t>(offsetof(EasyWiFiInputModule_t2360561143, ___currentEventIndex_27)); }
	inline int32_t get_currentEventIndex_27() const { return ___currentEventIndex_27; }
	inline int32_t* get_address_of_currentEventIndex_27() { return &___currentEventIndex_27; }
	inline void set_currentEventIndex_27(int32_t value)
	{
		___currentEventIndex_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWIFIINPUTMODULE_T2360561143_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_41;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_31)); }
	inline Sprite_t280657092 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_t280657092 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_32)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_41() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_41)); }
	inline bool get_m_Tracked_41() const { return ___m_Tracked_41; }
	inline bool* get_address_of_m_Tracked_41() { return &___m_Tracked_41; }
	inline void set_m_Tracked_41(bool value)
	{
		___m_Tracked_41 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_42;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_43;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_44;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_45;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_46;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_47;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_48;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_42)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_42() const { return ___s_VertScratch_42; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_42() { return &___s_VertScratch_42; }
	inline void set_s_VertScratch_42(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_42), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_43)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_43() const { return ___s_UVScratch_43; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_43() { return &___s_UVScratch_43; }
	inline void set_s_UVScratch_43(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_43), value);
	}

	inline static int32_t get_offset_of_s_Xy_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_44)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_44() const { return ___s_Xy_44; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_44() { return &___s_Xy_44; }
	inline void set_s_Xy_44(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_44), value);
	}

	inline static int32_t get_offset_of_s_Uv_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_45)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_45() const { return ___s_Uv_45; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_45() { return &___s_Uv_45; }
	inline void set_s_Uv_45(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_45 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_45), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_46)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_46() const { return ___m_TrackedTexturelessImages_46; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_46() { return &___m_TrackedTexturelessImages_46; }
	inline void set_m_TrackedTexturelessImages_46(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_46), value);
	}

	inline static int32_t get_offset_of_s_Initialized_47() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_47)); }
	inline bool get_s_Initialized_47() const { return ___s_Initialized_47; }
	inline bool* get_address_of_s_Initialized_47() { return &___s_Initialized_47; }
	inline void set_s_Initialized_47(bool value)
	{
		___s_Initialized_47 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_48() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_48)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_48() const { return ___U3CU3Ef__mgU24cache0_48; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_48() { return &___U3CU3Ef__mgU24cache0_48; }
	inline void set_U3CU3Ef__mgU24cache0_48(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// EasyWiFi.Core.JoystickControllerType[]
struct JoystickControllerTypeU5BU5D_t3315982781  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JoystickControllerType_t2945305588 * m_Items[1];

public:
	inline JoystickControllerType_t2945305588 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JoystickControllerType_t2945305588 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JoystickControllerType_t2945305588 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline JoystickControllerType_t2945305588 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JoystickControllerType_t2945305588 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JoystickControllerType_t2945305588 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// EasyWiFi.Core.DpadControllerType[]
struct DpadControllerTypeU5BU5D_t241551328  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DpadControllerType_t3440649293 * m_Items[1];

public:
	inline DpadControllerType_t3440649293 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DpadControllerType_t3440649293 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DpadControllerType_t3440649293 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DpadControllerType_t3440649293 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DpadControllerType_t3440649293 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DpadControllerType_t3440649293 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// EasyWiFi.Core.ButtonControllerType[]
struct ButtonControllerTypeU5BU5D_t3475699658  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ButtonControllerType_t4022003499 * m_Items[1];

public:
	inline ButtonControllerType_t4022003499 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ButtonControllerType_t4022003499 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ButtonControllerType_t4022003499 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ButtonControllerType_t4022003499 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ButtonControllerType_t4022003499 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ButtonControllerType_t4022003499 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void EasyWiFi.Core.EasyWiFiUtilities::checkForClient<System.Object>(System.String,System.Int32,T[]&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiUtilities_checkForClient_TisRuntimeObject_m1262374766_gshared (RuntimeObject * __this /* static, unused */, String_t* ___control0, int32_t ___player1, ObjectU5BU5D_t2843939325** ___controllerArray2, int32_t* ___arraySize3, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t1764640198 * p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * Component_GetComponent_TisRectTransform_t3704657025_m3396022872 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * Component_GetComponent_TisImage_t2670269651_m980647750 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Boolean ControllerConnected::assignPlayerIndex(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ControllerConnected_assignPlayerIndex_m2770117924 (ControllerConnected_t2933086185 * __this, int32_t ___current0, int32_t ___playerAreaIndex1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_gray_m1471337008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ControllerConnected::unAssignPlayerIndex(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ControllerConnected_unAssignPlayerIndex_m865676167 (ControllerConnected_t2933086185 * __this, int32_t ___currentPlayer0, int32_t ___playerAreaIndex1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void ControllerConnected::startGameScene()
extern "C" IL2CPP_METHOD_ATTR void ControllerConnected_startGameScene_m3728982123 (ControllerConnected_t2933086185 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t3916780224 * Component_GetComponent_TisRigidbody_t3916780224_m279685075 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Void EasyWiFi.ServerBackchannels.FloatServerBackchannel::setValue(System.Single)
extern "C" IL2CPP_METHOD_ATTR void FloatServerBackchannel_setValue_m1643359076 (FloatServerBackchannel_t1497256550 * __this, float ___newValue0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m3395934484 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single EasyWiFi.Core.EasyWiFiUtilities::relativeAngleInAxis(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float EasyWiFiUtilities_relativeAngleInAxis_m685036456 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___firstVector0, Vector3_t3722313464  ___secondVector1, Vector3_t3722313464  ___axisVector2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseInputModule__ctor_m545527485 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void BaseInputModule_OnEnable_m3148190187 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// System.Void EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void controllerConnectionsChangedHandler__ctor_m3129965162 (controllerConnectionsChangedHandler_t1809440778 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void EasyWiFi.Core.EasyWiFiController::add_On_ConnectionsChanged(EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler)
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiController_add_On_ConnectionsChanged_m633751502 (RuntimeObject * __this /* static, unused */, controllerConnectionsChangedHandler_t1809440778 * ___value0, const RuntimeMethod* method);
// System.Void EasyWiFi.Core.EasyWiFiUtilities::checkForClient<EasyWiFi.Core.ButtonControllerType>(System.String,System.Int32,T[]&,System.Int32&)
inline void EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728 (RuntimeObject * __this /* static, unused */, String_t* ___control0, int32_t ___player1, ButtonControllerTypeU5BU5D_t3475699658** ___controllerArray2, int32_t* ___arraySize3, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, String_t*, int32_t, ButtonControllerTypeU5BU5D_t3475699658**, int32_t*, const RuntimeMethod*))EasyWiFiUtilities_checkForClient_TisRuntimeObject_m1262374766_gshared)(__this /* static, unused */, ___control0, ___player1, ___controllerArray2, ___arraySize3, method);
}
// System.Void EasyWiFi.Core.EasyWiFiUtilities::checkForClient<EasyWiFi.Core.DpadControllerType>(System.String,System.Int32,T[]&,System.Int32&)
inline void EasyWiFiUtilities_checkForClient_TisDpadControllerType_t3440649293_m2166070655 (RuntimeObject * __this /* static, unused */, String_t* ___control0, int32_t ___player1, DpadControllerTypeU5BU5D_t241551328** ___controllerArray2, int32_t* ___arraySize3, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, String_t*, int32_t, DpadControllerTypeU5BU5D_t241551328**, int32_t*, const RuntimeMethod*))EasyWiFiUtilities_checkForClient_TisRuntimeObject_m1262374766_gshared)(__this /* static, unused */, ___control0, ___player1, ___controllerArray2, ___arraySize3, method);
}
// System.Void EasyWiFi.Core.EasyWiFiUtilities::checkForClient<EasyWiFi.Core.JoystickControllerType>(System.String,System.Int32,T[]&,System.Int32&)
inline void EasyWiFiUtilities_checkForClient_TisJoystickControllerType_t2945305588_m4143447703 (RuntimeObject * __this /* static, unused */, String_t* ___control0, int32_t ___player1, JoystickControllerTypeU5BU5D_t3315982781** ___controllerArray2, int32_t* ___arraySize3, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject * /* static, unused */, String_t*, int32_t, JoystickControllerTypeU5BU5D_t3315982781**, int32_t*, const RuntimeMethod*))EasyWiFiUtilities_checkForClient_TisRuntimeObject_m1262374766_gshared)(__this /* static, unused */, ___control0, ___player1, ___controllerArray2, ___arraySize3, method);
}
// System.Void EasyWiFi.Core.EasyWiFiController::remove_On_ConnectionsChanged(EasyWiFi.Core.EasyWiFiController/controllerConnectionsChangedHandler)
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiController_remove_On_ConnectionsChanged_m1037371686 (RuntimeObject * __this /* static, unused */, controllerConnectionsChangedHandler_t1809440778 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UIBehaviour_OnDestroy_m1613239498 (UIBehaviour_t3495933518 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
extern "C" IL2CPP_METHOD_ATTR bool BaseInputModule_ShouldActivateModule_m2157062110 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
extern "C" IL2CPP_METHOD_ATTR void BaseInputModule_ActivateModule_m3336241442 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t1003666588 * BaseInputModule_get_eventSystem_m1212899053 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * EventSystem_get_currentSelectedGameObject_m2939274948 (EventSystem_t1003666588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * EventSystem_get_firstSelectedGameObject_m1576206896 (EventSystem_t1003666588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
extern "C" IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m3267446555 (EventSystem_t1003666588 * __this, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
extern "C" IL2CPP_METHOD_ATTR void BaseInputModule_DeactivateModule_m856719157 (BaseInputModule_t2019268878 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::SendUpdateEventToSelectedObject()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_SendUpdateEventToSelectedObject_m3290230098 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
extern "C" IL2CPP_METHOD_ATTR bool EventSystem_get_sendNavigationEvents_m1703635420 (EventSystem_t1003666588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::SendMoveEventToSelectedObject()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_SendMoveEventToSelectedObject_m3525210972 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::SendSubmitEventToSelectedObject()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_SendSubmitEventToSelectedObject_m2326808280 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t1475332338 * ExecuteEvents_get_submitHandler_m94189868 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ISubmitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t1475332338 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t1475332338 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::get_cancelHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t2658898854 * ExecuteEvents_get_cancelHandler_m1220395193 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.ICancelHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisICancelHandler_t3974364820_m2876577334 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t2658898854 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t2658898854 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Single)
extern "C" IL2CPP_METHOD_ATTR Decimal_t2948259380  Convert_ToDecimal_m3508035522 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C" IL2CPP_METHOD_ATTR float Decimal_op_Explicit_m3488287464 (RuntimeObject * __this /* static, unused */, Decimal_t2948259380  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.EasyWiFiInputModule::GetRawMoveVector()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  EasyWiFiInputModule_GetRawMoveVector_m2393733022 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  AxisEventData_get_moveVector_m270528189 (AxisEventData_t2331243652 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::get_moveHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t3912835512 * ExecuteEvents_get_moveHandler_m3629736480 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IMoveHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIMoveHandler_t933334182_m109549 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t3912835512 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t3912835512 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
extern "C" IL2CPP_METHOD_ATTR EventFunction_1_t2950825503 * ExecuteEvents_get_updateSelectedHandler_m1601110817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IUpdateSelectedHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<!!0>)
inline bool ExecuteEvents_Execute_TisIUpdateSelectedHandler_t4266291469_m1289077245 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, BaseEventData_t3903027533 * p1, EventFunction_1_t2950825503 * p2, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, BaseEventData_t3903027533 *, EventFunction_1_t2950825503 *, const RuntimeMethod*))ExecuteEvents_Execute_TisRuntimeObject_m1952955951_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponentInChildren_TisText_t1901882714_m396351542 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m2180046661 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t1108360407 * Animation_get_Item_m2435218778 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationState::set_time(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationState_set_time_m3753967308 (AnimationState_t1108360407 * __this, float p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_magenta_m208363462 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_cyan_m765383084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_blue_m3190273327 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * GameObject_GetComponent_TisImage_t2670269651_m2486712510 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m3367380209 (StateMachineBehaviour_t957311111 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SelectPlayer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SelectPlayer__ctor_m410419474 (SelectPlayer_t1420868008 * __this, const RuntimeMethod* method)
{
	{
		// bool isLocked = false;
		__this->set_isLocked_11((bool)0);
		// int lockedArea = -1;
		__this->set_lockedArea_12((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SelectPlayer::Start()
extern "C" IL2CPP_METHOD_ATTR void SelectPlayer_Start_m2813840962 (SelectPlayer_t1420868008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectPlayer_Start_m2813840962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myRT = this.GetComponent<RectTransform>();
		// myRT = this.GetComponent<RectTransform>();
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_myRT_13(L_0);
		// sprite = this.GetComponent<Image>();
		// sprite = this.GetComponent<Image>();
		Image_t2670269651 * L_1 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_sprite_14(L_1);
		// }
		return;
	}
}
// System.Void SelectPlayer::Update()
extern "C" IL2CPP_METHOD_ATTR void SelectPlayer_Update_m282174998 (SelectPlayer_t1420868008 * __this, const RuntimeMethod* method)
{
	{
		// if (isLocked)
		bool L_0 = __this->get_isLocked_11();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// transform.position = lockedPosition;
		// transform.position = lockedPosition;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_lockedPosition_10();
		// transform.position = lockedPosition;
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void SelectPlayer::assignPlayer(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void SelectPlayer_assignPlayer_m4038111569 (SelectPlayer_t1420868008 * __this, ButtonControllerType_t4022003499 * ___button0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t3722313464  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector3_t3722313464  V_16;
	memset(&V_16, 0, sizeof(V_16));
	{
		// if (button.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___button0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_038b;
		}
	}
	{
		// if (!isLocked)
		bool L_2 = __this->get_isLocked_11();
		if (L_2)
		{
			goto IL_038a;
		}
	}
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (myRT.position.x >= (p1Center.x - 100) &&
		RectTransform_t3704657025 * L_3 = __this->get_myRT_13();
		// if (myRT.position.x >= (p1Center.x - 100) &&
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_2();
		Vector2_t2156229523 * L_6 = __this->get_address_of_p1Center_4();
		float L_7 = L_6->get_x_0();
		if ((!(((float)L_5) >= ((float)((float)il2cpp_codegen_subtract((float)L_7, (float)(100.0f)))))))
		{
			goto IL_00e6;
		}
	}
	{
		RectTransform_t3704657025 * L_8 = __this->get_myRT_13();
		// myRT.position.x <= (p1Center.x + 100) &&
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_x_2();
		Vector2_t2156229523 * L_11 = __this->get_address_of_p1Center_4();
		float L_12 = L_11->get_x_0();
		if ((!(((float)L_10) <= ((float)((float)il2cpp_codegen_add((float)L_12, (float)(100.0f)))))))
		{
			goto IL_00e6;
		}
	}
	{
		RectTransform_t3704657025 * L_13 = __this->get_myRT_13();
		// myRT.position.y >= (p1Center.y - 100) &&
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = (&V_3)->get_y_3();
		Vector2_t2156229523 * L_16 = __this->get_address_of_p1Center_4();
		float L_17 = L_16->get_y_1();
		if ((!(((float)L_15) >= ((float)((float)il2cpp_codegen_subtract((float)L_17, (float)(100.0f)))))))
		{
			goto IL_00e6;
		}
	}
	{
		RectTransform_t3704657025 * L_18 = __this->get_myRT_13();
		// myRT.position.y <= (p1Center.y + 100))
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		float L_20 = (&V_4)->get_y_3();
		Vector2_t2156229523 * L_21 = __this->get_address_of_p1Center_4();
		float L_22 = L_21->get_y_1();
		if ((!(((float)L_20) <= ((float)((float)il2cpp_codegen_add((float)L_22, (float)(100.0f)))))))
		{
			goto IL_00e6;
		}
	}
	{
		// lockedArea = 0;
		__this->set_lockedArea_12(0);
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		ControllerConnected_t2933086185 * L_23 = __this->get_cc_8();
		int32_t L_24 = __this->get_currentLogicalPlayer_9();
		int32_t L_25 = __this->get_lockedArea_12();
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		NullCheck(L_23);
		bool L_26 = ControllerConnected_assignPlayerIndex_m2770117924(L_23, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_034b;
	}

IL_00e6:
	{
		// else if (myRT.position.x >= (p2Center.x - 100) &&
		RectTransform_t3704657025 * L_27 = __this->get_myRT_13();
		// else if (myRT.position.x >= (p2Center.x - 100) &&
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		V_5 = L_28;
		float L_29 = (&V_5)->get_x_2();
		Vector2_t2156229523 * L_30 = __this->get_address_of_p2Center_5();
		float L_31 = L_30->get_x_0();
		if ((!(((float)L_29) >= ((float)((float)il2cpp_codegen_subtract((float)L_31, (float)(100.0f)))))))
		{
			goto IL_01b4;
		}
	}
	{
		RectTransform_t3704657025 * L_32 = __this->get_myRT_13();
		// myRT.position.x <= (p2Center.x + 100) &&
		NullCheck(L_32);
		Vector3_t3722313464  L_33 = Transform_get_position_m36019626(L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		float L_34 = (&V_6)->get_x_2();
		Vector2_t2156229523 * L_35 = __this->get_address_of_p2Center_5();
		float L_36 = L_35->get_x_0();
		if ((!(((float)L_34) <= ((float)((float)il2cpp_codegen_add((float)L_36, (float)(100.0f)))))))
		{
			goto IL_01b4;
		}
	}
	{
		RectTransform_t3704657025 * L_37 = __this->get_myRT_13();
		// myRT.position.y >= (p2Center.y - 100) &&
		NullCheck(L_37);
		Vector3_t3722313464  L_38 = Transform_get_position_m36019626(L_37, /*hidden argument*/NULL);
		V_7 = L_38;
		float L_39 = (&V_7)->get_y_3();
		Vector2_t2156229523 * L_40 = __this->get_address_of_p2Center_5();
		float L_41 = L_40->get_y_1();
		if ((!(((float)L_39) >= ((float)((float)il2cpp_codegen_subtract((float)L_41, (float)(100.0f)))))))
		{
			goto IL_01b4;
		}
	}
	{
		RectTransform_t3704657025 * L_42 = __this->get_myRT_13();
		// myRT.position.y <= (p2Center.y + 100))
		NullCheck(L_42);
		Vector3_t3722313464  L_43 = Transform_get_position_m36019626(L_42, /*hidden argument*/NULL);
		V_8 = L_43;
		float L_44 = (&V_8)->get_y_3();
		Vector2_t2156229523 * L_45 = __this->get_address_of_p2Center_5();
		float L_46 = L_45->get_y_1();
		if ((!(((float)L_44) <= ((float)((float)il2cpp_codegen_add((float)L_46, (float)(100.0f)))))))
		{
			goto IL_01b4;
		}
	}
	{
		// lockedArea = 1;
		__this->set_lockedArea_12(1);
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		ControllerConnected_t2933086185 * L_47 = __this->get_cc_8();
		int32_t L_48 = __this->get_currentLogicalPlayer_9();
		int32_t L_49 = __this->get_lockedArea_12();
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		NullCheck(L_47);
		bool L_50 = ControllerConnected_assignPlayerIndex_m2770117924(L_47, L_48, L_49, /*hidden argument*/NULL);
		V_0 = L_50;
		goto IL_034b;
	}

IL_01b4:
	{
		// else if (myRT.position.x >= (p3Center.x - 100) &&
		RectTransform_t3704657025 * L_51 = __this->get_myRT_13();
		// else if (myRT.position.x >= (p3Center.x - 100) &&
		NullCheck(L_51);
		Vector3_t3722313464  L_52 = Transform_get_position_m36019626(L_51, /*hidden argument*/NULL);
		V_9 = L_52;
		float L_53 = (&V_9)->get_x_2();
		Vector2_t2156229523 * L_54 = __this->get_address_of_p3Center_6();
		float L_55 = L_54->get_x_0();
		if ((!(((float)L_53) >= ((float)((float)il2cpp_codegen_subtract((float)L_55, (float)(100.0f)))))))
		{
			goto IL_0282;
		}
	}
	{
		RectTransform_t3704657025 * L_56 = __this->get_myRT_13();
		// myRT.position.x <= (p3Center.x + 100) &&
		NullCheck(L_56);
		Vector3_t3722313464  L_57 = Transform_get_position_m36019626(L_56, /*hidden argument*/NULL);
		V_10 = L_57;
		float L_58 = (&V_10)->get_x_2();
		Vector2_t2156229523 * L_59 = __this->get_address_of_p3Center_6();
		float L_60 = L_59->get_x_0();
		if ((!(((float)L_58) <= ((float)((float)il2cpp_codegen_add((float)L_60, (float)(100.0f)))))))
		{
			goto IL_0282;
		}
	}
	{
		RectTransform_t3704657025 * L_61 = __this->get_myRT_13();
		// myRT.position.y >= (p3Center.y - 100) &&
		NullCheck(L_61);
		Vector3_t3722313464  L_62 = Transform_get_position_m36019626(L_61, /*hidden argument*/NULL);
		V_11 = L_62;
		float L_63 = (&V_11)->get_y_3();
		Vector2_t2156229523 * L_64 = __this->get_address_of_p3Center_6();
		float L_65 = L_64->get_y_1();
		if ((!(((float)L_63) >= ((float)((float)il2cpp_codegen_subtract((float)L_65, (float)(100.0f)))))))
		{
			goto IL_0282;
		}
	}
	{
		RectTransform_t3704657025 * L_66 = __this->get_myRT_13();
		// myRT.position.y <= (p3Center.y + 100))
		NullCheck(L_66);
		Vector3_t3722313464  L_67 = Transform_get_position_m36019626(L_66, /*hidden argument*/NULL);
		V_12 = L_67;
		float L_68 = (&V_12)->get_y_3();
		Vector2_t2156229523 * L_69 = __this->get_address_of_p3Center_6();
		float L_70 = L_69->get_y_1();
		if ((!(((float)L_68) <= ((float)((float)il2cpp_codegen_add((float)L_70, (float)(100.0f)))))))
		{
			goto IL_0282;
		}
	}
	{
		// lockedArea = 2;
		__this->set_lockedArea_12(2);
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		ControllerConnected_t2933086185 * L_71 = __this->get_cc_8();
		int32_t L_72 = __this->get_currentLogicalPlayer_9();
		int32_t L_73 = __this->get_lockedArea_12();
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		NullCheck(L_71);
		bool L_74 = ControllerConnected_assignPlayerIndex_m2770117924(L_71, L_72, L_73, /*hidden argument*/NULL);
		V_0 = L_74;
		goto IL_034b;
	}

IL_0282:
	{
		// else if (myRT.position.x >= (p4Center.x - 100) &&
		RectTransform_t3704657025 * L_75 = __this->get_myRT_13();
		// else if (myRT.position.x >= (p4Center.x - 100) &&
		NullCheck(L_75);
		Vector3_t3722313464  L_76 = Transform_get_position_m36019626(L_75, /*hidden argument*/NULL);
		V_13 = L_76;
		float L_77 = (&V_13)->get_x_2();
		Vector2_t2156229523 * L_78 = __this->get_address_of_p4Center_7();
		float L_79 = L_78->get_x_0();
		if ((!(((float)L_77) >= ((float)((float)il2cpp_codegen_subtract((float)L_79, (float)(100.0f)))))))
		{
			goto IL_034b;
		}
	}
	{
		RectTransform_t3704657025 * L_80 = __this->get_myRT_13();
		// myRT.position.x <= (p4Center.x + 100) &&
		NullCheck(L_80);
		Vector3_t3722313464  L_81 = Transform_get_position_m36019626(L_80, /*hidden argument*/NULL);
		V_14 = L_81;
		float L_82 = (&V_14)->get_x_2();
		Vector2_t2156229523 * L_83 = __this->get_address_of_p4Center_7();
		float L_84 = L_83->get_x_0();
		if ((!(((float)L_82) <= ((float)((float)il2cpp_codegen_add((float)L_84, (float)(100.0f)))))))
		{
			goto IL_034b;
		}
	}
	{
		RectTransform_t3704657025 * L_85 = __this->get_myRT_13();
		// myRT.position.y >= (p4Center.y - 100) &&
		NullCheck(L_85);
		Vector3_t3722313464  L_86 = Transform_get_position_m36019626(L_85, /*hidden argument*/NULL);
		V_15 = L_86;
		float L_87 = (&V_15)->get_y_3();
		Vector2_t2156229523 * L_88 = __this->get_address_of_p4Center_7();
		float L_89 = L_88->get_y_1();
		if ((!(((float)L_87) >= ((float)((float)il2cpp_codegen_subtract((float)L_89, (float)(100.0f)))))))
		{
			goto IL_034b;
		}
	}
	{
		RectTransform_t3704657025 * L_90 = __this->get_myRT_13();
		// myRT.position.y <= (p4Center.y + 100))
		NullCheck(L_90);
		Vector3_t3722313464  L_91 = Transform_get_position_m36019626(L_90, /*hidden argument*/NULL);
		V_16 = L_91;
		float L_92 = (&V_16)->get_y_3();
		Vector2_t2156229523 * L_93 = __this->get_address_of_p4Center_7();
		float L_94 = L_93->get_y_1();
		if ((!(((float)L_92) <= ((float)((float)il2cpp_codegen_add((float)L_94, (float)(100.0f)))))))
		{
			goto IL_034b;
		}
	}
	{
		// lockedArea = 3;
		__this->set_lockedArea_12(3);
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		ControllerConnected_t2933086185 * L_95 = __this->get_cc_8();
		int32_t L_96 = __this->get_currentLogicalPlayer_9();
		int32_t L_97 = __this->get_lockedArea_12();
		// result = cc.assignPlayerIndex(currentLogicalPlayer, lockedArea);
		NullCheck(L_95);
		bool L_98 = ControllerConnected_assignPlayerIndex_m2770117924(L_95, L_96, L_97, /*hidden argument*/NULL);
		V_0 = L_98;
	}

IL_034b:
	{
		// if (result == true)
		bool L_99 = V_0;
		if (!L_99)
		{
			goto IL_0380;
		}
	}
	{
		// isLocked = true;
		__this->set_isLocked_11((bool)1);
		// sprite.color = Color.gray;
		Image_t2670269651 * L_100 = __this->get_sprite_14();
		// sprite.color = Color.gray;
		Color_t2555686324  L_101 = Color_get_gray_m1471337008(NULL /*static, unused*/, /*hidden argument*/NULL);
		// sprite.color = Color.gray;
		NullCheck(L_100);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_100, L_101);
		// lockedPosition = this.transform.position;
		// lockedPosition = this.transform.position;
		Transform_t3600365921 * L_102 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// lockedPosition = this.transform.position;
		NullCheck(L_102);
		Vector3_t3722313464  L_103 = Transform_get_position_m36019626(L_102, /*hidden argument*/NULL);
		__this->set_lockedPosition_10(L_103);
		goto IL_0389;
	}

IL_0380:
	{
		// lockedArea = -1;
		__this->set_lockedArea_12((-1));
	}

IL_0389:
	{
	}

IL_038a:
	{
	}

IL_038b:
	{
		// }
		return;
	}
}
// System.Void SelectPlayer::unAssignPlayer(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void SelectPlayer_unAssignPlayer_m4196190020 (SelectPlayer_t1420868008 * __this, ButtonControllerType_t4022003499 * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SelectPlayer_unAssignPlayer_m4196190020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (button.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___button0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// if (isLocked)
		bool L_2 = __this->get_isLocked_11();
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		// cc.unAssignPlayerIndex(currentLogicalPlayer, lockedArea);
		ControllerConnected_t2933086185 * L_3 = __this->get_cc_8();
		int32_t L_4 = __this->get_currentLogicalPlayer_9();
		int32_t L_5 = __this->get_lockedArea_12();
		// cc.unAssignPlayerIndex(currentLogicalPlayer, lockedArea);
		NullCheck(L_3);
		ControllerConnected_unAssignPlayerIndex_m865676167(L_3, L_4, L_5, /*hidden argument*/NULL);
		// isLocked = false;
		__this->set_isLocked_11((bool)0);
		// sprite.color = Color.white;
		Image_t2670269651 * L_6 = __this->get_sprite_14();
		// sprite.color = Color.white;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		// sprite.color = Color.white;
		NullCheck(L_6);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// lockedPosition = Vector3.zero;
		// lockedPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lockedPosition_10(L_8);
		// lockedArea = -1;
		__this->set_lockedArea_12((-1));
	}

IL_005a:
	{
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void SelectPlayer::startGame(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void SelectPlayer_startGame_m4261635628 (SelectPlayer_t1420868008 * __this, ButtonControllerType_t4022003499 * ___button0, const RuntimeMethod* method)
{
	{
		// if (button.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___button0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (isLocked)
		bool L_2 = __this->get_isLocked_11();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// cc.startGameScene();
		ControllerConnected_t2933086185 * L_3 = __this->get_cc_8();
		// cc.startGameScene();
		NullCheck(L_3);
		ControllerConnected_startGameScene_m3728982123(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
	}

IL_0026:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Spedometer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Spedometer__ctor_m3248586124 (Spedometer_t2461391377 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spedometer::Start()
extern "C" IL2CPP_METHOD_ATTR void Spedometer_Start_m2240748540 (Spedometer_t2461391377 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spedometer_Start_m2240748540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myRectTransform = this.gameObject.GetComponent<RectTransform>();
		// myRectTransform = this.gameObject.GetComponent<RectTransform>();
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// myRectTransform = this.gameObject.GetComponent<RectTransform>();
		NullCheck(L_0);
		RectTransform_t3704657025 * L_1 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_myRectTransform_4(L_1);
		// }
		return;
	}
}
// System.Void Spedometer::updateSpeed(EasyWiFi.Core.FloatBackchannelType)
extern "C" IL2CPP_METHOD_ATTR void Spedometer_updateSpeed_m2882988911 (Spedometer_t2461391377 * __this, FloatBackchannelType_t2465646524 * ___floatBackchannel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spedometer_updateSpeed_m2882988911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentSpeed = floatBackchannel.FLOAT_VALUE;
		FloatBackchannelType_t2465646524 * L_0 = ___floatBackchannel0;
		NullCheck(L_0);
		float L_1 = L_0->get_FLOAT_VALUE_9();
		__this->set_currentSpeed_5(L_1);
		// myRotation.z = -20.0f * currentSpeed + 10.0f;
		Vector3_t3722313464 * L_2 = __this->get_address_of_myRotation_6();
		float L_3 = __this->get_currentSpeed_5();
		L_2->set_z_4(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(-20.0f), (float)L_3)), (float)(10.0f))));
		// myRectTransform.localRotation = Quaternion.Euler(myRotation);
		RectTransform_t3704657025 * L_4 = __this->get_myRectTransform_4();
		Vector3_t3722313464  L_5 = __this->get_myRotation_6();
		// myRectTransform.localRotation = Quaternion.Euler(myRotation);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		// myRectTransform.localRotation = Quaternion.Euler(myRotation);
		NullCheck(L_4);
		Transform_set_localRotation_m19445462(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Steering::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Steering__ctor_m3491201775 (Steering_t318343568 * __this, const RuntimeMethod* method)
{
	{
		// float normalizeDegrees = 90f;
		__this->set_normalizeDegrees_9((90.0f));
		// float sensitivity = 5f;
		__this->set_sensitivity_10((5.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Steering::Start()
extern "C" IL2CPP_METHOD_ATTR void Steering_Start_m834360697 (Steering_t318343568 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Steering_Start_m834360697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myRigidbody = this.GetComponent<Rigidbody>();
		// myRigidbody = this.GetComponent<Rigidbody>();
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_myRigidbody_5(L_0);
		// }
		return;
	}
}
// System.Void Steering::Update()
extern "C" IL2CPP_METHOD_ATTR void Steering_Update_m1740365065 (Steering_t318343568 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// floatBackchannel.setValue(myRigidbody.velocity.magnitude);
		FloatServerBackchannel_t1497256550 * L_0 = __this->get_floatBackchannel_4();
		Rigidbody_t3916780224 * L_1 = __this->get_myRigidbody_5();
		// floatBackchannel.setValue(myRigidbody.velocity.magnitude);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Rigidbody_get_velocity_m2993632669(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// floatBackchannel.setValue(myRigidbody.velocity.magnitude);
		float L_3 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		// floatBackchannel.setValue(myRigidbody.velocity.magnitude);
		NullCheck(L_0);
		FloatServerBackchannel_setValue_m1643359076(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Steering::gasPedal(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void Steering_gasPedal_m2664735627 (Steering_t318343568 * __this, ButtonControllerType_t4022003499 * ___gasButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Steering_gasPedal_m2664735627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (gasButton.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___gasButton0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_009a;
		}
	}
	{
		// if (myRigidbody.velocity.magnitude > 1f)
		Rigidbody_t3916780224 * L_2 = __this->get_myRigidbody_5();
		// if (myRigidbody.velocity.magnitude > 1f)
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Rigidbody_get_velocity_m2993632669(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (myRigidbody.velocity.magnitude > 1f)
		float L_4 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		// myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
		Rigidbody_t3916780224 * L_5 = __this->get_myRigidbody_5();
		Rigidbody_t3916780224 * L_6 = __this->get_myRigidbody_5();
		// myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Rigidbody_get_velocity_m2993632669(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_sensitivity_10();
		// myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, (0.5f), /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * sensitivity * .5f);
		NullCheck(L_5);
		Rigidbody_AddForce_m3395934484(L_5, L_10, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_005a:
	{
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		Rigidbody_t3916780224 * L_11 = __this->get_myRigidbody_5();
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		Camera_t4157153871 * L_14 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_sensitivity_10();
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		Vector3_t3722313464  L_20 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, (5.0f), /*hidden argument*/NULL);
		// myRigidbody.AddForce((this.transform.position - Camera.main.transform.position) * sensitivity * 5f);
		NullCheck(L_11);
		Rigidbody_AddForce_m3395934484(L_11, L_20, /*hidden argument*/NULL);
	}

IL_0099:
	{
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void Steering::brakePedal(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void Steering_brakePedal_m3879917413 (Steering_t318343568 * __this, ButtonControllerType_t4022003499 * ___brakeButton0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Steering_brakePedal_m3879917413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// if (brakeButton.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___brakeButton0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_0098;
		}
	}
	{
		// if (myRigidbody.velocity.magnitude > 1f)
		Rigidbody_t3916780224 * L_2 = __this->get_myRigidbody_5();
		// if (myRigidbody.velocity.magnitude > 1f)
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Rigidbody_get_velocity_m2993632669(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (myRigidbody.velocity.magnitude > 1f)
		float L_4 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		Rigidbody_t3916780224 * L_5 = __this->get_myRigidbody_5();
		Rigidbody_t3916780224 * L_6 = __this->get_myRigidbody_5();
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Rigidbody_get_velocity_m2993632669(L_6, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_8 = __this->get_myRigidbody_5();
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Rigidbody_get_velocity_m2993632669(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		float L_10 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_7, ((-L_10)), /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude);
		NullCheck(L_5);
		Rigidbody_AddForce_m3395934484(L_5, L_11, /*hidden argument*/NULL);
		goto IL_0097;
	}

IL_005e:
	{
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		Rigidbody_t3916780224 * L_12 = __this->get_myRigidbody_5();
		Rigidbody_t3916780224 * L_13 = __this->get_myRigidbody_5();
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Rigidbody_get_velocity_m2993632669(L_13, /*hidden argument*/NULL);
		Rigidbody_t3916780224 * L_15 = __this->get_myRigidbody_5();
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Rigidbody_get_velocity_m2993632669(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		float L_17 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&V_2), /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_14, ((-L_17)), /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_18, (10.0f), /*hidden argument*/NULL);
		// myRigidbody.AddForce(myRigidbody.velocity * -myRigidbody.velocity.magnitude * 10f);
		NullCheck(L_12);
		Rigidbody_AddForce_m3395934484(L_12, L_19, /*hidden argument*/NULL);
	}

IL_0097:
	{
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void Steering::steerBall(EasyWiFi.Core.AccelerometerControllerType)
extern "C" IL2CPP_METHOD_ATTR void Steering_steerBall_m2156374613 (Steering_t318343568 * __this, AccelerometerControllerType_t3432367267 * ___accelerometer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Steering_steerBall_m2156374613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// accel.x = accelerometer.ACCELERATION_X;
		Vector3_t3722313464 * L_0 = __this->get_address_of_accel_6();
		AccelerometerControllerType_t3432367267 * L_1 = ___accelerometer0;
		NullCheck(L_1);
		float L_2 = L_1->get_ACCELERATION_X_9();
		L_0->set_x_2(L_2);
		// accel.y = accelerometer.ACCELERATION_Y;
		Vector3_t3722313464 * L_3 = __this->get_address_of_accel_6();
		AccelerometerControllerType_t3432367267 * L_4 = ___accelerometer0;
		NullCheck(L_4);
		float L_5 = L_4->get_ACCELERATION_Y_10();
		L_3->set_y_3(L_5);
		// accel.z = accelerometer.ACCELERATION_Z;
		Vector3_t3722313464 * L_6 = __this->get_address_of_accel_6();
		AccelerometerControllerType_t3432367267 * L_7 = ___accelerometer0;
		NullCheck(L_7);
		float L_8 = L_7->get_ACCELERATION_Z_11();
		L_6->set_z_4(L_8);
		// horizontal = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
		// horizontal = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_9 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = __this->get_accel_6();
		// horizontal = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
		Vector3_t3722313464  L_11 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		// horizontal = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
		Vector3_t3722313464  L_12 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		// horizontal = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.forward) / normalizeDegrees;
		float L_13 = EasyWiFiUtilities_relativeAngleInAxis_m685036456(NULL /*static, unused*/, L_9, L_11, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_normalizeDegrees_9();
		__this->set_horizontal_7(((float)((float)L_13/(float)L_14)));
		// vertical = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;
		// vertical = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;
		Vector3_t3722313464  L_15 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_16 = __this->get_accel_6();
		// vertical = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;
		Vector3_t3722313464  L_17 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		// vertical = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;
		Vector3_t3722313464  L_18 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		// vertical = EasyWiFiUtilities.relativeAngleInAxis(Vector3.up, -accel, Vector3.right) / normalizeDegrees;
		float L_19 = EasyWiFiUtilities_relativeAngleInAxis_m685036456(NULL /*static, unused*/, L_15, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_normalizeDegrees_9();
		__this->set_vertical_8(((float)((float)L_19/(float)L_20)));
		// horizontal *= -sensitivity;
		float L_21 = __this->get_horizontal_7();
		float L_22 = __this->get_sensitivity_10();
		__this->set_horizontal_7(((float)il2cpp_codegen_multiply((float)L_21, (float)((-L_22)))));
		// vertical *= -sensitivity;
		float L_23 = __this->get_vertical_8();
		float L_24 = __this->get_sensitivity_10();
		__this->set_vertical_8(((float)il2cpp_codegen_multiply((float)L_23, (float)((-L_24)))));
		// actionVectorPosition.x = horizontal;
		Vector3_t3722313464 * L_25 = __this->get_address_of_actionVectorPosition_11();
		float L_26 = __this->get_horizontal_7();
		L_25->set_x_2(L_26);
		// actionVectorPosition.y = 0f;
		Vector3_t3722313464 * L_27 = __this->get_address_of_actionVectorPosition_11();
		L_27->set_y_3((0.0f));
		// actionVectorPosition.z = vertical;
		Vector3_t3722313464 * L_28 = __this->get_address_of_actionVectorPosition_11();
		float L_29 = __this->get_vertical_8();
		L_28->set_z_4(L_29);
		// myRigidbody.AddForce(actionVectorPosition);
		Rigidbody_t3916780224 * L_30 = __this->get_myRigidbody_5();
		Vector3_t3722313464  L_31 = __this->get_actionVectorPosition_11();
		// myRigidbody.AddForce(actionVectorPosition);
		NullCheck(L_30);
		Rigidbody_AddForce_m3395934484(L_30, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Steering::moveX(EasyWiFi.Core.FloatBackchannelType)
extern "C" IL2CPP_METHOD_ATTR void Steering_moveX_m3436276748 (Steering_t318343568 * __this, FloatBackchannelType_t2465646524 * ___xValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Steering_moveX_m3436276748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// computerVector.x = xValue.FLOAT_VALUE;
		Vector3_t3722313464 * L_0 = __this->get_address_of_computerVector_12();
		FloatBackchannelType_t2465646524 * L_1 = ___xValue0;
		NullCheck(L_1);
		float L_2 = L_1->get_FLOAT_VALUE_9();
		L_0->set_x_2(L_2);
		// computerVector.y = 0f;
		Vector3_t3722313464 * L_3 = __this->get_address_of_computerVector_12();
		L_3->set_y_3((0.0f));
		// computerVector.z = 0f;
		Vector3_t3722313464 * L_4 = __this->get_address_of_computerVector_12();
		L_4->set_z_4((0.0f));
		// myRigidbody.AddForce(computerVector * sensitivity);
		Rigidbody_t3916780224 * L_5 = __this->get_myRigidbody_5();
		Vector3_t3722313464  L_6 = __this->get_computerVector_12();
		float L_7 = __this->get_sensitivity_10();
		// myRigidbody.AddForce(computerVector * sensitivity);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		// myRigidbody.AddForce(computerVector * sensitivity);
		NullCheck(L_5);
		Rigidbody_AddForce_m3395934484(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Steering::moveZ(EasyWiFi.Core.FloatBackchannelType)
extern "C" IL2CPP_METHOD_ATTR void Steering_moveZ_m1169759186 (Steering_t318343568 * __this, FloatBackchannelType_t2465646524 * ___zValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Steering_moveZ_m1169759186_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// computerVector.x = 0f;
		Vector3_t3722313464 * L_0 = __this->get_address_of_computerVector_12();
		L_0->set_x_2((0.0f));
		// computerVector.y = 0f;
		Vector3_t3722313464 * L_1 = __this->get_address_of_computerVector_12();
		L_1->set_y_3((0.0f));
		// computerVector.z = zValue.FLOAT_VALUE;
		Vector3_t3722313464 * L_2 = __this->get_address_of_computerVector_12();
		FloatBackchannelType_t2465646524 * L_3 = ___zValue0;
		NullCheck(L_3);
		float L_4 = L_3->get_FLOAT_VALUE_9();
		L_2->set_z_4(L_4);
		// myRigidbody.AddForce(computerVector * sensitivity);
		Rigidbody_t3916780224 * L_5 = __this->get_myRigidbody_5();
		Vector3_t3722313464  L_6 = __this->get_computerVector_12();
		float L_7 = __this->get_sensitivity_10();
		// myRigidbody.AddForce(computerVector * sensitivity);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		// myRigidbody.AddForce(computerVector * sensitivity);
		NullCheck(L_5);
		Rigidbody_AddForce_m3395934484(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule__ctor_m3444412674 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule__ctor_m3444412674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EasyWiFiConstants.PLAYER_NUMBER player = EasyWiFiConstants.PLAYER_NUMBER.Player1;
		__this->set_player_10(0);
		// public EasyWiFiConstants.UNITY_UI_INPUT_TYPE navigationControlType = EasyWiFiConstants.UNITY_UI_INPUT_TYPE.Joystick;
		__this->set_navigationControlType_11(0);
		// public string navigationControlName = "Joystick1";
		__this->set_navigationControlName_12(_stringLiteral2608531016);
		// public EasyWiFiConstants.UNITY_UI_SELECTION_TYPE submitControlType = EasyWiFiConstants.UNITY_UI_SELECTION_TYPE.Button;
		__this->set_submitControlType_13(0);
		// public string submitControlName = "Button1";
		__this->set_submitControlName_14(_stringLiteral1757590412);
		// public EasyWiFiConstants.UNITY_UI_SELECTION_TYPE cancelControlType = EasyWiFiConstants.UNITY_UI_SELECTION_TYPE.Button;
		__this->set_cancelControlType_15(0);
		// public string cancelControlName = "Button2";
		__this->set_cancelControlName_16(_stringLiteral2160874939);
		// public float repeatEventRate = .25f;
		__this->set_repeatEventRate_17((0.25f));
		// JoystickControllerType[] joystick = new JoystickControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_MAX_CONTROLLERS_46();
		JoystickControllerTypeU5BU5D_t3315982781* L_1 = (JoystickControllerTypeU5BU5D_t3315982781*)SZArrayNew(JoystickControllerTypeU5BU5D_t3315982781_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_joystick_18(L_1);
		// int joystickCurrentNumberControllers = 0;
		__this->set_joystickCurrentNumberControllers_19(0);
		// DpadControllerType[] dpad = new DpadControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
		int32_t L_2 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_MAX_CONTROLLERS_46();
		DpadControllerTypeU5BU5D_t241551328* L_3 = (DpadControllerTypeU5BU5D_t241551328*)SZArrayNew(DpadControllerTypeU5BU5D_t241551328_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_dpad_20(L_3);
		// int dpadCurrentNumberControllers = 0;
		__this->set_dpadCurrentNumberControllers_21(0);
		// ButtonControllerType[] submitButton = new ButtonControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
		int32_t L_4 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_MAX_CONTROLLERS_46();
		ButtonControllerTypeU5BU5D_t3475699658* L_5 = (ButtonControllerTypeU5BU5D_t3475699658*)SZArrayNew(ButtonControllerTypeU5BU5D_t3475699658_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_submitButton_22(L_5);
		// int submitCurrentNumberControllers = 0;
		__this->set_submitCurrentNumberControllers_23(0);
		// ButtonControllerType[] cancelButton = new ButtonControllerType[EasyWiFiConstants.MAX_CONTROLLERS];
		int32_t L_6 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_MAX_CONTROLLERS_46();
		ButtonControllerTypeU5BU5D_t3475699658* L_7 = (ButtonControllerTypeU5BU5D_t3475699658*)SZArrayNew(ButtonControllerTypeU5BU5D_t3475699658_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_cancelButton_24(L_7);
		// int cancelCurrentNumberControllers = 0;
		__this->set_cancelCurrentNumberControllers_25(0);
		// int currentEventIndex = 0;
		__this->set_currentEventIndex_27(0);
		// protected EasyWiFiInputModule()
		BaseInputModule__ctor_m545527485(__this, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_OnEnable_m2460388209 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_OnEnable_m2460388209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		// base.OnEnable();
		BaseInputModule_OnEnable_m3148190187(__this, /*hidden argument*/NULL);
		// EasyWiFiController.On_ConnectionsChanged += checkForNewConnections;
		intptr_t L_0 = (intptr_t)EasyWiFiInputModule_checkForNewConnections_m3658888376_RuntimeMethod_var;
		controllerConnectionsChangedHandler_t1809440778 * L_1 = (controllerConnectionsChangedHandler_t1809440778 *)il2cpp_codegen_object_new(controllerConnectionsChangedHandler_t1809440778_il2cpp_TypeInfo_var);
		controllerConnectionsChangedHandler__ctor_m3129965162(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		// EasyWiFiController.On_ConnectionsChanged += checkForNewConnections;
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiController_t765539194_il2cpp_TypeInfo_var);
		EasyWiFiController_add_On_ConnectionsChanged_m633751502(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// if (submitButton[0] == null && EasyWiFiController.lastConnectedPlayerNumber >= 0)
		ButtonControllerTypeU5BU5D_t3475699658* L_2 = __this->get_submitButton_22();
		NullCheck(L_2);
		int32_t L_3 = 0;
		ButtonControllerType_t4022003499 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_00bb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiController_t765539194_il2cpp_TypeInfo_var);
		int32_t L_5 = ((EasyWiFiController_t765539194_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiController_t765539194_il2cpp_TypeInfo_var))->get_lastConnectedPlayerNumber_27();
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		// EasyWiFiUtilities.checkForClient(submitControlName, (int)player, ref submitButton, ref submitCurrentNumberControllers);
		String_t* L_6 = __this->get_submitControlName_14();
		int32_t L_7 = __this->get_player_10();
		ButtonControllerTypeU5BU5D_t3475699658** L_8 = __this->get_address_of_submitButton_22();
		int32_t* L_9 = __this->get_address_of_submitCurrentNumberControllers_23();
		// EasyWiFiUtilities.checkForClient(submitControlName, (int)player, ref submitButton, ref submitCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728(NULL /*static, unused*/, L_6, L_7, (ButtonControllerTypeU5BU5D_t3475699658**)L_8, (int32_t*)L_9, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728_RuntimeMethod_var);
		// EasyWiFiUtilities.checkForClient(cancelControlName, (int)player, ref cancelButton, ref cancelCurrentNumberControllers);
		String_t* L_10 = __this->get_cancelControlName_16();
		int32_t L_11 = __this->get_player_10();
		ButtonControllerTypeU5BU5D_t3475699658** L_12 = __this->get_address_of_cancelButton_24();
		int32_t* L_13 = __this->get_address_of_cancelCurrentNumberControllers_25();
		// EasyWiFiUtilities.checkForClient(cancelControlName, (int)player, ref cancelButton, ref cancelCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728(NULL /*static, unused*/, L_10, L_11, (ButtonControllerTypeU5BU5D_t3475699658**)L_12, (int32_t*)L_13, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728_RuntimeMethod_var);
		// if (navigationControlType == EasyWiFiConstants.UNITY_UI_INPUT_TYPE.Dpad)
		int32_t L_14 = __this->get_navigationControlType_11();
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_009b;
		}
	}
	{
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref dpad, ref dpadCurrentNumberControllers);
		String_t* L_15 = __this->get_navigationControlName_12();
		int32_t L_16 = __this->get_player_10();
		DpadControllerTypeU5BU5D_t241551328** L_17 = __this->get_address_of_dpad_20();
		int32_t* L_18 = __this->get_address_of_dpadCurrentNumberControllers_21();
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref dpad, ref dpadCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisDpadControllerType_t3440649293_m2166070655(NULL /*static, unused*/, L_15, L_16, (DpadControllerTypeU5BU5D_t241551328**)L_17, (int32_t*)L_18, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisDpadControllerType_t3440649293_m2166070655_RuntimeMethod_var);
		goto IL_00ba;
	}

IL_009b:
	{
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref joystick, ref joystickCurrentNumberControllers);
		String_t* L_19 = __this->get_navigationControlName_12();
		int32_t L_20 = __this->get_player_10();
		JoystickControllerTypeU5BU5D_t3315982781** L_21 = __this->get_address_of_joystick_18();
		int32_t* L_22 = __this->get_address_of_joystickCurrentNumberControllers_19();
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref joystick, ref joystickCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisJoystickControllerType_t2945305588_m4143447703(NULL /*static, unused*/, L_19, L_20, (JoystickControllerTypeU5BU5D_t3315982781**)L_21, (int32_t*)L_22, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisJoystickControllerType_t2945305588_m4143447703_RuntimeMethod_var);
	}

IL_00ba:
	{
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_OnDestroy_m3276105333 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_OnDestroy_m3276105333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyWiFiController.On_ConnectionsChanged -= checkForNewConnections;
		intptr_t L_0 = (intptr_t)EasyWiFiInputModule_checkForNewConnections_m3658888376_RuntimeMethod_var;
		controllerConnectionsChangedHandler_t1809440778 * L_1 = (controllerConnectionsChangedHandler_t1809440778 *)il2cpp_codegen_object_new(controllerConnectionsChangedHandler_t1809440778_il2cpp_TypeInfo_var);
		controllerConnectionsChangedHandler__ctor_m3129965162(L_1, __this, (intptr_t)L_0, /*hidden argument*/NULL);
		// EasyWiFiController.On_ConnectionsChanged -= checkForNewConnections;
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiController_t765539194_il2cpp_TypeInfo_var);
		EasyWiFiController_remove_On_ConnectionsChanged_m1037371686(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// base.OnDestroy();
		// base.OnDestroy();
		UIBehaviour_OnDestroy_m1613239498(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::UpdateModule()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_UpdateModule_m1082271972 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::IsModuleSupported()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_IsModuleSupported_m1138042932 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::ShouldActivateModule()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_ShouldActivateModule_m47970245 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_ShouldActivateModule_m47970245_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (!base.ShouldActivateModule())
		// if (!base.ShouldActivateModule())
		bool L_0 = BaseInputModule_ShouldActivateModule_m2157062110(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_026f;
	}

IL_0013:
	{
		// if (submitButton == null && cancelButton == null && joystick == null && dpad == null)
		ButtonControllerTypeU5BU5D_t3475699658* L_1 = __this->get_submitButton_22();
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		ButtonControllerTypeU5BU5D_t3475699658* L_2 = __this->get_cancelButton_24();
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		JoystickControllerTypeU5BU5D_t3315982781* L_3 = __this->get_joystick_18();
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		DpadControllerTypeU5BU5D_t241551328* L_4 = __this->get_dpad_20();
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_026f;
	}

IL_0047:
	{
		// var shouldActivate = false;
		V_1 = (bool)0;
		// for (int i = 0; i < submitCurrentNumberControllers; i++)
		V_2 = 0;
		goto IL_00a5;
	}

IL_0050:
	{
		// if (submitButton[i] != null && submitButton[i].serverKey != null && submitButton[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
		ButtonControllerTypeU5BU5D_t3475699658* L_5 = __this->get_submitButton_22();
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ButtonControllerType_t4022003499 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if (!L_8)
		{
			goto IL_00a0;
		}
	}
	{
		ButtonControllerTypeU5BU5D_t3475699658* L_9 = __this->get_submitButton_22();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ButtonControllerType_t4022003499 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		String_t* L_13 = ((BaseControllerType_t2448176594 *)L_12)->get_serverKey_1();
		if (!L_13)
		{
			goto IL_00a0;
		}
	}
	{
		ButtonControllerTypeU5BU5D_t3475699658* L_14 = __this->get_submitButton_22();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ButtonControllerType_t4022003499 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		int32_t L_18 = ((BaseControllerType_t2448176594 *)L_17)->get_logicalPlayerNumber_6();
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var);
		int32_t L_19 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_PLAYERNUMBER_DISCONNECTED_43();
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_00a0;
		}
	}
	{
		// shouldActivate |= submitButton[i].BUTTON_STATE_IS_PRESSED;
		bool L_20 = V_1;
		ButtonControllerTypeU5BU5D_t3475699658* L_21 = __this->get_submitButton_22();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ButtonControllerType_t4022003499 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		bool L_25 = L_24->get_BUTTON_STATE_IS_PRESSED_9();
		V_1 = (bool)((int32_t)((int32_t)L_20|(int32_t)L_25));
		// currentEventIndex = i;
		int32_t L_26 = V_2;
		__this->set_currentEventIndex_27(L_26);
	}

IL_00a0:
	{
		// for (int i = 0; i < submitCurrentNumberControllers; i++)
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a5:
	{
		// for (int i = 0; i < submitCurrentNumberControllers; i++)
		int32_t L_28 = V_2;
		int32_t L_29 = __this->get_submitCurrentNumberControllers_23();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0050;
		}
	}
	{
		// for (int i = 0; i < cancelCurrentNumberControllers; i++)
		V_3 = 0;
		goto IL_010d;
	}

IL_00b8:
	{
		// if (cancelButton[i] != null && cancelButton[i].serverKey != null && cancelButton[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
		ButtonControllerTypeU5BU5D_t3475699658* L_30 = __this->get_cancelButton_24();
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		ButtonControllerType_t4022003499 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if (!L_33)
		{
			goto IL_0108;
		}
	}
	{
		ButtonControllerTypeU5BU5D_t3475699658* L_34 = __this->get_cancelButton_24();
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		ButtonControllerType_t4022003499 * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38 = ((BaseControllerType_t2448176594 *)L_37)->get_serverKey_1();
		if (!L_38)
		{
			goto IL_0108;
		}
	}
	{
		ButtonControllerTypeU5BU5D_t3475699658* L_39 = __this->get_cancelButton_24();
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		ButtonControllerType_t4022003499 * L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		int32_t L_43 = ((BaseControllerType_t2448176594 *)L_42)->get_logicalPlayerNumber_6();
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var);
		int32_t L_44 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_PLAYERNUMBER_DISCONNECTED_43();
		if ((((int32_t)L_43) == ((int32_t)L_44)))
		{
			goto IL_0108;
		}
	}
	{
		// shouldActivate |= cancelButton[i].BUTTON_STATE_IS_PRESSED;
		bool L_45 = V_1;
		ButtonControllerTypeU5BU5D_t3475699658* L_46 = __this->get_cancelButton_24();
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		ButtonControllerType_t4022003499 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		bool L_50 = L_49->get_BUTTON_STATE_IS_PRESSED_9();
		V_1 = (bool)((int32_t)((int32_t)L_45|(int32_t)L_50));
		// currentEventIndex = i;
		int32_t L_51 = V_3;
		__this->set_currentEventIndex_27(L_51);
	}

IL_0108:
	{
		// for (int i = 0; i < cancelCurrentNumberControllers; i++)
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_010d:
	{
		// for (int i = 0; i < cancelCurrentNumberControllers; i++)
		int32_t L_53 = V_3;
		int32_t L_54 = __this->get_cancelCurrentNumberControllers_25();
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00b8;
		}
	}
	{
		// if (navigationControlType == EasyWiFiConstants.UNITY_UI_INPUT_TYPE.Dpad)
		int32_t L_55 = __this->get_navigationControlType_11();
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			goto IL_01d0;
		}
	}
	{
		// for (int i = 0; i < dpadCurrentNumberControllers; i++)
		V_4 = 0;
		goto IL_01bd;
	}

IL_012e:
	{
		// if (dpad[i] != null && dpad[i].serverKey != null && dpad[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
		DpadControllerTypeU5BU5D_t241551328* L_56 = __this->get_dpad_20();
		int32_t L_57 = V_4;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		DpadControllerType_t3440649293 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if (!L_59)
		{
			goto IL_01b6;
		}
	}
	{
		DpadControllerTypeU5BU5D_t241551328* L_60 = __this->get_dpad_20();
		int32_t L_61 = V_4;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		DpadControllerType_t3440649293 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		String_t* L_64 = ((BaseControllerType_t2448176594 *)L_63)->get_serverKey_1();
		if (!L_64)
		{
			goto IL_01b6;
		}
	}
	{
		DpadControllerTypeU5BU5D_t241551328* L_65 = __this->get_dpad_20();
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		DpadControllerType_t3440649293 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		int32_t L_69 = ((BaseControllerType_t2448176594 *)L_68)->get_logicalPlayerNumber_6();
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var);
		int32_t L_70 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_PLAYERNUMBER_DISCONNECTED_43();
		if ((((int32_t)L_69) == ((int32_t)L_70)))
		{
			goto IL_01b6;
		}
	}
	{
		// shouldActivate |= dpad[i].DPAD_DOWN_PRESSED;
		bool L_71 = V_1;
		DpadControllerTypeU5BU5D_t241551328* L_72 = __this->get_dpad_20();
		int32_t L_73 = V_4;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		DpadControllerType_t3440649293 * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		bool L_76 = L_75->get_DPAD_DOWN_PRESSED_12();
		V_1 = (bool)((int32_t)((int32_t)L_71|(int32_t)L_76));
		// shouldActivate |= dpad[i].DPAD_UP_PRESSED;
		bool L_77 = V_1;
		DpadControllerTypeU5BU5D_t241551328* L_78 = __this->get_dpad_20();
		int32_t L_79 = V_4;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		DpadControllerType_t3440649293 * L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		bool L_82 = L_81->get_DPAD_UP_PRESSED_10();
		V_1 = (bool)((int32_t)((int32_t)L_77|(int32_t)L_82));
		// shouldActivate |= dpad[i].DPAD_LEFT_PRESSED;
		bool L_83 = V_1;
		DpadControllerTypeU5BU5D_t241551328* L_84 = __this->get_dpad_20();
		int32_t L_85 = V_4;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		DpadControllerType_t3440649293 * L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		bool L_88 = L_87->get_DPAD_LEFT_PRESSED_9();
		V_1 = (bool)((int32_t)((int32_t)L_83|(int32_t)L_88));
		// shouldActivate |= dpad[i].DPAD_RIGHT_PRESSED;
		bool L_89 = V_1;
		DpadControllerTypeU5BU5D_t241551328* L_90 = __this->get_dpad_20();
		int32_t L_91 = V_4;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		DpadControllerType_t3440649293 * L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		bool L_94 = L_93->get_DPAD_RIGHT_PRESSED_11();
		V_1 = (bool)((int32_t)((int32_t)L_89|(int32_t)L_94));
		// currentEventIndex = i;
		int32_t L_95 = V_4;
		__this->set_currentEventIndex_27(L_95);
	}

IL_01b6:
	{
		// for (int i = 0; i < dpadCurrentNumberControllers; i++)
		int32_t L_96 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_01bd:
	{
		// for (int i = 0; i < dpadCurrentNumberControllers; i++)
		int32_t L_97 = V_4;
		int32_t L_98 = __this->get_dpadCurrentNumberControllers_21();
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_012e;
		}
	}
	{
		goto IL_0268;
	}

IL_01d0:
	{
		// for (int i = 0; i < joystickCurrentNumberControllers; i++)
		V_5 = 0;
		goto IL_025a;
	}

IL_01d9:
	{
		// if (joystick[i] != null && joystick[i].serverKey != null && joystick[i].logicalPlayerNumber != EasyWiFiConstants.PLAYERNUMBER_DISCONNECTED)
		JoystickControllerTypeU5BU5D_t3315982781* L_99 = __this->get_joystick_18();
		int32_t L_100 = V_5;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		JoystickControllerType_t2945305588 * L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		if (!L_102)
		{
			goto IL_0253;
		}
	}
	{
		JoystickControllerTypeU5BU5D_t3315982781* L_103 = __this->get_joystick_18();
		int32_t L_104 = V_5;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		JoystickControllerType_t2945305588 * L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		String_t* L_107 = ((BaseControllerType_t2448176594 *)L_106)->get_serverKey_1();
		if (!L_107)
		{
			goto IL_0253;
		}
	}
	{
		JoystickControllerTypeU5BU5D_t3315982781* L_108 = __this->get_joystick_18();
		int32_t L_109 = V_5;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		JoystickControllerType_t2945305588 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		int32_t L_112 = ((BaseControllerType_t2448176594 *)L_111)->get_logicalPlayerNumber_6();
		IL2CPP_RUNTIME_CLASS_INIT(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var);
		int32_t L_113 = ((EasyWiFiConstants_t2324710436_StaticFields*)il2cpp_codegen_static_fields_for(EasyWiFiConstants_t2324710436_il2cpp_TypeInfo_var))->get_PLAYERNUMBER_DISCONNECTED_43();
		if ((((int32_t)L_112) == ((int32_t)L_113)))
		{
			goto IL_0253;
		}
	}
	{
		// shouldActivate |= joystick[i].JOYSTICK_HORIZONTAL != 0f;
		bool L_114 = V_1;
		JoystickControllerTypeU5BU5D_t3315982781* L_115 = __this->get_joystick_18();
		int32_t L_116 = V_5;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		JoystickControllerType_t2945305588 * L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		float L_119 = L_118->get_JOYSTICK_HORIZONTAL_9();
		V_1 = (bool)((int32_t)((int32_t)L_114|(int32_t)((((int32_t)((((float)L_119) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		// shouldActivate |= joystick[i].JOYSTICK_VERTICAL != 0f;
		bool L_120 = V_1;
		JoystickControllerTypeU5BU5D_t3315982781* L_121 = __this->get_joystick_18();
		int32_t L_122 = V_5;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		JoystickControllerType_t2945305588 * L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		float L_125 = L_124->get_JOYSTICK_VERTICAL_10();
		V_1 = (bool)((int32_t)((int32_t)L_120|(int32_t)((((int32_t)((((float)L_125) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		// currentEventIndex = i;
		int32_t L_126 = V_5;
		__this->set_currentEventIndex_27(L_126);
	}

IL_0253:
	{
		// for (int i = 0; i < joystickCurrentNumberControllers; i++)
		int32_t L_127 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
	}

IL_025a:
	{
		// for (int i = 0; i < joystickCurrentNumberControllers; i++)
		int32_t L_128 = V_5;
		int32_t L_129 = __this->get_joystickCurrentNumberControllers_19();
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_01d9;
		}
	}
	{
	}

IL_0268:
	{
		// return shouldActivate;
		bool L_130 = V_1;
		V_0 = L_130;
		goto IL_026f;
	}

IL_026f:
	{
		// }
		bool L_131 = V_0;
		return L_131;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::ActivateModule()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_ActivateModule_m359813451 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_ActivateModule_m359813451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		// base.ActivateModule();
		// base.ActivateModule();
		BaseInputModule_ActivateModule_m3336241442(__this, /*hidden argument*/NULL);
		// var toSelect = eventSystem.currentSelectedGameObject;
		// var toSelect = eventSystem.currentSelectedGameObject;
		EventSystem_t1003666588 * L_0 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// var toSelect = eventSystem.currentSelectedGameObject;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = EventSystem_get_currentSelectedGameObject_m2939274948(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (toSelect == null)
		GameObject_t1113636619 * L_2 = V_0;
		// if (toSelect == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// toSelect = eventSystem.firstSelectedGameObject;
		// toSelect = eventSystem.firstSelectedGameObject;
		EventSystem_t1003666588 * L_4 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// toSelect = eventSystem.firstSelectedGameObject;
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = EventSystem_get_firstSelectedGameObject_m1576206896(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002b:
	{
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		EventSystem_t1003666588 * L_6 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		BaseEventData_t3903027533 * L_7 = VirtFuncInvoker0< BaseEventData_t3903027533 * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		NullCheck(L_6);
		EventSystem_SetSelectedGameObject_m3267446555(L_6, (GameObject_t1113636619 *)NULL, L_7, /*hidden argument*/NULL);
		// eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
		// eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
		EventSystem_t1003666588 * L_8 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = V_0;
		// eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
		BaseEventData_t3903027533 * L_10 = VirtFuncInvoker0< BaseEventData_t3903027533 * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		// eventSystem.SetSelectedGameObject(toSelect, GetBaseEventData());
		NullCheck(L_8);
		EventSystem_SetSelectedGameObject_m3267446555(L_8, L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::DeactivateModule()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_DeactivateModule_m148515214 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	{
		// base.DeactivateModule();
		// base.DeactivateModule();
		BaseInputModule_DeactivateModule_m856719157(__this, /*hidden argument*/NULL);
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		EventSystem_t1003666588 * L_0 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		BaseEventData_t3903027533 * L_1 = VirtFuncInvoker0< BaseEventData_t3903027533 * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		// eventSystem.SetSelectedGameObject(null, GetBaseEventData());
		NullCheck(L_0);
		EventSystem_SetSelectedGameObject_m3267446555(L_0, (GameObject_t1113636619 *)NULL, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::Process()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_Process_m1721294509 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// bool usedEvent = SendUpdateEventToSelectedObject();
		// bool usedEvent = SendUpdateEventToSelectedObject();
		bool L_0 = EasyWiFiInputModule_SendUpdateEventToSelectedObject_m3290230098(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (eventSystem.sendNavigationEvents)
		// if (eventSystem.sendNavigationEvents)
		EventSystem_t1003666588 * L_1 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// if (eventSystem.sendNavigationEvents)
		NullCheck(L_1);
		bool L_2 = EventSystem_get_sendNavigationEvents_m1703635420(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// if (!usedEvent)
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		// usedEvent |= SendMoveEventToSelectedObject();
		bool L_4 = V_0;
		// usedEvent |= SendMoveEventToSelectedObject();
		bool L_5 = EasyWiFiInputModule_SendMoveEventToSelectedObject_m3525210972(__this, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_4|(int32_t)L_5));
	}

IL_0028:
	{
		// if (!usedEvent)
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		// SendSubmitEventToSelectedObject();
		// SendSubmitEventToSelectedObject();
		EasyWiFiInputModule_SendSubmitEventToSelectedObject_m2326808280(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::SendSubmitEventToSelectedObject()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_SendSubmitEventToSelectedObject_m2326808280 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_SendSubmitEventToSelectedObject_m2326808280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BaseEventData_t3903027533 * V_1 = NULL;
	{
		// if (eventSystem.currentSelectedGameObject == null)
		// if (eventSystem.currentSelectedGameObject == null)
		EventSystem_t1003666588 * L_0 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// if (eventSystem.currentSelectedGameObject == null)
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = EventSystem_get_currentSelectedGameObject_m2939274948(L_0, /*hidden argument*/NULL);
		// if (eventSystem.currentSelectedGameObject == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_00d3;
	}

IL_001e:
	{
		// if (eventLock)
		bool L_3 = __this->get_eventLock_26();
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_00d3;
	}

IL_0030:
	{
		// var data = GetBaseEventData();
		// var data = GetBaseEventData();
		BaseEventData_t3903027533 * L_4 = VirtFuncInvoker0< BaseEventData_t3903027533 * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_1 = L_4;
		// if (submitButton[currentEventIndex].BUTTON_STATE_IS_PRESSED)
		ButtonControllerTypeU5BU5D_t3475699658* L_5 = __this->get_submitButton_22();
		int32_t L_6 = __this->get_currentEventIndex_27();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ButtonControllerType_t4022003499 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		bool L_9 = L_8->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		// eventLock = true;
		__this->set_eventLock_26((bool)1);
		// Invoke("releaseEventLock", repeatEventRate);
		float L_10 = __this->get_repeatEventRate_17();
		// Invoke("releaseEventLock", repeatEventRate);
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral4157998269, L_10, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		EventSystem_t1003666588 * L_11 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = EventSystem_get_currentSelectedGameObject_m2939274948(L_11, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_13 = V_1;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t1475332338 * L_14 = ExecuteEvents_get_submitHandler_m94189868(NULL /*static, unused*/, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.submitHandler);
		ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/ExecuteEvents_Execute_TisISubmitHandler_t2790798304_m3136014644_RuntimeMethod_var);
	}

IL_007f:
	{
		// if (cancelButton[currentEventIndex].BUTTON_STATE_IS_PRESSED)
		ButtonControllerTypeU5BU5D_t3475699658* L_15 = __this->get_cancelButton_24();
		int32_t L_16 = __this->get_currentEventIndex_27();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		ButtonControllerType_t4022003499 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		bool L_19 = L_18->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_19)
		{
			goto IL_00c7;
		}
	}
	{
		// eventLock = true;
		__this->set_eventLock_26((bool)1);
		// Invoke("releaseEventLock", repeatEventRate);
		float L_20 = __this->get_repeatEventRate_17();
		// Invoke("releaseEventLock", repeatEventRate);
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral4157998269, L_20, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		EventSystem_t1003666588 * L_21 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = EventSystem_get_currentSelectedGameObject_m2939274948(L_21, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_23 = V_1;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t2658898854 * L_24 = ExecuteEvents_get_cancelHandler_m1220395193(NULL /*static, unused*/, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.cancelHandler);
		ExecuteEvents_Execute_TisICancelHandler_t3974364820_m2876577334(NULL /*static, unused*/, L_22, L_23, L_24, /*hidden argument*/ExecuteEvents_Execute_TisICancelHandler_t3974364820_m2876577334_RuntimeMethod_var);
	}

IL_00c7:
	{
		// return data.used;
		BaseEventData_t3903027533 * L_25 = V_1;
		// return data.used;
		NullCheck(L_25);
		bool L_26 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_25);
		V_0 = L_26;
		goto IL_00d3;
	}

IL_00d3:
	{
		// }
		bool L_27 = V_0;
		return L_27;
	}
}
// UnityEngine.Vector2 UnityEngine.EventSystems.EasyWiFiInputModule::GetRawMoveVector()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  EasyWiFiInputModule_GetRawMoveVector_m2393733022 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_GetRawMoveVector_m2393733022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Vector2 move = Vector2.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (navigationControlType == EasyWiFiConstants.UNITY_UI_INPUT_TYPE.Dpad)
		int32_t L_1 = __this->get_navigationControlType_11();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (dpad[currentEventIndex].DPAD_LEFT_PRESSED)
		DpadControllerTypeU5BU5D_t241551328* L_2 = __this->get_dpad_20();
		int32_t L_3 = __this->get_currentEventIndex_27();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DpadControllerType_t3440649293 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		bool L_6 = L_5->get_DPAD_LEFT_PRESSED_9();
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// move.x = -1f;
		(&V_0)->set_x_0((-1.0f));
	}

IL_0037:
	{
		// if (dpad[currentEventIndex].DPAD_RIGHT_PRESSED)
		DpadControllerTypeU5BU5D_t241551328* L_7 = __this->get_dpad_20();
		int32_t L_8 = __this->get_currentEventIndex_27();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		DpadControllerType_t3440649293 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11 = L_10->get_DPAD_RIGHT_PRESSED_11();
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		// move.x = 1f;
		(&V_0)->set_x_0((1.0f));
	}

IL_005a:
	{
		// if (dpad[currentEventIndex].DPAD_DOWN_PRESSED)
		DpadControllerTypeU5BU5D_t241551328* L_12 = __this->get_dpad_20();
		int32_t L_13 = __this->get_currentEventIndex_27();
		NullCheck(L_12);
		int32_t L_14 = L_13;
		DpadControllerType_t3440649293 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		bool L_16 = L_15->get_DPAD_DOWN_PRESSED_12();
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		// move.y = -1f;
		(&V_0)->set_y_1((-1.0f));
	}

IL_007d:
	{
		// if (dpad[currentEventIndex].DPAD_UP_PRESSED)
		DpadControllerTypeU5BU5D_t241551328* L_17 = __this->get_dpad_20();
		int32_t L_18 = __this->get_currentEventIndex_27();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		DpadControllerType_t3440649293 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		bool L_21 = L_20->get_DPAD_UP_PRESSED_10();
		if (!L_21)
		{
			goto IL_00a0;
		}
	}
	{
		// move.y = 1f;
		(&V_0)->set_y_1((1.0f));
	}

IL_00a0:
	{
		goto IL_0131;
	}

IL_00a6:
	{
		// move.x = (float)Convert.ToDecimal(joystick[currentEventIndex].JOYSTICK_HORIZONTAL);
		JoystickControllerTypeU5BU5D_t3315982781* L_22 = __this->get_joystick_18();
		int32_t L_23 = __this->get_currentEventIndex_27();
		NullCheck(L_22);
		int32_t L_24 = L_23;
		JoystickControllerType_t2945305588 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		float L_26 = L_25->get_JOYSTICK_HORIZONTAL_9();
		// move.x = (float)Convert.ToDecimal(joystick[currentEventIndex].JOYSTICK_HORIZONTAL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_27 = Convert_ToDecimal_m3508035522(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2948259380_il2cpp_TypeInfo_var);
		float L_28 = Decimal_op_Explicit_m3488287464(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		(&V_0)->set_x_0(L_28);
		// move.y = (float)Convert.ToDecimal(joystick[currentEventIndex].JOYSTICK_VERTICAL);
		JoystickControllerTypeU5BU5D_t3315982781* L_29 = __this->get_joystick_18();
		int32_t L_30 = __this->get_currentEventIndex_27();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		JoystickControllerType_t2945305588 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		float L_33 = L_32->get_JOYSTICK_VERTICAL_10();
		// move.y = (float)Convert.ToDecimal(joystick[currentEventIndex].JOYSTICK_VERTICAL);
		Decimal_t2948259380  L_34 = Convert_ToDecimal_m3508035522(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		float L_35 = Decimal_op_Explicit_m3488287464(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		(&V_0)->set_y_1(L_35);
		// if (move.x > move.y)
		float L_36 = (&V_0)->get_x_0();
		float L_37 = (&V_0)->get_y_1();
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_0111;
		}
	}
	{
		// move.y = 0f;
		(&V_0)->set_y_1((0.0f));
		goto IL_0130;
	}

IL_0111:
	{
		// else if (move.y > move.x)
		float L_38 = (&V_0)->get_y_1();
		float L_39 = (&V_0)->get_x_0();
		if ((!(((float)L_38) > ((float)L_39))))
		{
			goto IL_0130;
		}
	}
	{
		// move.x = 0f;
		(&V_0)->set_x_0((0.0f));
	}

IL_0130:
	{
	}

IL_0131:
	{
		// if (move.x < 0)
		float L_40 = (&V_0)->get_x_0();
		if ((!(((float)L_40) < ((float)(0.0f)))))
		{
			goto IL_014e;
		}
	}
	{
		// move.x = -1f;
		(&V_0)->set_x_0((-1.0f));
	}

IL_014e:
	{
		// if (move.x > 0)
		float L_41 = (&V_0)->get_x_0();
		if ((!(((float)L_41) > ((float)(0.0f)))))
		{
			goto IL_016b;
		}
	}
	{
		// move.x = 1f;
		(&V_0)->set_x_0((1.0f));
	}

IL_016b:
	{
		// if (move.y < 0)
		float L_42 = (&V_0)->get_y_1();
		if ((!(((float)L_42) < ((float)(0.0f)))))
		{
			goto IL_0188;
		}
	}
	{
		// move.y = -1f;
		(&V_0)->set_y_1((-1.0f));
	}

IL_0188:
	{
		// if (move.y > 0)
		float L_43 = (&V_0)->get_y_1();
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_01a5;
		}
	}
	{
		// move.y = 1f;
		(&V_0)->set_y_1((1.0f));
	}

IL_01a5:
	{
		// return move;
		Vector2_t2156229523  L_44 = V_0;
		V_1 = L_44;
		goto IL_01ac;
	}

IL_01ac:
	{
		// }
		Vector2_t2156229523  L_45 = V_1;
		return L_45;
	}
}
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::SendMoveEventToSelectedObject()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_SendMoveEventToSelectedObject_m3525210972 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_SendMoveEventToSelectedObject_m3525210972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	AxisEventData_t2331243652 * V_2 = NULL;
	Vector2_t2156229523  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2156229523  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		// if (eventLock)
		bool L_0 = __this->get_eventLock_26();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_00ac;
	}

IL_0013:
	{
		// Vector2 movement = GetRawMoveVector();
		// Vector2 movement = GetRawMoveVector();
		Vector2_t2156229523  L_1 = EasyWiFiInputModule_GetRawMoveVector_m2393733022(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// var axisEventData = GetAxisEventData(movement.x, movement.y, 0.6f);
		float L_2 = (&V_1)->get_x_0();
		float L_3 = (&V_1)->get_y_1();
		// var axisEventData = GetAxisEventData(movement.x, movement.y, 0.6f);
		AxisEventData_t2331243652 * L_4 = VirtFuncInvoker3< AxisEventData_t2331243652 *, float, float, float >::Invoke(18 /* UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single) */, __this, L_2, L_3, (0.6f));
		V_2 = L_4;
		// if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
		AxisEventData_t2331243652 * L_5 = V_2;
		// if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = AxisEventData_get_moveVector_m270528189(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_3)->get_x_0();
		// if (!Mathf.Approximately(axisEventData.moveVector.x, 0f)
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_8 = Mathf_Approximately_m245805902(NULL /*static, unused*/, L_7, (0.0f), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		AxisEventData_t2331243652 * L_9 = V_2;
		// || !Mathf.Approximately(axisEventData.moveVector.y, 0f))
		NullCheck(L_9);
		Vector2_t2156229523  L_10 = AxisEventData_get_moveVector_m270528189(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_y_1();
		// || !Mathf.Approximately(axisEventData.moveVector.y, 0f))
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_12 = Mathf_Approximately_m245805902(NULL /*static, unused*/, L_11, (0.0f), /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00a0;
		}
	}

IL_006f:
	{
		// eventLock = true;
		__this->set_eventLock_26((bool)1);
		// Invoke("releaseEventLock", repeatEventRate);
		float L_13 = __this->get_repeatEventRate_17();
		// Invoke("releaseEventLock", repeatEventRate);
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral4157998269, L_13, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		EventSystem_t1003666588 * L_14 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = EventSystem_get_currentSelectedGameObject_m2939274948(L_14, /*hidden argument*/NULL);
		AxisEventData_t2331243652 * L_16 = V_2;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t3912835512 * L_17 = ExecuteEvents_get_moveHandler_m3629736480(NULL /*static, unused*/, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, axisEventData, ExecuteEvents.moveHandler);
		ExecuteEvents_Execute_TisIMoveHandler_t933334182_m109549(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/ExecuteEvents_Execute_TisIMoveHandler_t933334182_m109549_RuntimeMethod_var);
	}

IL_00a0:
	{
		// return axisEventData.used;
		AxisEventData_t2331243652 * L_18 = V_2;
		// return axisEventData.used;
		NullCheck(L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_18);
		V_0 = L_19;
		goto IL_00ac;
	}

IL_00ac:
	{
		// }
		bool L_20 = V_0;
		return L_20;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::releaseEventLock()
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_releaseEventLock_m3070740877 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	{
		// eventLock = false;
		__this->set_eventLock_26((bool)0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.EasyWiFiInputModule::SendUpdateEventToSelectedObject()
extern "C" IL2CPP_METHOD_ATTR bool EasyWiFiInputModule_SendUpdateEventToSelectedObject_m3290230098 (EasyWiFiInputModule_t2360561143 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_SendUpdateEventToSelectedObject_m3290230098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BaseEventData_t3903027533 * V_1 = NULL;
	{
		// if (eventSystem.currentSelectedGameObject == null)
		// if (eventSystem.currentSelectedGameObject == null)
		EventSystem_t1003666588 * L_0 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// if (eventSystem.currentSelectedGameObject == null)
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = EventSystem_get_currentSelectedGameObject_m2939274948(L_0, /*hidden argument*/NULL);
		// if (eventSystem.currentSelectedGameObject == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return false;
		V_0 = (bool)0;
		goto IL_0048;
	}

IL_001e:
	{
		// var data = GetBaseEventData();
		// var data = GetBaseEventData();
		BaseEventData_t3903027533 * L_3 = VirtFuncInvoker0< BaseEventData_t3903027533 * >::Invoke(19 /* UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData() */, __this);
		V_1 = L_3;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		EventSystem_t1003666588 * L_4 = BaseInputModule_get_eventSystem_m1212899053(__this, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = EventSystem_get_currentSelectedGameObject_m2939274948(L_4, /*hidden argument*/NULL);
		BaseEventData_t3903027533 * L_6 = V_1;
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t3484638744_il2cpp_TypeInfo_var);
		EventFunction_1_t2950825503 * L_7 = ExecuteEvents_get_updateSelectedHandler_m1601110817(NULL /*static, unused*/, /*hidden argument*/NULL);
		// ExecuteEvents.Execute(eventSystem.currentSelectedGameObject, data, ExecuteEvents.updateSelectedHandler);
		ExecuteEvents_Execute_TisIUpdateSelectedHandler_t4266291469_m1289077245(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/ExecuteEvents_Execute_TisIUpdateSelectedHandler_t4266291469_m1289077245_RuntimeMethod_var);
		// return data.used;
		BaseEventData_t3903027533 * L_8 = V_1;
		// return data.used;
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.EventSystems.AbstractEventData::get_used() */, L_8);
		V_0 = L_9;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.EventSystems.EasyWiFiInputModule::checkForNewConnections(System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EasyWiFiInputModule_checkForNewConnections_m3658888376 (EasyWiFiInputModule_t2360561143 * __this, bool ___isConnect0, int32_t ___playerNumber1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWiFiInputModule_checkForNewConnections_m3658888376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EasyWiFiUtilities.checkForClient(submitControlName, (int)player, ref submitButton, ref submitCurrentNumberControllers);
		String_t* L_0 = __this->get_submitControlName_14();
		int32_t L_1 = __this->get_player_10();
		ButtonControllerTypeU5BU5D_t3475699658** L_2 = __this->get_address_of_submitButton_22();
		int32_t* L_3 = __this->get_address_of_submitCurrentNumberControllers_23();
		// EasyWiFiUtilities.checkForClient(submitControlName, (int)player, ref submitButton, ref submitCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728(NULL /*static, unused*/, L_0, L_1, (ButtonControllerTypeU5BU5D_t3475699658**)L_2, (int32_t*)L_3, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728_RuntimeMethod_var);
		// EasyWiFiUtilities.checkForClient(cancelControlName, (int)player, ref cancelButton, ref cancelCurrentNumberControllers);
		String_t* L_4 = __this->get_cancelControlName_16();
		int32_t L_5 = __this->get_player_10();
		ButtonControllerTypeU5BU5D_t3475699658** L_6 = __this->get_address_of_cancelButton_24();
		int32_t* L_7 = __this->get_address_of_cancelCurrentNumberControllers_25();
		// EasyWiFiUtilities.checkForClient(cancelControlName, (int)player, ref cancelButton, ref cancelCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728(NULL /*static, unused*/, L_4, L_5, (ButtonControllerTypeU5BU5D_t3475699658**)L_6, (int32_t*)L_7, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisButtonControllerType_t4022003499_m2117880728_RuntimeMethod_var);
		// if (navigationControlType == EasyWiFiConstants.UNITY_UI_INPUT_TYPE.Dpad)
		int32_t L_8 = __this->get_navigationControlType_11();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref dpad, ref dpadCurrentNumberControllers);
		String_t* L_9 = __this->get_navigationControlName_12();
		int32_t L_10 = __this->get_player_10();
		DpadControllerTypeU5BU5D_t241551328** L_11 = __this->get_address_of_dpad_20();
		int32_t* L_12 = __this->get_address_of_dpadCurrentNumberControllers_21();
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref dpad, ref dpadCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisDpadControllerType_t3440649293_m2166070655(NULL /*static, unused*/, L_9, L_10, (DpadControllerTypeU5BU5D_t241551328**)L_11, (int32_t*)L_12, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisDpadControllerType_t3440649293_m2166070655_RuntimeMethod_var);
		goto IL_008a;
	}

IL_006b:
	{
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref joystick, ref joystickCurrentNumberControllers);
		String_t* L_13 = __this->get_navigationControlName_12();
		int32_t L_14 = __this->get_player_10();
		JoystickControllerTypeU5BU5D_t3315982781** L_15 = __this->get_address_of_joystick_18();
		int32_t* L_16 = __this->get_address_of_joystickCurrentNumberControllers_19();
		// EasyWiFiUtilities.checkForClient(navigationControlName, (int)player, ref joystick, ref joystickCurrentNumberControllers);
		EasyWiFiUtilities_checkForClient_TisJoystickControllerType_t2945305588_m4143447703(NULL /*static, unused*/, L_13, L_14, (JoystickControllerTypeU5BU5D_t3315982781**)L_15, (int32_t*)L_16, /*hidden argument*/EasyWiFiUtilities_checkForClient_TisJoystickControllerType_t2945305588_m4143447703_RuntimeMethod_var);
	}

IL_008a:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void alphaBlink::.ctor()
extern "C" IL2CPP_METHOD_ATTR void alphaBlink__ctor_m1577364119 (alphaBlink_t3172065299 * __this, const RuntimeMethod* method)
{
	{
		// bool ascending = true;
		__this->set_ascending_8((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void alphaBlink::Start()
extern "C" IL2CPP_METHOD_ATTR void alphaBlink_Start_m132004815 (alphaBlink_t3172065299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (alphaBlink_Start_m132004815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myText = this.GetComponentInChildren<Text>();
		// myText = this.GetComponentInChildren<Text>();
		Text_t1901882714 * L_0 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		__this->set_myText_5(L_0);
		// myImage = this.GetComponent<Image>();
		// myImage = this.GetComponent<Image>();
		Image_t2670269651 * L_1 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_myImage_4(L_1);
		// currentImageColor = myImage.color;
		Image_t2670269651 * L_2 = __this->get_myImage_4();
		// currentImageColor = myImage.color;
		NullCheck(L_2);
		Color_t2555686324  L_3 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->set_currentImageColor_6(L_3);
		// currentTextColor = myText.color;
		Text_t1901882714 * L_4 = __this->get_myText_5();
		// currentTextColor = myText.color;
		NullCheck(L_4);
		Color_t2555686324  L_5 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		__this->set_currentTextColor_7(L_5);
		// }
		return;
	}
}
// System.Void alphaBlink::startBlink()
extern "C" IL2CPP_METHOD_ATTR void alphaBlink_startBlink_m1006529611 (alphaBlink_t3172065299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (alphaBlink_startBlink_m1006529611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("animateImage", .05f, .05f);
		// InvokeRepeating("animateImage", .05f, .05f);
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral2801924628, (0.05f), (0.05f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void alphaBlink::endBlink()
extern "C" IL2CPP_METHOD_ATTR void alphaBlink_endBlink_m3060121822 (alphaBlink_t3172065299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (alphaBlink_endBlink_m3060121822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CancelInvoke("animateImage");
		// CancelInvoke("animateImage");
		MonoBehaviour_CancelInvoke_m2180046661(__this, _stringLiteral2801924628, /*hidden argument*/NULL);
		// currentImageColor.a = 0f;
		Color_t2555686324 * L_0 = __this->get_address_of_currentImageColor_6();
		L_0->set_a_3((0.0f));
		// currentTextColor.a = 0f;
		Color_t2555686324 * L_1 = __this->get_address_of_currentTextColor_7();
		L_1->set_a_3((0.0f));
		// myImage.color = currentImageColor;
		Image_t2670269651 * L_2 = __this->get_myImage_4();
		Color_t2555686324  L_3 = __this->get_currentImageColor_6();
		// myImage.color = currentImageColor;
		NullCheck(L_2);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// myText.color = currentTextColor;
		Text_t1901882714 * L_4 = __this->get_myText_5();
		Color_t2555686324  L_5 = __this->get_currentTextColor_7();
		// myText.color = currentTextColor;
		NullCheck(L_4);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void alphaBlink::animateImage()
extern "C" IL2CPP_METHOD_ATTR void alphaBlink_animateImage_m2105200349 (alphaBlink_t3172065299 * __this, const RuntimeMethod* method)
{
	{
		// currentImageColor = myImage.color;
		Image_t2670269651 * L_0 = __this->get_myImage_4();
		// currentImageColor = myImage.color;
		NullCheck(L_0);
		Color_t2555686324  L_1 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		__this->set_currentImageColor_6(L_1);
		// if (currentImageColor.a > .95)
		Color_t2555686324 * L_2 = __this->get_address_of_currentImageColor_6();
		float L_3 = L_2->get_a_3();
		if ((!(((double)(((double)((double)L_3)))) > ((double)(0.95)))))
		{
			goto IL_0038;
		}
	}
	{
		// ascending = false;
		__this->set_ascending_8((bool)0);
		goto IL_0059;
	}

IL_0038:
	{
		// else if (currentImageColor.a < .05)
		Color_t2555686324 * L_4 = __this->get_address_of_currentImageColor_6();
		float L_5 = L_4->get_a_3();
		if ((!(((double)(((double)((double)L_5)))) < ((double)(0.05)))))
		{
			goto IL_0059;
		}
	}
	{
		// ascending = true;
		__this->set_ascending_8((bool)1);
	}

IL_0059:
	{
		// if (ascending)
		bool L_6 = __this->get_ascending_8();
		if (!L_6)
		{
			goto IL_0099;
		}
	}
	{
		// currentImageColor.a += .05f;
		Color_t2555686324 * L_7 = __this->get_address_of_currentImageColor_6();
		Color_t2555686324 * L_8 = L_7;
		float L_9 = L_8->get_a_3();
		L_8->set_a_3(((float)il2cpp_codegen_add((float)L_9, (float)(0.05f))));
		// currentTextColor.a += .05f;
		Color_t2555686324 * L_10 = __this->get_address_of_currentTextColor_7();
		Color_t2555686324 * L_11 = L_10;
		float L_12 = L_11->get_a_3();
		L_11->set_a_3(((float)il2cpp_codegen_add((float)L_12, (float)(0.05f))));
		goto IL_00c9;
	}

IL_0099:
	{
		// currentImageColor.a -= .05f;
		Color_t2555686324 * L_13 = __this->get_address_of_currentImageColor_6();
		Color_t2555686324 * L_14 = L_13;
		float L_15 = L_14->get_a_3();
		L_14->set_a_3(((float)il2cpp_codegen_subtract((float)L_15, (float)(0.05f))));
		// currentTextColor.a -= .05f;
		Color_t2555686324 * L_16 = __this->get_address_of_currentTextColor_7();
		Color_t2555686324 * L_17 = L_16;
		float L_18 = L_17->get_a_3();
		L_17->set_a_3(((float)il2cpp_codegen_subtract((float)L_18, (float)(0.05f))));
	}

IL_00c9:
	{
		// myImage.color = currentImageColor;
		Image_t2670269651 * L_19 = __this->get_myImage_4();
		Color_t2555686324  L_20 = __this->get_currentImageColor_6();
		// myImage.color = currentImageColor;
		NullCheck(L_19);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// myText.color = currentTextColor;
		Text_t1901882714 * L_21 = __this->get_myText_5();
		Color_t2555686324  L_22 = __this->get_currentTextColor_7();
		// myText.color = currentTextColor;
		NullCheck(L_21);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void myjig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void myjig__ctor_m1766073485 (myjig_t2622873490 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void myjig::Start()
extern "C" IL2CPP_METHOD_ATTR void myjig_Start_m1427027895 (myjig_t2622873490 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void myjig::Update()
extern "C" IL2CPP_METHOD_ATTR void myjig_Update_m3733654096 (myjig_t2622873490 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (myjig_Update_m3733654096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim["CINEMA_4D_Main 0"].time = 15;
		Animation_t3648466861 * L_0 = __this->get_anim_4();
		// anim["CINEMA_4D_Main 0"].time = 15;
		NullCheck(L_0);
		AnimationState_t1108360407 * L_1 = Animation_get_Item_m2435218778(L_0, _stringLiteral436226321, /*hidden argument*/NULL);
		// anim["CINEMA_4D_Main 0"].time = 15;
		NullCheck(L_1);
		AnimationState_set_time_m3753967308(L_1, (15.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void painting::.ctor()
extern "C" IL2CPP_METHOD_ATTR void painting__ctor_m1734375100 (painting_t1121717621 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void painting::Start()
extern "C" IL2CPP_METHOD_ATTR void painting_Start_m2499149194 (painting_t1121717621 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (painting_Start_m2499149194_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// currentColor = Color.black;
		// currentColor = Color.black;
		Color_t2555686324  L_0 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_0);
		// canvas = GameObject.Find("Canvas").GetComponent<RectTransform>();
		// canvas = GameObject.Find("Canvas").GetComponent<RectTransform>();
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2323074440, /*hidden argument*/NULL);
		// canvas = GameObject.Find("Canvas").GetComponent<RectTransform>();
		NullCheck(L_1);
		RectTransform_t3704657025 * L_2 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_1, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_canvas_9(L_2);
		// canvasWidth = canvas.rect.width;
		RectTransform_t3704657025 * L_3 = __this->get_canvas_9();
		// canvasWidth = canvas.rect.width;
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// canvasWidth = canvas.rect.width;
		float L_5 = Rect_get_width_m3421484486((Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		__this->set_canvasWidth_11(L_5);
		// canvasHeight = canvas.rect.height;
		RectTransform_t3704657025 * L_6 = __this->get_canvas_9();
		// canvasHeight = canvas.rect.height;
		NullCheck(L_6);
		Rect_t2360479859  L_7 = RectTransform_get_rect_m574169965(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// canvasHeight = canvas.rect.height;
		float L_8 = Rect_get_height_m1358425599((Rect_t2360479859 *)(&V_1), /*hidden argument*/NULL);
		__this->set_canvasHeight_12(L_8);
		// panel = this.gameObject;
		// panel = this.gameObject;
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		__this->set_panel_5(L_9);
		// }
		return;
	}
}
// System.Void painting::Update()
extern "C" IL2CPP_METHOD_ATTR void painting_Update_m3934752642 (painting_t1121717621 * __this, const RuntimeMethod* method)
{
	{
		// if (isRed && isBlue && isGreen)
		bool L_0 = __this->get_isRed_15();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		bool L_1 = __this->get_isBlue_16();
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		bool L_2 = __this->get_isGreen_17();
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// currentColor = Color.white;
		// currentColor = Color.white;
		Color_t2555686324  L_3 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_3);
		goto IL_0100;
	}

IL_0032:
	{
		// else if (isRed && isBlue)
		bool L_4 = __this->get_isRed_15();
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		bool L_5 = __this->get_isBlue_16();
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// currentColor = Color.magenta;
		// currentColor = Color.magenta;
		Color_t2555686324  L_6 = Color_get_magenta_m208363462(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_6);
		goto IL_0100;
	}

IL_0058:
	{
		// else if (isRed && isGreen)
		bool L_7 = __this->get_isRed_15();
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		bool L_8 = __this->get_isGreen_17();
		if (!L_8)
		{
			goto IL_007e;
		}
	}
	{
		// currentColor = Color.yellow;
		// currentColor = Color.yellow;
		Color_t2555686324  L_9 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_9);
		goto IL_0100;
	}

IL_007e:
	{
		// else if (isRed)
		bool L_10 = __this->get_isRed_15();
		if (!L_10)
		{
			goto IL_0099;
		}
	}
	{
		// currentColor = Color.red;
		// currentColor = Color.red;
		Color_t2555686324  L_11 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_11);
		goto IL_0100;
	}

IL_0099:
	{
		// else if (isBlue && isGreen)
		bool L_12 = __this->get_isBlue_16();
		if (!L_12)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_13 = __this->get_isGreen_17();
		if (!L_13)
		{
			goto IL_00bf;
		}
	}
	{
		// currentColor = Color.cyan;
		// currentColor = Color.cyan;
		Color_t2555686324  L_14 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_14);
		goto IL_0100;
	}

IL_00bf:
	{
		// else if (isBlue)
		bool L_15 = __this->get_isBlue_16();
		if (!L_15)
		{
			goto IL_00da;
		}
	}
	{
		// currentColor = Color.blue;
		// currentColor = Color.blue;
		Color_t2555686324  L_16 = Color_get_blue_m3190273327(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_16);
		goto IL_0100;
	}

IL_00da:
	{
		// else if (isGreen)
		bool L_17 = __this->get_isGreen_17();
		if (!L_17)
		{
			goto IL_00f5;
		}
	}
	{
		// currentColor = Color.green;
		// currentColor = Color.green;
		Color_t2555686324  L_18 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_18);
		goto IL_0100;
	}

IL_00f5:
	{
		// currentColor = Color.black;
		// currentColor = Color.black;
		Color_t2555686324  L_19 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentColor_10(L_19);
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void painting::paint(EasyWiFi.Core.TouchpadControllerType)
extern "C" IL2CPP_METHOD_ATTR void painting_paint_m2374920261 (painting_t1121717621 * __this, TouchpadControllerType_t2430310142 * ___touchpad0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (painting_paint_m2374920261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (touchpad.IS_TOUCHING)
		TouchpadControllerType_t2430310142 * L_0 = ___touchpad0;
		NullCheck(L_0);
		bool L_1 = L_0->get_IS_TOUCHING_11();
		if (!L_1)
		{
			goto IL_00ba;
		}
	}
	{
		// drawPositionX = Mathf.Floor(touchpad.POSITION_HORIZONTAL * canvasWidth);
		TouchpadControllerType_t2430310142 * L_2 = ___touchpad0;
		NullCheck(L_2);
		float L_3 = L_2->get_POSITION_HORIZONTAL_9();
		float L_4 = __this->get_canvasWidth_11();
		// drawPositionX = Mathf.Floor(touchpad.POSITION_HORIZONTAL * canvasWidth);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = floorf(((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)));
		__this->set_drawPositionX_13(L_5);
		// drawPositionY = Mathf.Floor(touchpad.POSITION_VERTICAL * canvasHeight);
		TouchpadControllerType_t2430310142 * L_6 = ___touchpad0;
		NullCheck(L_6);
		float L_7 = L_6->get_POSITION_VERTICAL_10();
		float L_8 = __this->get_canvasHeight_12();
		// drawPositionY = Mathf.Floor(touchpad.POSITION_VERTICAL * canvasHeight);
		float L_9 = floorf(((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)));
		__this->set_drawPositionY_14(L_9);
		// currentObject = Instantiate(paintObject);
		GameObject_t1113636619 * L_10 = __this->get_paintObject_4();
		// currentObject = Instantiate(paintObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_11 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		__this->set_currentObject_6(L_11);
		// currentRT = currentObject.GetComponent<RectTransform>();
		GameObject_t1113636619 * L_12 = __this->get_currentObject_6();
		// currentRT = currentObject.GetComponent<RectTransform>();
		NullCheck(L_12);
		RectTransform_t3704657025 * L_13 = GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398(L_12, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t3704657025_m2005094398_RuntimeMethod_var);
		__this->set_currentRT_7(L_13);
		// currentImage = currentObject.GetComponent<Image>();
		GameObject_t1113636619 * L_14 = __this->get_currentObject_6();
		// currentImage = currentObject.GetComponent<Image>();
		NullCheck(L_14);
		Image_t2670269651 * L_15 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_14, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		__this->set_currentImage_8(L_15);
		// currentRT.transform.SetParent(panel.transform, false);
		RectTransform_t3704657025 * L_16 = __this->get_currentRT_7();
		// currentRT.transform.SetParent(panel.transform, false);
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = __this->get_panel_5();
		// currentRT.transform.SetParent(panel.transform, false);
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		// currentRT.transform.SetParent(panel.transform, false);
		NullCheck(L_17);
		Transform_SetParent_m273471670(L_17, L_19, (bool)0, /*hidden argument*/NULL);
		// currentRT.anchoredPosition = new Vector2(drawPositionX, drawPositionY);
		RectTransform_t3704657025 * L_20 = __this->get_currentRT_7();
		float L_21 = __this->get_drawPositionX_13();
		float L_22 = __this->get_drawPositionY_14();
		// currentRT.anchoredPosition = new Vector2(drawPositionX, drawPositionY);
		Vector2_t2156229523  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2__ctor_m3970636864((&L_23), L_21, L_22, /*hidden argument*/NULL);
		// currentRT.anchoredPosition = new Vector2(drawPositionX, drawPositionY);
		NullCheck(L_20);
		RectTransform_set_anchoredPosition_m4126691837(L_20, L_23, /*hidden argument*/NULL);
		// currentImage.color = currentColor;
		Image_t2670269651 * L_24 = __this->get_currentImage_8();
		Color_t2555686324  L_25 = __this->get_currentColor_10();
		// currentImage.color = currentColor;
		NullCheck(L_24);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void painting::setRed(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void painting_setRed_m4062321115 (painting_t1121717621 * __this, ButtonControllerType_t4022003499 * ___redButton0, const RuntimeMethod* method)
{
	{
		// if (redButton.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___redButton0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// isRed = true;
		__this->set_isRed_15((bool)1);
		goto IL_001f;
	}

IL_0018:
	{
		// isRed = false;
		__this->set_isRed_15((bool)0);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void painting::setGreen(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void painting_setGreen_m3951984403 (painting_t1121717621 * __this, ButtonControllerType_t4022003499 * ___greenButton0, const RuntimeMethod* method)
{
	{
		// if (greenButton.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___greenButton0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// isGreen = true;
		__this->set_isGreen_17((bool)1);
		goto IL_001f;
	}

IL_0018:
	{
		// isGreen = false;
		__this->set_isGreen_17((bool)0);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void painting::setBlue(EasyWiFi.Core.ButtonControllerType)
extern "C" IL2CPP_METHOD_ATTR void painting_setBlue_m3262671364 (painting_t1121717621 * __this, ButtonControllerType_t4022003499 * ___blueButton0, const RuntimeMethod* method)
{
	{
		// if (blueButton.BUTTON_STATE_IS_PRESSED)
		ButtonControllerType_t4022003499 * L_0 = ___blueButton0;
		NullCheck(L_0);
		bool L_1 = L_0->get_BUTTON_STATE_IS_PRESSED_9();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// isBlue = true;
		__this->set_isBlue_16((bool)1);
		goto IL_001f;
	}

IL_0018:
	{
		// isBlue = false;
		__this->set_isBlue_16((bool)0);
	}

IL_001f:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void think::.ctor()
extern "C" IL2CPP_METHOD_ATTR void think__ctor_m4048575496 (think_t1053191122 * __this, const RuntimeMethod* method)
{
	{
		StateMachineBehaviour__ctor_m3367380209(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
