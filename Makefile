# Makefile for cpp excercises

CC=g++
CFLAGS = -g -Wall -Werror -O

all: ex01 ex01a ex01b robot blocks read
ex01: ex01.o
	${CC} ${CFLAGS} -o ex01 ex01.cpp
ex01.o: ex01.cpp
	${CC} ${CFLAGS} -c ex01.cpp
ex01a: ex01a.o
	${CC} ${CFLAGS} -o ex01a ex01a.cpp
ex01a.o: ex01a.cpp
	${CC} ${CFLAGS} -c ex01a.cpp
ex01b: ex01b.o
	${CC} ${CFLAGS} -o ex01b ex01b.cpp
ex01b.o: ex01b.cpp
	${CC} ${CFLAGS} -c ex01b.cpp
robot: robot.o
	${CC} ${CFLAGS} -o robot robot.cpp
robot.o: robot.cpp
	${CC} ${CFLAGS} -c robot.cpp
blocks: blocks.o
	${CC} ${CFLAGS} -o blocks blocks.cpp
blocks.o: blocks.cpp
	${CC} ${CFLAGS} -c blocks.cpp
reads: reads.o
	${CC} ${CFLAGS} -o reads reads.cpp
reads.o: reads.cpp
	${CC} ${CFLAGS} -c reads.cpp


clean:
	rm -f ex01.o ex01
	rm -f ex01a.o ex01a
	rm -f ex01b.o ex01b
	rm -f robot.o robot
	rm -f blocks.o blocks
	rm -f read.o read
# remove dSYM dir created on Mac due to g++ -g flag
	@rm -f -r ex01.dSYM
	@rm -f -r ex01a.dSYM
	@rm -f -r ex01b.dSYM
	@rm -f -r robot.dSYM
	@rm -f -r blocks.dSYM
	@rm -f -r read.dSYM
