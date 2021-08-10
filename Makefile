CC=g++
CFLAGS=-lcurses
DEPS=./engine/gameengine.h ./engine/renderengine.h
CPP=./engine/gameengine.cpp ./engine/rendererengine.cpp main.cpp
OBJ=./engine/gameengine.o ./engine/renderengine.o main.o 


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

game: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) 