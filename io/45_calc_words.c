/*
 * 统计文件字符个数
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main( void ) {
	
	FILE * stream;
	stream = fopen( "fgetc.output", "r" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}

	int count = 0;
	int ch;
	do {
		ch = fgetc( stream );
		//32:空格  10:换行
		if( ch == 32 || ch == 10 ) count++;
		if( feof( stream ) ) {
			break;
		}
	}while( 1 );
	printf( "一共有%d个字符\n", count );
	return 0;
}

