#include <stdio.h>

int main( void ) {
	//a为const类型, 只能读, 不可以写[改变a的值]
	//const int a = 10;
	//const int a等价于 int const a
	int const a = 100;
	a = 20;
	printf( "a = %d\n", a );
	return 0;
}
