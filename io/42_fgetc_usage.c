#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {
	system( "echo \"do you like $ ? no, I don't like $ !\" > money.output " );
	FILE *stream;
	stream = fopen( "money.output", "r" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	int c;
	int count = 0;
	do {
		c = fgetc( stream );
		if( c == '$' ) count++;
		if( c == 'q' ) exit( 0 );
	}while( c != EOF );
	printf( "there are %d $ in file\n", count );
	return 0;
}

