#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main ( void ) {
	
	FILE *stream;
	stream = fopen( "putc.output", "w+" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}

	for ( char c = 'A'; c <= 'Z'; c++ ){
		putc( c, stream );
	}
	
	fclose( stream );

	return 0;
}


