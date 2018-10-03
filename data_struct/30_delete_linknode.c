/*
 * 删除链表节点
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct NUMS {
	int num;
	struct NUMS* p_next;
}N;

N* create_linklist( int *a, int len ) {
	N* p_node;
	N* p_head = ( N* )malloc( sizeof( N ) );
	if( !p_head ) return NULL;
	p_node = p_head;

	int i = 0;
	for( i = 0 ; i < len ; i++ ){
		N* p = ( N* )malloc( sizeof( N ) );
		if( !p ) break;
		p->num = a[i];
		p->p_next = NULL;
		p_node->p_next = p;
		p_node = p;
	}
	return p_head;
}

void delete_linklist( N* p_head, int pos ) {
	N* p_node = p_head->p_next;
	N* p_before_node = p_head;
	int i = 0;
	while( p_node != NULL ){
		i++;
		if( i == pos ) break;
		p_before_node = p_node;
		p_node = p_node->p_next;
	}
	N* p_next_node = p_node->p_next;	
	p_before_node->p_next = p_next_node;
	free( p_node );
	p_node = NULL;
}

void print_linklist( N* p_head ) {
	N* p_node = p_head->p_next;
	while( p_node != NULL ){
		printf( "%d\n", p_node->num );
		p_node = p_node->p_next;
	}
}

int main( void ) {
	int arr[5] = { 10, 20, 30, 40, 50 };
	N* p_head = create_linklist( arr, 5 );
	printf( "---------before-------\n" );
	print_linklist( p_head );
	delete_linklist( p_head, 2 );
	printf( "----------after------\n" );
	print_linklist( p_head );
	return 0;
}
