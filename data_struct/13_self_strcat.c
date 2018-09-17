/*
 * 自定义连接字符串方法
 */

#include <stdio.h>

char* my_strcat( char *dst, const char* src ) {
	int i = 0, j = 0;
	for( i = 0 ; dst[i] != '\0' ; i++ );
	for( j = 0 ; src[j] != '\0' ; j++ ) {
		dst[i + j] = src[j];
	}
	dst[i + j] = '\0';
	return dst;
}

int main( void ) {
	char dst_str[100];
	char src_str[100];
	printf( "请输入目标字符串\n" );
	gets( dst_str );
	printf( "请输入原始字符串\n" );
	gets( src_str );
	my_strcat( dst_str, src_str );
	printf( "连接之后的字符串是:%s\n", dst_str );
	return 0;
}
