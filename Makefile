# Makefile

%.o: %.c
	gcc -c $<

%.a: %.o
	ar rs $@ $>

squareArea.o: squareArea.c
cubeVolume.o: cubeVolume.c
Code2.o: Code2.c

libsquare.a: squareArea.o

libvolume.a: cubeVolume.o

Code2: Code2.o squareArea.o cubeVolume.o
	gcc -o Code2 Code2.o squareArea.o cubeVolume.o
