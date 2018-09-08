#include <stdio.h>
#include <stdlib.h>

int main() {
	//rand() 产生的是一个伪随机数,范围为 0 ~ RAND_MAX
	printf( "%d\n", RAND_MAX );
	printf( "%d\n", rand() );
	return 0;
}
