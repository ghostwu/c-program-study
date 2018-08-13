#include <stdio.h>

int main(){ 
	/*
	 * 光标倒退 \b
	 */
	char ch;
	while( ( ch = getchar() ) != EOF && ch != ' ' ) {

	}
	//等于空格　就删除前面2个输入
	printf( "\b" );	
	printf( "\b" );	
	printf( "\b" );	

	printf( "%d\n", getchar() );
	printf( "%d\n", getchar() );
	printf( "%d\n", getchar() );

	return 0;
}


