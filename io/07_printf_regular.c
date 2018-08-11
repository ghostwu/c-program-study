#include <stdio.h>
/*
 * printf经常使用的格式
 */
int main( void ) {

	char ch = 'a';
	printf( "1、打印字符类型%%c\n" );
	printf( "%c\n", ch );

	printf( "2、打印h, d, ld, o, x \n" );
	int a = 10;
	printf( "a = %d = %hd = %ld = %#o = %#x\n", ( short )a, a, ( long int )a, a, a );

	//打印浮点型
	double d_data = 1.618033214;
	printf( "d_data = %f = %lf = %Lf = %e = %g \n", d_data, d_data, ( long double )d_data, d_data, d_data );

	//打印字符串
	char *name = "ghostwu";
	printf( "%s\n", name );
	
	//打印变量地址( 指针 )
	printf( "%p\n", &d_data );

	return 0;
}
