#include <ncurses.h>
#include "renderengine.h"
using namespace Engine;

class RenderEngine{
    RenderEngine(){
        initialize();
    }
    int initialize(){
        initscr();

        // we want to initialize our main window here
        refresh();
        return 0;
    }

};