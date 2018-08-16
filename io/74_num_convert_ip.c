#include <stdio.h>

int main( void ) {
	printf( "请输入4个整数\n" );
	int a, b, c, d;
	fscanf( stdin, "%3d %3d %3d %3d", &a, &b, &c, &d );

	//方法一
	//fprintf( stdout, "转化为ip格式:%d.%d.%d.%d\n", a, b, c, d );
	
	//方法二
	/*
	char buf[128];
	sprintf( buf, "%d.%d.%d.%d", a, b, c, d );
	printf( "%s\n", buf );
	*/

	//方法三
	char buf[128];
	snprintf( buf, sizeof( buf ), "%d.%d.%d.%d", a, b, c, d );
	printf( "%s\n", buf );

	return 0;
}


