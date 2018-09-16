/*
 * 压缩稀疏矩阵
 */

#include <stdio.h>

int main( void ) {
	
	int sparse[5][10] = {
		0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
		0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 6, 0, 0
	};

	int compress[6][3];
	
	compress[0][0] = 5;  //行
	compress[0][1] = 10; //列
	compress[0][2] = 5;  //存储了多少个非0值

	int i = 0, j = 0, k = 1;
	for( i = 0 ; i < 5 ; i++ ){
		for( j = 0 ; j < 10 ; j++ ) {
			if( sparse[i][j] != 0 ) {
				compress[k][0] = i + 1;
				compress[k][1] = j + 1;
				compress[k][2] = sparse[i][j];
				k++;
			}
		}
	}

	//输出压缩后的矩阵
	for( i = 0 ; i < 6 ; i++ ){
		printf( "%d\t%d\t%d\t", compress[i][0], compress[i][1], compress[i][2] );
		putchar( '\n' );
	}

	return 0;
}
