#include <stdio.h>
#include <string.h>
/*
 * sprintf第一个参数是一个buffer，后面跟printf一样
 * 1、使用sprintf可以把整形打印到字符串，实现类型转换
 * 2、很多场合下，用sprintf代替函数itoa
 */
int main( void ) {
	
	char str[20];
	sprintf( str, "%d", 100 );
	printf( "字符串长度strlen(str):%ld,实际占用空间:%ld,存储的值为:%s\n", strlen( str ), sizeof( str ), str );

	//指定宽度, 左边补空格
	sprintf( str, "%4d%5d", 12, 34 );
	printf( "字符串长度strlen(str):%ld,实际占用空间:%ld,存储的值为:%s\n", strlen( str ), sizeof( str ), str );

	//左对齐
	sprintf( str, "%-4d%5d", 12, 34 );
	printf( "字符串长度strlen(str):%ld,实际占用空间:%ld,存储的值为:%s\n", strlen( str ), sizeof( str ), str );

	//16进制小写
	sprintf( str, "%#-4x%#5x", 10, 20 );
	printf( "字符串长度strlen(str):%ld,实际占用空间:%ld,存储的值为:%s\n", strlen( str ), sizeof( str ), str );

	sprintf( str, "%#-4X%#5X", 10, 20 );
	printf( "字符串长度strlen(str):%ld,实际占用空间:%ld,存储的值为:%s\n", strlen( str ), sizeof( str ), str );

	//前面补0
	sprintf( str, "%04X%05X", 10, 20 );
	printf( "字符串长度strlen(str):%ld,实际占用空间:%ld,存储的值为:%s\n", strlen( str ), sizeof( str ), str );
	return 0;
}

