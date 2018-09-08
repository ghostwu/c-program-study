#include <stdio.h>

int main( void ) {
	
	int arr[3] = { 10, 20, 30 };
	//错误的初始化方式
	//当数组作为右值时,传递的是数组的首地址, 是一个指针类型
	//而左边(左值) 是个数组类型,所以,这种赋初始值的方法是错误的
	int arr2[3] = arr;
	return 0;
}
