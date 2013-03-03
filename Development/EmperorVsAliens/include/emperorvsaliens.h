/**
 * \file emperorvsaliens.h
 * \brief Classe que representa o jogo.
 *
 * \author Leonn Ferreira Paiva (leonn.paiva@gmail.com)
 * \author Luis Gustavo (luisgustavodd@hotmail.com)
 * \date 25/01/2012
 */
#ifndef EMPERORVSALIENS_H
#define	EMPERORVSALIENS_H

#include <SDL/SDL.h>
#include <string>
#include <list>

#include "exception.h"
#include "video.h"
#include "window.h"
#include "boundingrectangle.h"
#include "map.h"
#include "level_01.h"

using namespace std;

namespace edge
{
    class EmperorVsAliens
    {
    public:
        void init();
        void shutdown();
        void update();
        void draw(Canvas *canvas);
		void IA();
        
        void callNextWave();
        
        void decomposeDead();
        void updateUnits();
        void increaseResources();
        void killSwarm();

        int resources;
        list<Unit*> swarmUnits;
        list<Unit*> emperorUnits;
        Level_01 board;
    };
}

#endif

