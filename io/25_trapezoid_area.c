#include <stdio.h>

int main ( void ) {

	printf( "请输入梯形的上底,下底,高,用逗号分开,如12, 13, 14\n" );
	double up, down, height;
	scanf( "%lf, %lf, %lf", &up, &down, &height );
	printf( "梯形的上底=%.0lf, 下底=%.0lf, 高=%.0lf\n", up, down, height );
	printf( "梯形的面积=%.0lf\n", ( up + down ) * height / 2 );
	return 0;
}



