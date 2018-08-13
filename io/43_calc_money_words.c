/*
 * 统计money的个数
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main ( void ) {
	
	FILE *stream;
	stream = fopen( "money.txt", "r" );
	if( NULL == stream ){
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	int c;
	char buff[6];
	int count = 0;
	char str[6] = "money";

	do {
		c = fgetc( stream );
		if( c == 'm' ) {
			int i = 0;
			sprintf( buff, "%c", c );
			for ( i = 0; i < 4; i++ ){
				c = fgetc( stream );	
				sprintf( buff + ( i + 1 ), "%c", c );
			}
			printf( "buff=%s\n", buff );
			if( strcmp( buff, str ) == 0 ) {
				count++;
			}
			memset( buff, 0, 6 );
		}
	}while( c != EOF );
	
	printf( "there are %d money words\n", count );

	return 0;
}

