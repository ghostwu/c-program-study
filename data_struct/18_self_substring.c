/*
 * 提取子字符串
 */

#include <stdio.h>

char* my_substring( char *str, int pos, int len ) {
	static char buf[100];
	int i, j, end;
	pos--;
	end = pos + len - 1;
	for( i = pos , j = 0 ; i <= end ; i++, j++ ) {
		buf[j] = str[i];
	}
	buf[len] = '\0';
	return buf;
}

int main( void ) {
	
	printf( "请输入一串字符串\n" );
	char buf[100];
	gets( buf );

	printf( "请输入开始位置\n" );
	int pos;
	scanf( "%d", &pos );

	printf( "请输入长度\n" );
	int len;
	scanf( "%d", &len );

	printf( "%s\n", my_substring( buf, pos, len ) );

	return 0;
}
