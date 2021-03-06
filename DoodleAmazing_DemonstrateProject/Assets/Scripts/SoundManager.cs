using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
	// Audio players components
	public AudioSource menuMusicSource;
	public AudioSource gameMusicSource;

	// Singleton instance
	public static SoundManager Instance = null;
	
	// Initialize the singleton instance
	private void Awake()
	{
		// If there is not already an instance of SoundManager, set it to this
		if (Instance == null)
		{
			Instance = this;
		}
		// If an instance already exists, destroy whatever this object is to enforce the singleton
		else if (Instance != this)
		{
			Destroy(gameObject);
		}

		// Set SoundManager to DontDestroyOnLoad so that it won't be destroyed when reloading our scene
		DontDestroyOnLoad (gameObject);
	}

	// Play the menu music
	public void PlayMenuMusic(AudioClip clip)
	{
		menuMusicSource.clip = clip;
		menuMusicSource.Play();
	}

    // Stop the menu music
	public void StopMenuMusic()
	{
		menuMusicSource.Stop();
	}

    // Play the game music
	public void PlayGameMusic(AudioClip clip)
	{
		gameMusicSource.clip = clip;
		gameMusicSource.Play();
	}

    // Stop the game music
	public void StopGameMusic()
	{
		gameMusicSource.Stop();
	}
}
