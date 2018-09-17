/*
 * 自定义插入字符串方法
 */

#include <stdio.h>

int my_strlen( const char* str ){
	int i = 0;
	for( i = 0 ; str[i] != '\0'; i++ );
	return i;
}

char* my_insert( char* dst, const char* src, int pos ) {
	int d_len = my_strlen( dst );
	int s_len = my_strlen( src );
	
	pos--;
	//空出位置
	for( int i = d_len - 1 ; i >= pos ; i-- ) {
		*( dst + i + s_len ) = *( dst + i );
	}

	//插入
	for( int j = 0 ; j < s_len ; j++ ) {
		*( dst + pos + j ) = *src++;
	}

	//添加字符串结尾标识
	*( dst + d_len + s_len ) = '\0';

	return dst;
}

int main( void ){
	
	char dst_str[100] = "hello,this is book";
	char src_str[100] = " a";
	my_insert( dst_str, src_str, 14 );
	printf( "插入后的字符串为%s\n", dst_str );
	return 0;
}
