# Makefile

all: squareArea.o cubeVolume.o Code2 libsquare.a libvolume.a

%.o: %.c
	gcc -c $<


squareArea.o: squareArea.c
cubeVolume.o: cubeVolume.c
Code2.o: Code2.c

libsquare.a: squareArea.o
	ar rs $@ $>

libvolume.a: cubeVolume.o
	ar rs $@ $>

Code2: Code2.o squareArea.o cubeVolume.o
	gcc -o Code2 Code2.o squareArea.o cubeVolume.o
