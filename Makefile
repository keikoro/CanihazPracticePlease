# Makefile for cpp excercises

CC=g++
CFLAGS = -g -Wall -Werror -O

all: ex01
exc_01: exc_01.o
    ${CC} ${CFLAGS} -o exc_01 exc_01.cpp
exc_01.o: exc_01.cpp
    ${CC} ${CFLAGS} -c exc_01.cpp
clean:
    rm -f exc_01.o exc_01
# remove dSYM dir created on Mac due to g++ -g flag
    @rm -f -r exc_01.dSYM
