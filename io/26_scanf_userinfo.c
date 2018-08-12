#include <stdio.h>

int main( void ) {

	printf( "-----------------请输入您的信息--------------\n" );

	printf( "请输入您的姓名: " );
	char name[10];
	scanf( "%s", name );

	int age;
	printf( "请输入您的年龄: " );
	scanf( "%d", &age );

	printf( "请输入您的性别: " );
	char sex[2];
	scanf( "%s", sex );

	printf( "请输入您的体重,单位[千克]: " );
	double weight;
	scanf( "%lf", &weight );

	printf( "-----------------您输入的信息如下------------\n" );
	printf( "姓名: %s\n", name );
	printf( "年龄: %d\n", age );
	printf( "体重: %.0lf\n", weight );
	printf( "性别: %s\n", sex );

	return 0;
}
