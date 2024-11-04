all: main

User.o: User.h User.cpp
	g++ -c User.cpp

main.o: User.o main.cpp
	g++ -c main.cpp

main: main.o
	g++ User.o main.o -o main

clean:
	del *.o main.exe