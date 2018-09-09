#include <stdio.h>
//printf打印字符串, 直到NULL结尾,如果没有NULL，一直往后打印,会造成越界
int main( void ) {
	char greeting[5] = "Hello";
	//下面这句 有可能没有错误，有可能乱码，有可能程序崩溃
	printf( "%s\n", greeting );

	//好的做法，直接给字符串数组赋值，让编译器自动计算长度
	char str[] = "hello,baby";
	printf( "%s\n", str );
}
