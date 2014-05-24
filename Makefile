# Makefile for cpp excercises

CC=g++
CFLAGS = -g -Wall -Werror -O

all: ex01 ex01a
ex01: ex01.o
	${CC} ${CFLAGS} -o ex01 ex01.cpp
ex01.o: ex01.cpp
	${CC} ${CFLAGS} -c ex01.cpp
ex01a: ex01a.o
	${CC} ${CFLAGS} -o ex01a ex01a.cpp
ex01a.o: ex01a.cpp
	${CC} ${CFLAGS} -c ex01a.cpp

clean:
	rm -f ex01.o ex01
	rm -f ex01a.o ex01a
# remove dSYM dir created on Mac due to g++ -g flag
	@rm -f -r ex01.dSYM
	@rm -f -r ex01a.dSYM
