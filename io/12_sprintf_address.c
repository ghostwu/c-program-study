#include <stdio.h>
/*
 * sprintf: 打印地址格式
 */
int main( void ) {

	char str[64];
	int i = 100;	
	sprintf( str, "%u", (unsigned int)&i );	
	printf( "%s\n", str );

	sprintf( str, "%#x", (unsigned int)&i );	
	printf( "%s\n", str );

	sprintf( str, "%p", &i );	
	printf( "%s\n", str );
	
	return 0;
}

