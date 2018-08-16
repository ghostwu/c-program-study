#include <stdio.h>

int main( void ) {
	int i = 0;
	//这种写法在有些编译器，报警告, 他不知道应该先执行i 还是++i
	//printf( "%d %d\n", i, ++i  );
	//推荐写法
	printf( "%d\n", i );
	printf( "%d\n", ++i );
	return 0;
}
