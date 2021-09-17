using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuMusic : MonoBehaviour
{
    public AudioClip MenuMusicClip;

    // Start is called before the first frame update
    void Start() {
        SoundManager.Instance.StopGameMusic();
        if (!SoundManager.Instance.menuMusicSource.isPlaying) {
            SoundManager.Instance.PlayMenuMusic(MenuMusicClip);
        }
    }
}
