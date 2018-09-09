#include <stdio.h>

int main( void ) {
	char *str = "hello";
	//不能修改, 运行发生段错误
	str[0] = 'H';
	printf( "%s\n", str );
}
