#include <stdio.h>

#if 0
	#define UP 0
	#define DOWN 1
	#define LEFT 2
	#define RIGHT 3
#endif

//宏占据了4行，可以用enum重构成一行
//为了让枚举发挥作用，一般写成全局的

enum directions{ UP, DOWN, LEFT, RIGHT };

int main( void ) {
	int i;
	for( i = UP; i <= RIGHT; i++ ) {
		switch( i ) {
			case UP:
				printf( "上善若水\n" );
				break;
			case DOWN:
				printf( "下笔成章\n" );
				break;
			case LEFT:
				printf( "左右逢源\n" );
				break;
			case RIGHT:
				printf( "右手画圆,左手画方\n" );
				break;
		}
	}
	return 0;
}

