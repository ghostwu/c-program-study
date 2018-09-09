#include <stdio.h>

int main( void ) {
	struct point {
		int x;
		int y;
	} p[4];
	for( int i = 0 ; i < 4 ; i++ ) {
		p[i].x = i * 10;
		p[i].y = i * 10;
	}

	for( int i = 0 ; i < 4 ; i++ ) {
		printf( "p[%d]=%d,p[%d]=%d\n", i, p[i].x, i, p[i].y );
	}
	return 0;
}
