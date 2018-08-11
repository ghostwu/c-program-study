#include <stdio.h>
/*
 * 打印浮点数
 */
int main( void ) {
	char str[64];
	sprintf( str, "%f", 3.1415926 );	
	printf( "%s\n", str );
	
	/*
	 * 控制打印的宽度和精度
	 * %m.n格式: m表示打印的宽度, n表示小数的位数
	 */
	sprintf( str, "%10.2f", 3.1415926 );	
	printf( "%s\n", str );

	sprintf( str, "%-10.2f", 3.1415926 );	
	printf( "%s\n", str );

	return 0;
}


