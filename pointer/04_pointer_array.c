#include <stdio.h>

int main( void ) {
	double nums[] = { 10.2, 30.4, 50.6, 70.8 };
	double* ptr_nums = nums;
	printf( "数组的首地址为nums:%p\n", nums );
	printf( "数组的首地址为&nums[0]:%p\n", &nums[0] );
	printf( "数组的首地址为ptr_nums:%p\n", ptr_nums );
	return 0;
}

