/*
 * scanf从缓冲区读入，所以会把上个输入的空格，回车或者没有读完的内容，会被下一个scanf读出来
 */
#include <stdio.h>

int main( void ) {
	
	char name[128];
	char buf[128];
	printf( "请输入你的姓名:" );
	fgets( buf, sizeof( buf ), stdin );
	sscanf( buf, "%s", name );

	printf( "请输入你的年龄:" );
	int age;
	fgets( buf, sizeof( buf ), stdin );
	sscanf( buf, "%d", &age );

	printf( "请输入你的性别:" );
	char sex;
	fgets( buf, sizeof( buf ), stdin );
	sscanf( buf, "%c", &sex );

	printf( "请输入你的身高:" );
	double height;
	scanf( "%lf", &height );

	printf( "请输入你的体重:" );
	double weight;
	scanf( "%lf", &weight );

	printf( "%s, %c, %d, %lf, %lf\n",
			name, sex, age, height, weight );

	return 0; }
