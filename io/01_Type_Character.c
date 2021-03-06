/*
 * 类型字符: 用于规定输出的类型
 * 类型字符有:
 * 	%、d、i、u、o、x、X、f、F、
 * 	e、E、g、G、a、A、c、s、p、n.
 */
#include <stdio.h>

int main( void ) {
	// 1,输出%
	printf( "１、输出%%本身\n" );	
	printf( "%%\n" );	

	/*
	 * %d: 参数作为一个十进制输出
	 * %i: 根据传递的参数，自动进行8, 10, 16机制的输出
	 */

	printf( "2、十进制(%%d):%d, 八进制(%%i):%i, 十进制(%%i):%i, 十六进制(%%i):%i\n", 30, 036, 30, 0x1e );

	/*
	 * %u: 输出十进制无符号整型
	 */
	printf( "3、无符号整型(%%u)%u, %u\n", 30, 30u );

	/*
	 * %o: 输出8进制无符号的整型
	 */
	printf( "4、八进制无符号整型(%%o)%o\n", 30 );

	/*
	 * %x: 十六进制小写，无符号整型
	 * %X: 十六进制大写，无符号整型
	 */

	printf( "5、十六进制小写，无符号整型(%%x)%#x\n", 255 );
	printf( "5、十六进制大写，无符号整型(%%X)%#X\n", 255 );

	return 0;
}

