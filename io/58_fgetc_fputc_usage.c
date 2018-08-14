#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {
	FILE *stream;
	stream = fopen( "fgetc_fputc.output", "ab" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}

	int c = fgetc( stdin );
	fputc( c, stream );
	
	return 0;
}
