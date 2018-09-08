#include <stdio.h>
#include <stdlib.h>

int main() {
	//生成10-20之间的随机数字
	printf( "%d\n", ( 10 + rand() % 11 ) );
}
