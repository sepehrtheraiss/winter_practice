#------------------------------------------------------#
# make Test                                            #
#                                                      #
#                                                      #
#------------------------------------------------------#
FLAG = -std=c99 -Wall
SRC  = stackTest.c Src/stack.c Src/node.c
OBJ  = Src/stackTest.o Src/stack.o Src/node.o
HEAD = Header/stack.h Header/node.h
EXE  = test

Test: $(OBJ)
	gcc -o Test $(OBJ)

stackTest.o: stackTest.c Header/stack.h
	gcc -c $(FLAG) Src/stackTest.c

stack.o: Src/stack.c Header/stack.h Header/node.h
	gcc -c $(FLAG) Src/stack.c

node.o: Src/node.c Header/node.h
	gcc -c $(FLAG) Src/node.c

clean:
	rm -f Test $(OBJ)
