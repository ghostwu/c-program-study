/*
 * 自定义删除字符串方法
 */

#include <stdio.h>

char* delstr( char* str, int pos, int len ){
	int i;
	pos--;
	for( i = pos + len ; str[i] != '\0' ; i++ ){
		str[i - len] = str[i];
	}
	str[i - len] = '\0';
	return str;
}

int main( void ) {
	
	char string[100];
	printf( "请输入一串字符串\n" );
	gets( string );
	printf( "请输入要删除的位置\n" );
	int pos;
	scanf( "%d", &pos );
	printf( "请输入要删除的长度\n" );
	int len;
	scanf( "%d", &len );
	printf( "删除后的字符串%s\n", delstr( string, pos, len ) );
	return 0;
}
