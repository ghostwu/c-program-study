#include <stdio.h>

int main( void ) {
	
	/*
	 * 陷阱:
	 * 'a'是char型，char型占一个字节，但是下面的sizeof( 'a' ) 输出4
	 * 原因：
	 * 因为 'a' = 97, sizeof( 'a' )进行了类型转换，相当于sizeof( int ) = 4
	 */
	printf( "sizeof( 'a' ) = %lu\n", sizeof( 'a' ) );

	// 解决方法,把'a'定义为char型的变量
	char ch = 'a';
	printf( "sizeof( ch ) = %lu\n", sizeof( ch ) );

	//也可以强制类型转换
	printf( "sizeof( ( char )'a' ) = %lu\n", sizeof( ( char )'a' ) );

	return 0;
}
