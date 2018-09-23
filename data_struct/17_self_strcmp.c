/*
 * 字符串比较
 */

#include <stdio.h>

int my_strcmp( const char* str1, const char* str2 ) {
	int i = 0;
	for( i = 0 ; str1[i] == str2[i] ; i++ ){
		if( str1[i] == '\0' && str2[i] == '\0' ) 
			return 0;
	}
	if( str1[i] < str2[i] ) return -1;
	return 1;
}

int main( void ) {
	char str1[100];
	char str2[200];
	printf( "请输入第一个字符串\n" );
	gets( str1 );
	printf( "请输入第二个字符串\n" );
	gets( str2 );
	int res = my_strcmp( str1, str2 );
	switch( res ) {
		case 0:
			printf( "两个字符串相等\n" );
			break;
		case 1:
			printf( "str1大于sr2\n" );
			break;
		default:
			printf( "str1小于str2\n" );
	}
	return 0;
}
