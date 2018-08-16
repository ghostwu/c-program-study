#include <stdio.h>

int main( void ) {
	int a, b, c;
	int nfields = fscanf( stdin, "%4d %4d %4d", &a, &b, &c );
	printf( "a = %d, b = %d, c = %d\n", a, b, c );
	return 0;
}
