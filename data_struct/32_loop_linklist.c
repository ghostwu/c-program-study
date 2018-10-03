/*
 * 循环链表
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct NUMS {
	int num;
	struct NUMS *p_next;
}N;

N* create_linklist( int *a, int n ){
	N* p_head;
	p_head = ( N* )malloc( sizeof( N ) );
	if( !p_head ) return NULL;

	N* p_node = p_head;
	int i = 0;
	for( i = 0 ; i < n ; i++ ){
		N* p = ( N* )malloc( sizeof( N ) );
		if( !p ) return NULL;
		p->num = a[i];
		p->p_next = NULL;
		p_node->p_next = p;
		p_node = p;
	}
	p_node->p_next = p_head;
	return p_head;
}

void print_linklist( N* p_head ) {
	N* p_node = p_head->p_next;
	do {
		printf( "%d\n", p_node->num );
		p_node = p_node->p_next;
	}while( p_node != p_head );
}

int main( void ) {
	int a[5] = { 10, 20, 30, 40, 50 };
	N* p_head = create_linklist( a, 5 );
	print_linklist( p_head );
	return 0;
}
