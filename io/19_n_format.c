/**********************%n的用法***********
	%n: 不会打印任何东西。 这个参数必须是一个有符号整数的指针，它存储它出现之前打印的所有字符数 
**********************%n的用法***********/

#include <stdio.h>

int main( void ) {
	int count;
	//%n前面的字符为ghost, 把他的长度存储到count
	printf( "ghost%nwu\n", &count );
	//所以count=5
	printf( "count=%d\n", count );
	return 0;
}


