/*
 * 自定义字符串拷贝方法
 */

#include <stdio.h>

char* my_strcpy( char *dst, const char *src ) {
	int i = 0;
	for( i = 0 ; src[i] != '\0'; i++ ){
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return dst;
}

int main( void ) {
	char backup[100];
	char str[100];
	gets( str );
	my_strcpy( backup, str );
	printf( "str=%s\n", str );
	printf( "backup=%s\n", backup );
	return 0;
}
