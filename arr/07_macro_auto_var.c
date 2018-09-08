/*
 * 局部变量与宏同名
 */
#include <stdio.h>
#define 	RECTANGULAR		1
#define 	POLAR			2

int main( void ) {
	
	//展开之后变成int 1, 显然是个错误
	//int RECTANGULAR;
	printf( "%d %d\n", RECTANGULAR, POLAR );
	//变量区分大小写
	int a = 10;
	int A = 100;
	printf( "a=%d, A=%d\n", a, A );
	return 0;
}
