/*
 * 队列
 */

#include <stdio.h>

typedef struct queue {
	int data[30];
	int head;
	int tail;
}Q;

int main( void ) {
	Q q1;
	int i = 0;
	q1.head = 0;
	q1.tail = 0;
	for( i = 0 ; i < 10 ; i++ ) {
		q1.data[q1.tail] = ( i + 1 ) * 10;
		q1.tail++;	
	}
	while( q1.head < q1.tail ) {
		printf( "%d\n", q1.data[q1.head] );
		q1.head++;
	}
	return 0;
}
