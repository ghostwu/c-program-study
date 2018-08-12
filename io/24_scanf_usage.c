#include <stdio.h>

int main ( void ) {
	printf( "请输入长方形的宽和高,以逗号分隔,如 12, 13, 14\n" );
	double width, height;
	scanf( "%lf, %lf", &width, &height );
	printf( "长方形的宽: %.0lf, 长方形的高: %.0lf\n", width, height );
	printf( "长方形的面积: %.0lf\n", width * height );
	printf( "长方形的周长: %.0lf\n", 2 * ( width + height ) );

	return 0;
}
