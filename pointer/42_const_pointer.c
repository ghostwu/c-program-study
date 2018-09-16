#include <stdio.h>

int main( void ) {
	const char c = 'a';
	//通过非const指针, 间接修改了const类型的变量
	char *pc = &c;
	*pc = 'b';
	printf( "pc=%c, c=%c\n", *pc, c );
	return 0;
}
