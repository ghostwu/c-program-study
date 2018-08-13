#include <stdio.h>

int main( void ) {

	printf( "pls input a integer\n" );
	int i;
	fscanf( stdin, "%d", &i );
	printf( "you input as follow:\n" );
	printf( "i=%d\n", i );
	return 0;	
}

