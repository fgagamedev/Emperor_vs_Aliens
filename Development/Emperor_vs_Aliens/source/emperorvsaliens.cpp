#include "emperorvsaliens.h"

namespace edge
{

    void EmperorVsAliens::init()
    {
        board.init();
        marker.init();
    }

    void EmperorVsAliens::shutdown()
    {
        marker.shutdown();
        board.shutdown();
    }
    
    void EmperorVsAliens::update()
    {
		vector<Unit>::iterator it;
		for(it = swarmUnits.begin(); it < swarmUnits.end(); it++)
			it->update();
    }
    
    void EmperorVsAliens::callNextWave()
    {	
    	swarmUnits.insert(swarmUnits.end(),board.Wave().begin(),board.Wave().end());
    	board.NextWave();
    }
    
    void EmperorVsAliens::draw(Canvas* canvas)
    {
        board.draw(canvas);
        canvas->drawUnits(swarmUnits);
        //marker.draw(canvas);
    }

	void EmperorVsAliens::IA()
	{
		vector<Unit>::iterator it;
		for(it = swarmUnits.begin(); it < swarmUnits.end(); it++)
			it->IA();
	}

}