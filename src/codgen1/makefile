#ms68
#19880715/wjvg
CFLAGS = -O0 -g -DDEBUG
CFLAGS += -Wno-implicit-function-declaration -Wno-builtin-declaration-mismatch -Wno-implicit-int -Wno-endif-labels -Wno-return-type -Wno-pointer-to-int-cast -Wno-int-conversion -Wno-format-overflow -Wno-incompatible-pointer-types -Wno-format

clean:
	-rm -f s68 *.o

s68:	c.o d.o def68.o defs68.o hnode.o hsize.o i.o m.o o.o opz.o p.o \
	  s.o x68z.o extra.o \
	dupstr.o	\
	roct.o		\
	index.o		\
	rdec.o		\
	rdecl.o		\
	eopti.o		\
	eopen.o		\
	enuexp.o
	ld /lib/ldfile -e start \
	  c.o d.o def68.o defs68.o hnode.o hsize.o i.o m.o o.o opz.o p.o \
	  s.o x68z.o extra.o \
	dupstr.o	\
	roct.o		\
	index.o		\
	rdec.o		\
	rdecl.o		\
	eopti.o		\
	eopen.o		\
	enuexp.o	\
	   -lc -o s68
.c.o:
	cc -c ${CFLAGS} -Df68000 -Don68000 $*.c

install:	s68
	cp s68 /usr/bin/tud

#end
