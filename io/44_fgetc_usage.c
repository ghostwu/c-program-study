/*
 * fgetc跟getc差不多,fgetc是函数调用,getc是宏
 * 用fgetc读取一个个字符
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {
	system( "echo \"you can call me ghostwu!\" > fgetc.output" );
	FILE *stream;
	stream = fopen( "fgetc.output", "r" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}
	
	int c;
	int count = 0;
	char buff[128];
	do {
		c = fgetc( stream );
		if( feof( stream ) ) {
			break;
		}
		sprintf( buff + ( count++ ), "%c", c );
	}while( 1 );
	printf( "%s", buff );

	return 0;
}
