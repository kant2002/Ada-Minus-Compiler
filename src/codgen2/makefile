THIS_MAKEFILE := $(lastword $(MAKEFILE_LIST))
THIS_DIR     := $(dir $(abspath $(THIS_MAKEFILE)))
PARENT_DIR   := $(abspath $(THIS_DIR)/..)

install:	cg68
	cp cg68 ${PARENT_DIR}

clean:
	-rm -f cg68 cgy.tab.c lex.yy.c cgy.tab.o grinc.o

cg68:	cgy.tab.o grinc.o
	cc -o cg68 -s cgy.tab.o grinc.o -lfl
	:

cgy.tab.o: cgy.tab.c lex.yy.c grinc.h
	   cc -c cgy.tab.c

cgy.tab.c: gr.y
	 ${PARENT_DIR}/cgyacc -l gr.y

lex.yy.c: gr.l
	  lex gr.l 

grinc.o: grinc.c
	cc -c grinc.c

