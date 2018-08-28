#include <stdio.h>
/*
 * 1, gets丢弃输入中的换行符
 * 2, puts在输出中添加换行符
 * 3, fgets保留输入中的换行符
 * 4, fputs不在输出中添加换行符
 */

int main( void ) {

	char line[64];
	/*
	while( gets( line)  ) {
		puts( line );
	}
	*/

	while( fgets( line, 64, stdin ) ) {
		fputs( line, stdout );	
	}
	
	return 0;
}
