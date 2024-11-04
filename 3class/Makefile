FLAGS = -std=c++17

all: main

main.o: User.o main.cpp
	g++ -c main.cpp $(FLAGS) 

User.o: User.h User.cpp
	g++ -c User.cpp $(FLAGS)

main: main.o
	g++ User.o main.o -o main $(FLAGS)

clean:
	del *.o main.exe