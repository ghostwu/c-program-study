/*
 * 结构体数组 冒泡排序
 */
#include <stdio.h>

struct student {
	char name[10];
	int score;
};

void swap( struct student *a, struct student *b ) {
	struct student tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubble_sort( struct student a[], int n ) {
	for( int i = 0 ; i < n ; i++ ) {
		for( int j = 0 ; j < n - i - 1 ; j++ ){
			if( a[j].score < a[j+1].score ) {
				swap( &a[j], &a[j+1] );
			}
		}
	}
}

void print_info( struct student a[], int n ) {
	for( int i = 0 ; i < n ; i++ ){
		printf( "a[%d]=%s, a[%d]=%d\n", i, a[i].name, i,  a[i].score );
	}
}

int main( void ) {
	struct student stu[5];
	for( int i = 0 ; i < 5 ; i++ ){
		scanf( "%s %d", stu[i].name, &stu[i].score );
	}
	bubble_sort( stu, 5 );
	print_info( stu, 5 );
	return 0;
}
