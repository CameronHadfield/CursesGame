#include <curses.h>
#include "gameengine.h"
#include "renderengine.h"

using namespace Engine;
// this layer is for managing input from the user
class GameEngine{
    RenderEngine* renderer;

    GameEngine(){
        initialize();
        this->renderer = new RenderEngine();

        // need to get an input manager
        // get a renderer
    }

    void initialize(){

    }

};