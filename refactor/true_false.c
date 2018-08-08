#include <stdio.h>

int main( void ) {
	/*
	 * 如何写一个true,false的判断
	 * 方式一、
	 *	if ( flag == 1 ) 为真
	 *	if ( flag == 0 ) 为假
	 * 方式二，
	 * 	方式一代码虽然正确，但是不具备移植性,
	 *  我们可以用宏定义改写
	 *  if( flag == true )
	 *  if( flag == false )
	 *  这样true和false　表示真还是假都可以通过宏来切换
	 *  但是，这样切换宏，可能会导致定义不同的值而出现错误
	 * 方式三：（推荐写法)
	 * 	if( flag ) 为真
	 * 	if( !flag ) 为假
	 */
	
	 //判断青少年的标准 age >= 10 && age <= 18

	printf( "请输入年龄\n" );
	short age;
	scanf( "%hu", &age );
	int flag;
	if( age >= 10 && age <= 18 ) 
		flag = 1;
	else
		flag = 0;
	if( flag )
		printf( "你是一个青少年\n" );
	else
		printf( "你不是一个青少年\n" );
}


