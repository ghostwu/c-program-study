#include <stdio.h>

void safe_flush( FILE *stream ){
	char ch;
	while( ( ch = fgetc( stream ) ) != EOF && ch != '\n' );
}

int main ( void ) {
	char c[5];
	int i = 0;
	printf( "pls input data(Abraham):\n" );
	for( i = 0; i < 5; i++ ){
		scanf( "%c", &c[i] );
		safe_flush( stdin );
	}
	printf( "output data\n" );
	printf( "%s\n", c );
	
	return 0;
}

