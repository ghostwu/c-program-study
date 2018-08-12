/*******************存储随机数到数组**************
	Author:ghostwu
	Email:359173352@qq.com
*******************存储随机数到数组**************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ) {
	
	srand( time( 0 ) );
	char str[64];
	int i = 0;
	int offset = 0;
	for( i = 0; i < 10; i++ ){
		//rand() % 100 取1~100之前的随机数
		offset += sprintf( str + offset, "%d,", rand() % 100 );
	}
	str[offset-1] = '\n';
	printf( "str=%s",str );
	return 0;
}

