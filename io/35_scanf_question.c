#include <stdio.h>


int main( void ) {
	printf( "pls input data\n" );
	int age;
	/*
	 * １, 如果是%d格式转换符, 当输入数字回车后，正常接收
	 * ２, 如果是空白字符, 会忽略
	 */
	scanf( "%d", &age );
	printf( "%d\n", age );
	return 0;
}
