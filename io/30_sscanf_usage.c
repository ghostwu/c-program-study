/*
 * 利用它可以从字符串中取出整数，浮点数和字符串等等
 */
#include <stdio.h>

int main( void ) {
	
	//1、读取字符串
	char name[32];
	sscanf( "ghostwu", "%s", name );
	printf( "name=%s\n", name );

	//2、取指定长度的字符串
	char str[7];
	sscanf( "123456789", "%6s", str );
	printf( "str=%s\n", str );
	
	//3、格式化时间
	int year, month, day, hour, min, sec;
	sscanf( "2018/08/20 12:54:32", "%d/%d/%d %d:%d:%d\n", &year, &month, &day, &hour, &min, &sec  );
	printf( "%d-%d-%d %d:%d:%d\n", year, month, day, hour, min, sec );


	return 0;
}
