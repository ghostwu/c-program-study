/*
 * 查找特定的子字符串
 */

#include <stdio.h>

int my_strlen( const char* str ) {
	int i;
	for( i = 0 ; str[i] != '\0' ; i++ );
	return i;
}

int my_indexof( char* str1, char* str2 ) {
	int end = my_strlen( str1 ) - my_strlen( str2 );
	int i, j;
	if( end > 0 ) {
		for( i = 0 ; i <= end ; i++ ) {
			for ( j = i ; str1[j] == str2[j - i]; j++ ) {
				if( str2[j - i + 1] == '\0' ) {
					return i + 1;
				}
			}
		}
	}
	return -1;
}

int main( void ) {
	
	char str[100];
	printf( "请输入一串字符串\n" );
	gets( str );
	printf( "请输入要寻找的子字符串\n" );
	char substring[100];
	gets( substring );
	int index = my_indexof( str, substring );
	if( index < 0 ) {
		printf( "没有找到子字符串%s\n", substring );	
	}else {
		printf( "子字符串%s位置在%d\n", substring, index );
	}
	return 0;
}
