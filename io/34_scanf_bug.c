#include <stdio.h>

int main ( void ) {
	char c[5];
	int i = 0;
	printf( "pls input data(Abraham):\n" );
	for( i = 0; i < 5; i++ ){
		scanf( "%c", &c[i] );
	}
	printf( "output data\n" );
	printf( "%s\n", c );
	
	return 0;
}

