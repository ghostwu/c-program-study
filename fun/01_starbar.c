#include <stdio.h>
#define 		NUM 			40
#define 		NAME 			"ghostwu"
#define 		EMAIL 			"359173352@qq.com"
#define 		QQ				"359173352"


void star_bar() {
	for( int i = 0; i < NUM; i++ ){
		putchar( '*' );
	}
	putchar( '\n' );
}
int main() {
	star_bar();
	printf( "* 姓名:%s\n", 	NAME );
	printf( "* EMAIL:%s\n", 	EMAIL );
	printf( "* QQ:%s\n", 	QQ );
	star_bar();
	return 0;
}


