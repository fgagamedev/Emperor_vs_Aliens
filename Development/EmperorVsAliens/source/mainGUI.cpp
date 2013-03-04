#include "mainGUI.h"

void MainGUI::loadImage()
{
    background = Image::load("/opt/EmperorVsAliens/data/images/MainMenu.png");
}

void MainGUI::beDone()
{
    GUI::beDone();
    gameConfig->exit = true;
}

void MainGUI::loadSubmenus()
{
    addSubmenu(GUIFactory::create_GUI(GUI_MAIN));
}

void MainGUI::loadButtons()
{
    addButton(483,230,242,68);
    addButton(483,315,242,68);
    addButton(483,398,242,68);
}

void MainGUI::handleClick(int index)
{
    switch(index)
    {
    case 0:
        GUI::beDone();
    break;
    case 1:
        openSubmenu(0);
    break;
    case 2:
        beDone();
        gameConfig->exit = true;
    break;
    }
}
