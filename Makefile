lab3B:Clock.o lab3B.cpp
	g++ -o lab3B lab3B.cpp Clock.o
Clock.o:Clock.h Clock.cpp
	g++ -c Clock.cpp Clock.h
