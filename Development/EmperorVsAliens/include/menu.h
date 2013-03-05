// Autor: Luis Gustavo Souza Silva
// Data: 23/01/2013
// e-mail: luisgustavodd@hotmail.com

#ifndef MENU_H
#define MENU_H

#include <vector>
#include "button.h"
#include "element.h"
#include "point.h"

using namespace edge;

typedef enum Option
{
	OPTION_01,
	OPTION_02,
	OPTION_03,
	OPTION_04,
	NO_OPTION
}Option;

class Menu : public Element {
public:
	Menu(Field *pos);
	void update();
	void loadRectangle();
	void loadImage();

	void init(Field *pos);
	void loadButtons();
	void handleClick(int index);
	void addButton(int x, int y, int w, int h);
	bool click(Button& area);
	bool handleMouseEvent(SDL_MouseButtonEvent &event);
	void close();

	Option 			option;
	int 			frameCount;
	int 			timeForNextFrame;
	Point 			clicked;
	vector<Button*> buttons;
private:
};


#endif
