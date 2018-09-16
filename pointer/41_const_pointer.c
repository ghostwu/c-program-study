#include <stdio.h>

int main( void ) {
	/*
	int a = 10;
	//指向const的指针, 这个指针可以改变
	const int const *p = &a;
	//*p = 100;

	int b = 100;
	p = &b;
	*/

	int a = 10;
	//这个指针是常量指针, 指向的是一个const int
	const int* const p = &a;
	int b = 100;
	//p不能改变
	p = &b;

}
