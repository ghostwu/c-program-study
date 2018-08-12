/******************scanf用法***************
******************scanf用法****************/

#include <stdio.h>
#include <string.h>

int main ( void ) {

	int a, b;		

	// %* 将使转换后的值被废弃而不是存储
	printf( "请输入3个数,用空格隔开\n" );
	scanf( "%d %*d %d", &a, &b );
	printf( "a=%d, b=%d\n", a, b );

	printf( "请输入3个数,用逗号隔开\n" );
	scanf( "%d,%*d,%d", &a, &b );
	printf( "a=%d, b=%d\n", a, b );
	return 0;
}

