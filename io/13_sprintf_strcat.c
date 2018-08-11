#include <stdio.h>
/*
 * sprintf: 格式控制串可以插入各种东西
 * 可以达到字符串拼接的效果，类似于strcat
 */
int main ( void ) {
	char str[64];
	sprintf( str, "%s %s", "Hi ghostwu", "Nice to meet you!" );	
	printf( "%s\n", str );

	//拼接多个字符串
	sprintf( str, "%s%s%s", "Hi ghostwu,", "Nice to meet you!", "Nice to meet you too" );	
	printf( "%s\n", str );

	return 0;
}

