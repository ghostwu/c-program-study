#include <stdio.h>

int main( void ) {

	int dividend = 5;
	int divisor = 2;
	/*
	 * 一个整数除以一个整数, 总是返回一个整数
	 */
	if( dividend / divisor == 2 ) {
		printf( "整除运算\n" );
	}

	if( dividend / divisor == 2.5 ) {
		printf( "浮点运算\n" );
	}

	/*
	 * 如果想变成浮点运算
	 * １, 被除数/除数+0.0
	 * ２, 被除数/除数写成浮点形式,如2.0
	 */

	if( dividend / ( divisor + 0.0 ) == 2.5 ) {
		printf( "方法一:执行浮点运算\n" );
	}
	
	if( dividend / 2.0 == 2.5 ) {
		printf( "方法二:执行浮点运算\n" );
	}

	if( dividend / 2. == 2.5 ) {
		printf( "方法三:执行浮点运算\n" );
	}

	/*
	 * 使用强制类型转换
	 */

	if( dividend / ( double )divisor == 2.5 ) {
		printf( "类型转换后:浮点运算\n" );
	}

	if( dividend / ( double )2 == 2.5 ) {
		printf( "类型转换后:浮点运算\n" );
	}

	return 0;
}
