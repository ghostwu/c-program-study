/*
 * 循环链表插入节点
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct NUMS {
	int num;
	struct NUMS *p_next;
}N;

N* insert_node( N* p_head, N* p_node, int value ) {
	N* p_newnode;
	N* p_prevnode;
	
	p_newnode = ( N* )malloc( sizeof( N ) );
	if( !p_newnode ) return NULL;
	p_newnode->num = value;
	p_newnode->p_next = NULL;

	if( p_head == NULL ) {
		p_newnode->p_next = p_newnode;	 //指向自身
		return p_newnode;   			//返回新节点
	}

	if( p_node == NULL ) {
		//插在第一个节点之前,且成为链表开始
		p_newnode->p_next = p_head;
		p_prevnode = p_head;
		//找最后一个节点
		while( p_prevnode->p_next != p_head ){
			//指向下一个节点
			p_prevnode = p_prevnode->p_next;
		}
		//前一个节点 指向新节点
		p_prevnode->p_next = p_newnode;
		//新节点成为头结点
		p_head = p_newnode;
	}else {
		p_newnode->p_next = p_node->p_next;
		p_node->p_next = p_newnode;
	}
	return p_head;
}

void print_linklist( N* p_head ){
	printf( "----------print begin----------\n" );
	N* p_node = p_head;
	do {
		printf( "%d\n", p_node->num );
		p_node = p_node->p_next;
		//phead->p_next 一个节点的情况
		//p_head != p_node 防止循环打印
	}while( p_head != p_node && p_head != p_head->p_next );
}

int main( void ) {
	int arr[6] = { 10, 20, 30, 40, 50, 60 };
	N* p_head = NULL;
	int i;

	p_head = insert_node( p_head, p_head, arr[0] );
	print_linklist( p_head );

	p_head = insert_node( p_head, NULL, arr[1] );
	print_linklist( p_head );

	for( i = 2 ; i < 6 ; i++ ) {
		p_head = insert_node( p_head, p_head, arr[i] );
		print_linklist( p_head );
	}

	return 0;
}
