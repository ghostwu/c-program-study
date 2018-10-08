/*
 * 判断回文字符串
 */

#include <stdio.h>
#include <string.h>

int main( void ) {
	
	char str[100];
	printf( "请输入一串字符串\n" );
	gets( str );

	int len = strlen( str );
	int mid = len / 2 - 1;

	int top = 0;
	int i = 0;
	char stack[100];
	for( i = 0 ; i <= mid ; i++ )
		stack[++top] = str[i];
	
	int next = ( len % 2 == 0 ) ? mid + 1 : mid + 2;
	
	for( i = next ; i < len ; i++ ) {
		if( stack[top] != str[i] )
			break;
		top--;
	}

	if( top == 0 ) {
		printf( "是回文\n" );
	}else{
		printf( "不是回文\n" );
	}

	return 0;
}
