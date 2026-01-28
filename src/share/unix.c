#include "../h/unix.h"
#include <stdio.h>

#ifdef VAX
int yyline;
#endif VAX

yyerror(s)
register char *s;
{
	fprintf (stderr, s);
	fflush (NULL);
	return 1;
}
