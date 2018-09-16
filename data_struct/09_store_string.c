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

	str[i] = '\0'; //加上NULL结束符
	//printf输出字符串，直到\0结尾
	//printf( "%s\n", str );
	
	//也可以像下面这样
	for( i = 0 ; str[i] != '\0' ; i++ ){
		putchar( str[i] );
	}
	putchar( '\n' );

	return 0;
}
