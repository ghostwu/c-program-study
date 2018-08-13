/*
 * 从键盘输入1~100，把奇数字符串'1','3','5'..放入文件
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main( void ) {
	
	FILE *stream; stream = fopen( "putc_odd.output", "ab" );
	if( NULL == stream ) {
		fprintf( stderr, "fopen: %s\n", strerror( errno ) );
		exit( EXIT_FAILURE );
	}

	printf( "请输入1-100之前的整数\n" );
	char buff[10];
	scanf( "%s", buff );

	int num; sscanf( buff, "%d", &num );
	int i = 0;

	if( num % 2 != 0 ) {
		for( i = 0; i < strlen( buff ); i++ ) {
			putc( buff[i], stream );
		}
		putc( ',', stream );
	}

	fclose( stream );
	return 0;
}
