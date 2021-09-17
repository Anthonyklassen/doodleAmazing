using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameMusic : MonoBehaviour
{
    public AudioClip GameMusicClip;

    // Start is called before the first frame update
    void Start() {
        SoundManager.Instance.StopMenuMusic();
        SoundManager.Instance.PlayGameMusic(GameMusicClip);
    }
}
