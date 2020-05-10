//
// Created by Abril on 10/5/2020.
//

#ifndef RAYLIBTEMPLATE_AUDIO_H

#include "raylib.h"
#define RAYLIBTEMPLATE_AUDIO_H


class Audio {
public:
    Music music;
    Audio() {
        InitAudioDevice();
        music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");
        PlayMusicStream(music);
    }
    void updateAudio()
    {
        UpdateMusicStream(music);
    }
//    ~Audio()
//    {
//        UnloadMusicStream(music);   // Descargo la musica de RAM
//        CloseAudioDevice();         // Cierro el dispositivo de Audio
//    }
    void Descargar()
    {
        UnloadMusicStream(music);   // Descargo la musica de RAM
        CloseAudioDevice();
    }
};


#endif //RAYLIBTEMPLATE_AUDIO_H
