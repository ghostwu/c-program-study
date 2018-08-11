#include <stdio.h>
/*
 * fprintf跟printf用法差不多，多了个参数（第一个).
 * 第一个参数通常用stdin( 标准输入流 ) stdout( 标准输出流 ), stderr( 错误输出流 ), 文件句柄
 */
int main( void ) {
	char *month = "July";
	char *weekday = "Saturday";
	int year = 2018;
	int day = 3;
	int hour = 9;
	int min = 2;
	int sec = 1;

	printf( "%s %.2d, %s %d %.2d:%.2d:%.2d\n", weekday, day, month, year, hour, min, sec );

	return 0;
}

