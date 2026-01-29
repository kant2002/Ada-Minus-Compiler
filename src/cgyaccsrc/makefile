THIS_MAKEFILE := $(lastword $(MAKEFILE_LIST))
THIS_DIR     := $(dir $(abspath $(THIS_MAKEFILE)))
PARENT_DIR  := $(abspath $(THIS_DIR)/..)
HOMEFOLDER  := $(abspath $(THIS_DIR)/../..)

CFLAGS = -O0 -g -DDEBUG -DHOMEFOLDER="\"${HOMEFOLDER}\""
CFLAGS += -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch -Wno-implicit-int -Wno-endif-labels -Wno-return-type -Wno-pointer-to-int-cast -Wno-int-conversion -Wno-format-overflow -Wno-incompatible-pointer-types -Wno-format
install:	cgyacc
	cp cgyacc ${PARENT_DIR}
	:

clean:
	-rm -f cgyacc y1.o y2.o y3.o y4.o y5.o y6.o y7.o y8.o

cgyacc: y1.o y2.o y3.o y4.o y5.o y6.o y7.o y8.o
	cc -g -o cgyacc y1.o y2.o y3.o y4.o y5.o y6.o y7.o y8.o

y1.o y2.o y3.o y4.o y5.o y6.o y7.o y8.o: dextern files
y2.o y5.o y6.o: prep.h
