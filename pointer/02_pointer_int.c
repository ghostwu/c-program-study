#include <stdio.h>

int main( void ) {
	
	int num1 = 10, num2 = 100;
	int* ptr_num1 = &num1;
	int* ptr_num2 = &num2;
	printf( "num1=%d, *ptr_num1=%d\n", num1, *ptr_num1 );
	printf( "num2=%d, *ptr_num2=%d\n", num2, *ptr_num2 );
	printf( "ptr_num2=%p, ptr_num1=%p\n", ptr_num2, ptr_num1 );
	ptr_num2 = ptr_num1;
	printf( "ptr_num2=%p, ptr_num1=%p\n", ptr_num2, ptr_num1 );
	*ptr_num2 = 1000;
	printf( "num1=%d, *ptr_num1=%d\n", num1, *ptr_num1 );
	printf( "num2=%d, *ptr_num2=%d\n", num2, *ptr_num2 );

	return 0;
}
