#include <stdio.h>

int main( void ) {
	
	int num1 = 10, num2 = 100;
	int* ptr_num1 = &num1;
	int* ptr_num2 = &num2;
	
	//*ptr_num2 = *ptr_num1; // 等价于num2 = num1;		
	num2 = num1;

	printf( "num1=%d, num2=%d\n", num1, num2 );

	return 0;
}
