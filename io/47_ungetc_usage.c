/*
 * 向屏幕输入字符,只要一遇到空格键就把已经输入的前两个字符删除
 */
#include <stdio.h>

int main( void ) {
	char ch;
	while( ( ch = getchar() ) != EOF && ch != ' ' ) {

	}
	//等于空格　就删除前面2个输入
	// \b是转移字符, 往回移动光标
	printf( "\b" );	
	printf( "\b" );	
	printf( "\b" );	
	ungetc( ' ', stdin ); //退回缓冲区
	ungetc( ' ', stdin );

	printf( "---%c---\n", getchar() );
	printf( "---%c---\n", getchar() );
	return 0;
}

