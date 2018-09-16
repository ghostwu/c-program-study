/*
 * 通过指针连接结构体
 */

#include <stdio.h>

typedef struct score {
	int id;
	int math;
	int english;
	int computer;
	struct score *next;
}SCORE;

int main( void ) {
	
	SCORE first, second;

	first.id = 1;
	first.math = 20;
	first.english = 30;
	first.computer = 40;
	first.next = NULL;

	second.id = 2;
	second.math = 30;
	second.english = 40;
	second.computer = 50;
	second.next = NULL;	

	first.next = &second;

	SCORE *head = &first;

	while( head != NULL ) {
		printf( "%d\t%d\t%d\t%d\t\n", head->id, head->math,
				head->english, head->computer );
		head = head->next;
	}

	return 0;
}
