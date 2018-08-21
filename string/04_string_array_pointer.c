/*
 * 字符串数组与指针的用法与区别
 */
#include <stdio.h>
int main ( void ) {
	char heart[] = "I love china";	
	const char* head = "I love Beijing";

	//两者都可以使用数组下标
	for( int i = 0; i < 6; i++ ){
		putchar( heart[i] );
	}
	putchar( '\n' );
	for( int i = 0; i < 6; i++ ){
		putchar( head[i] );
	}
	putchar( '\n' );


	puts( "-------------两者都能进行指针加法操作--------------" );
	for( int i = 0; i < 6; i++ ){
		putchar( *( heart + i ) );
	}
	putchar( '\n' );
	for( int i = 0; i < 6; i++ ){
		putchar( *( head + i ) );
	}
	putchar( '\n' );

	puts( "-------------指针可以递增操作--------------" );
	//数组名不能递增,因为数组名是个常量,不是变量
	while( *( head ) != '\0' ){
		putchar( *head++ );
	}
	putchar( '\n' );

	/*报错
	while( *( heart) != '\0' ){
		putchar( *heart++ );
	}
	putchar( '\n' );
	*/

	return 0;
}
