#include <stdio.h>

int main ( void ) {
	printf( "请输入一个字符\n" );
	char ch;
	//从流中读入一个字符,不管你输入多少个,他只读取最前面那个
	ch = getchar();
	printf( "您输入的字符是:%c\n", ch );
	return 0;
}


