/******************snprintf用法***************
******************snprintf用法****************/

#include <stdio.h>
#include <string.h>

int main ( void ) {
	
	char buf[32];
	int count = 0;
	
	//snprintf 防止缓冲区溢出, 当填充100个0时, 它会截断多余的
	/*
	snprintf( buf, sizeof( buf ), "%.100d%n", 0, &count );
	printf( "%s\n", buf );
	printf( "buff size = %lu\n", strlen( buf ) );
	printf( "%d\n", count );
	*/

	//sprintf会产生缓冲区溢出
	sprintf( buf, "%.100d%n", 0, &count );
	printf( "%s\n", buf );
	printf( "buff size = %lu\n", strlen( buf ) );
	printf( "%d\n", count );


	return 0;
}

