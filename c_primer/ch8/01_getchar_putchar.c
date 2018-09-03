/*
 * 单字符输入与输出
 */
#include <stdio.h>

int main( void ) {
	char ch;
	while( ( ch = getchar() ) != '#' ) {
		putchar( ch );	
	}
	return 0;
}
