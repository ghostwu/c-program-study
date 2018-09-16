/*
 * 字符串存储方式
 */
#include <stdio.h>

int main( void ) {

	char str[100];
	int i = 0;

	for( i = 0 ; i < 100 ; i++ ){
		//清空字符串的内容
		str[i] = ' ';
	}
	
	char ch;
	i = 0;
	while( ( ch = getchar() ) != '\n' ) {
		str[i] = ch;
		i++;
	}

	//由于没有null字符结尾会 越界读
	//printf( "%s\n", str );

	for( i = 0 ; i < 100 ; i++ ){
		putchar( str[i] );
	}

	putchar( '\n' );

	return 0;
}
