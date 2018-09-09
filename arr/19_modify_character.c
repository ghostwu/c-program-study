#include <stdio.h>

int main( void ) {
	//方法1
	/*
	char str[10] = "Hello";
	//可以修改
	str[0] = 'M';
	printf( "%s\n", str );
	*/

	char str[10] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	str[0] = 'M';
	printf( "%s\n", str );
}
