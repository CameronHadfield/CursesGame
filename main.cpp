#include <curses.h>

int main(){
    initialization();
    endwin();
    return 0;
}

void initialization(){
    initscr();

    // input initializers
    raw();
    keypad();

    // we want to initialize our main window here
    refresh();
    // enter into our main behaviour
    mainBehaviour();
}

void makeLayout(){

}
