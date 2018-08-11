#include <stdio.h>
/*
 * 利用sprintf返回值　往buffer中追加数据
 */
int main( void ){

	char buffer[128];
	int count =  sprintf( buffer, "%s", "ghostwu" );
	
	char greeting[] = ",how are you?";
	count +=  sprintf( buffer + count, "%s", greeting );

	double pi = 3.1415926;
	count += sprintf( buffer + count, "%.2.2f", pi );

	printf( "往buffer:(%s),写了%d个字符串\n", buffer, count );
		
	return 0;
}

