#include <stdio.h>

/*
 * 宽度: 用于输出规定宽度
 * 宽度符有: n、0n、*.
 */

int main( void ){
	
	int stu_no = 20081234;
	//10 表示输出宽度10
	//d前面是正数，右对齐，前面补２个空格
	printf( "%10d\n", stu_no );
	//d前面是负数，左对齐，后面补２个空格
	printf( "%-10d\n", stu_no );

	//整数:如果实际宽度大于格式指定的宽度, 将按照实际宽度输出
	printf( "%4d\n", stu_no );

	//浮点数:如果实际宽度大于格式指定的宽度, 将按实际宽度输出
	printf( "%10f\n", 2.34 );
	printf( "%3f\n", 2203.34 );
	
	return 0;
}

