#include <stdio.h>
/*
 * 附加修饰符: 用于指定数据为何种精确的类型
 * 附加修饰符有: hh h l ll L
 */
int main( void ) {
	
	// 1, hh 常与d, i一起使用表示一个signed char类型
	signed char sc = -55;
	printf( "%hhd\n", sc );
	
	unsigned char uc = 250;
	printf( "%hhu\n", uc );

	//2, h　表示一个short int或者unsigned short int

	short int a = 360;
	printf( "%hd\n", a );

	//3, l 表示long int或者unsigned long int
	long race = 12345000;
	printf( "赛道长度:%ld\n", race );

	//4, ll 表示long long int 或者unsigned long long int
	long long population = 1300000000;		
	printf( "%lld\n", population );

	//5, L 表示long double
    // 与 a　A e E f F g G一起使用	
	long double distance = 381234.23;
	printf( "%Lf\n", distance );

	return 0;
}

