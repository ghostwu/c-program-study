/*
 * scanf只处理回车
 */
#include <stdio.h>

int main( void ) {
	printf( "请输入一串字符\n" );
	char buff[128];
	scanf( "%[^\n]", buff );
	printf( "%s\n", buff );
	
	return 0;
}
