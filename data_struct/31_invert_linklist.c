/*
 * 链表反转
 */

#include <stdio.h>
#include <stdlib.h>
#define LEN 5

typedef struct NUMS {
	int num;
	struct NUMS *p_next;
}N;

N* create_linklist( int *a, int n ){
	N *p_head;
	N *p_node;
	p_head = ( N* )malloc( sizeof( N ) );
	if( !p_head ) return NULL;
	p_head->num = a[0];
	p_head->p_next = NULL;
		
	p_node = p_head;
	int i = 1;
	for( i = 1 ; i < n ; i++ ){
		N* p = ( N* )malloc( sizeof( N ) );
		if( !p ) break;
		p->num = a[i];
		p->p_next = NULL;
		p_node->p_next = p;
		p_node = p;
	}

	return p_head;
}

void print_linklist( N* p_head ) {
	N* p_node = p_head;
	while( p_node != NULL ){
		printf( "%d\n", p_node->num );
		p_node = p_node->p_next;
	}
}

N* invert_linklist( N* p_head ) {
	N* p_mid = NULL; //head前面的节点
	N* p_last = NULL; //mid前面的节点
	while( p_head != NULL ) {
		p_last = p_mid;
		p_mid = p_head;
		p_head = p_head->p_next;
		p_mid->p_next = p_last;
	}
	return p_mid;
}

void free_linklist( N* p_head ) {
	N* p_node;
	while( p_head != NULL ) {
		p_node = p_head;
		p_head = p_head->p_next;
		free( p_node );
	}
	p_node = NULL;
}

int main( void ) {
	int arr[LEN] = { 10, 20, 30, 40, 50 };
	N* p_head = create_linklist( arr, LEN );
	printf( "反转前\n" );
	print_linklist( p_head );
	printf( "反转后\n" );
	p_head = invert_linklist( p_head );
	print_linklist( p_head );
	free_linklist( p_head );
	return 0;
}
