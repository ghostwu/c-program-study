/*
 * 自定义计算字符串长度的方法
 */

#include <stdio.h>

int my_strlen( const char* str ) {
	int i = 0;
	for( i = 0 ; str[i] != '\0' ; i++ );
	return i;
}

int main( void ) {
	//char *str = "hello,ghostwu";
	char str[] = {
		'h','e','l','l','o',',',
		'g','h','o','s','t',
		'w','u','\0'
	};
	printf( "str=%s, strlen(str)=%d\n", str, my_strlen( str ) );
	return 0;
}
