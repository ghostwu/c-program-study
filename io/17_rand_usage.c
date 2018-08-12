/*********************生成随机数******************
 	Author: ghostwu
	Email: 359173352@qq.com
*********************生成随机数******************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void ){
	srand( time( 0 ) ); //根据当前时间,提供随机数种子
	printf( "%dj\n", rand() );
	return 0;
}
