/*
 * 修改指针定义的字符串某一个字符,会导致其他相同的字符串实例对应位置全部改变
 */

#include <stdio.h>

int main( void ){
	//char *p1 = "klingon";

	//p1[0] = 'F'; //不合法,因为相同字符串实例,如果是指针方式定义的，在内存中只有一份, 如果这样修改能成功,将会导致 很多地方使用的klingon变成flingon,编译的时候通不过，报段错误, 所以，建议，char*表示的字符串用const修饰
	//printf( "klingon\n" );
	//printf( "be ware the %s\n", "klingon" );

	//const char *p1 = "klingon";
	
	//如果需要修改字符串中的某个字符，建议使用数组方式定义
	//因为使用数组，是把静态存储的字符串常量，复制了一份到数组
	char str[] = "klingon";
	str[0] = 'F';
	printf( "klingon\n" );
	printf( "be ware the %s\n", str );
	printf( "be ware the %s\n", "klingon" );

	return 0;
}
