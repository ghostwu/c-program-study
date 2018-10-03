/*
 * 连接链表
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct NUMS {
	int num;
	struct NUMS *p_next;
}N;

N* build_link_list( int* arr, int len ){
	N* p_head;
	N* p_node;
	p_head = ( N* )malloc( sizeof( N ) );
	if( !p_head ) return NULL;
	p_node = p_head;

	int i = 0;
	for( i = 0 ; i < len ; i++ ){
		N* p = ( N* )malloc( sizeof( N ) );
		if( !p ) break;
		p->num = arr[i];
		p->p_next = NULL;
		p_node->p_next = p;
		p_node = p;
	}
	return p_head;
}

void print_linklist( N* p_head ){
	N* p_node = p_head->p_next;
	while( p_node != NULL ){
		printf( "%d\n", p_node->num );
		p_node = p_node->p_next;
	}
}

N* concat_linklist( N* p1, N* p2 ) {
	N* p_node = p1;
	while( p_node->p_next != NULL) {
		p_node = p_node->p_next;
	}
	p_node->p_next = p2;
	return p1;
}

int main( void ) {
	int arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int arr2[4] = { 1, 2, 3, 4 };
	N* p_head1 = build_link_list( arr, 10 );
	N* p_head2 = build_link_list( arr2, 4 );
	//print_linklist( p_head1 );
	p_head1 = concat_linklist( p_head1, p_head2 );
	print_linklist( p_head1 );
	return 0;
}
