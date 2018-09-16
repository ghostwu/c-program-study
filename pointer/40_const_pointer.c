#include <stdio.h>

int main( void ) {
	int a = 10;
	//指向const的指针, 这个指针可以改变
	const int const *p = &a;
	//*p = 100;

	int b = 100;
	p = &b;

}
