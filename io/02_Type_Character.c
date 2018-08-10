/*
 * 类型字符: 用于规定输出的类型
 * 类型字符有:
 * 	%、d、i、u、o、x、X、f、F、
 * 	e、E、g、G、a、A、c、s、p、n.
 */
#include <stdio.h>

int main( void ) {
	
	//１，浮点数%f %F
	printf( "1、浮点数(%%f):%f,(%%F):%F\n", 3.14, 3.14 );

	//2, 科学计数法%e %E表示float,double
	printf( "2、(%%e):%e,(%%E):%E\n", 3.14, 3.14 );

	//3, %g自动将能显示的很小很大的数以 %%f或%%e的格式打印.
	printf( "3、(%%g):%g,(%%G):%G\n", 3.14, 0.0000314 );

	//4, %c: 输出单个字符
	printf( "4、(%%c):%c\n", 65 );

	//5, %s: 输出字符串, 直到遇到NULL字符
	char greeting[] = "Nice To Meet You!";
	printf( "5、(%%s):%s\n", greeting );

	//6, %p: 输出内存地址, 以16进制表示
	int a = 10;
	int* p = &a;
	printf( "6、(%%p):%p\n", p );
	printf( "6、(%%p):%p\n", greeting );

	//7, %n: 把前面字符的长度　输出到后面那个变量
	int count = 100;
	int *storage = &count;
	printf( "7、%s %n %d\n", greeting, storage, count );
	printf( "7、%d\n", count );
	
	return 0;
}

