
/**
 * @title       Clase Audio
 * @file        Audio.h
 * @version     1.0
 * @date        10/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_AUDIO_H
#define RAYLIBTEMPLATE_AUDIO_H

#include "raylib.h"

/**
 * @class Audio
 * @brief Clase para la manipulacion del audio
 */
class Audio {
public:
    Music music { };    /** Music value */

    /**
     * @brief constructor de Audio
     */
    Audio ( ) {
        InitAudioDevice ( );
        music = LoadMusicStream ( "resources/Cyberpunk Moonlight Sonata.mp3" );
        PlayMusicStream ( music );
    }

    /**
     * @brief actualiza el audio
     */
    void updateAudio ( ) {
        UpdateMusicStream ( music );
    }

    /**
    * @brief Descarga la música de RAM
    */
    void Descargar ( ) {
        UnloadMusicStream ( music );   // Descargo la musica de RAM
        CloseAudioDevice ( );
    }
};


#endif //RAYLIBTEMPLATE_AUDIO_H
