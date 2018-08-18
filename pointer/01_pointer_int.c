#include <stdio.h>

int main( void ) {

	int num = 10;
	int* ptr_num = &num;
	int** ptr_num2 = &ptr_num;
	//printf( "num address: %p, %#x\n", ptr_num, ptr_num );
	printf( "num address: %p\n", ptr_num );
	printf( "ptr_num's address: %p\n", ptr_num2 );
	*ptr_num = 100;	
	printf( "num = %d, *ptr_num = %d, &ptr_num = %p\n", num, *ptr_num, ptr_num2 );
	printf( "通过ptr_num2访问num的地址:%p\n", *ptr_num2 );
	printf( "通过ptr_num2访问num的值:%d\n", **ptr_num2 );
	**ptr_num2 = 1000;
	printf( "通过ptr_num2修改num的值:%d, %d, %d\n", **ptr_num2, num, *ptr_num );
	return 0;
}
