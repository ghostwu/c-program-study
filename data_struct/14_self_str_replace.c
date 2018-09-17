/*
 * 自定义字符串替换方法
 */

#include <stdio.h>

char* my_str_replace( char *dst, const char *src, int pos ){
	int i = 0, j = 0;
	pos--;
	for( i = pos ; dst[i] != '\0' ; i++ ){
		if( src[j] != '\0' ) {
			dst[i] = src[j];
			j++;
		}else{
			break;
		}
	}
	return dst;
}

int main( void ) {
	char dst_str[100];
	char src_str[100];
	
	printf( "请输入目标字符串\n" );
	gets( dst_str );

	printf( "请输入源字符串\n" );
	gets( src_str );

	my_str_replace( dst_str, src_str, 10 );

	printf( "替换后的字符串为:%s\n", dst_str );

	return 0;
}
