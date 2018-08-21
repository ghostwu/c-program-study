/*
 * 去除字符串中的回车换行
 */

#include <stdio.h>
#include <string.h>

int main( void ){
	char words[20];
	fgets( words, 20, stdin );
	printf( "您输入的字符串长度len=%lu\n", strlen( words ) );
	int i = 0;
	while( words[i] != '\n' ) i++;
	words[i] = '\0';
	printf( "去掉回车换行后len=%lu\n", strlen( words ) );
	return 0;
}
