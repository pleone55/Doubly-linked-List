
#Program Name: makefile
#Author: Paul Leone
#Date: 8/1/2019
#Description: makefile to compile the program

CXX = g++
CXXFLAGS = -std=c++11

OBJS = main.o node.o doubly.o menu.o validate.o

SRCS = main.cpp node.cpp doubly.cpp menu.cpp validate.cpp

HEADERS = node.hpp doubly.hpp menu.hpp validate.hpp

node: ${SRCS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${SRCS} -o node

clean:
	rm *.0 main

