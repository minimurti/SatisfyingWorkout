using UnityEngine;

namespace LostPolygon.Apple.LocalMultiplayer.Demos {
    /// <summary>
    /// Effect spawned when player touches the screen.
    /// </summary>
    public class TapMarker : MonoBehaviour {
        private const float kTimeToLive = 0.3f;
        private const float kScaleFactor = 100f;
        private SpriteRenderer _spriteRenderer;
        private float _currentLifeTime;

        private void Awake() {
            _spriteRenderer = GetComponent<SpriteRenderer>();
        }

        private void Start() {
            Destroy(gameObject, kTimeToLive);
        }

        private void Update() {
            _currentLifeTime += Time.deltaTime;
            transform.localScale += Vector3.one * kScaleFactor * Time.deltaTime;

            Color color = _spriteRenderer.color;
            color.a = Mathf.Pow(1f - _currentLifeTime / kTimeToLive, 2f);
            _spriteRenderer.color = color;
        }
    }
}
