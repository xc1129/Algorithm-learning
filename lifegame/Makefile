main:main.o life.o utility.o
	g++ main.o life.o utility.o -o main
main.o:main.cpp life.h utility.h
	g++ -c main.cpp
life.o:life.h life.cpp
	g++ -c life.cpp
utility.o:utility.h utility.cpp
	g++ -c utility.cpp

