#include <stdio.h>

char stack[512];
int top = 0;

void push( char c ) {
	stack[top++] = c;
}

char pop() {
	return stack[--top];	
}

int is_empty( void ){
	return top == 0;
}

int main( void ) {
	push( 'A' );
	push( 'B' );
	push( 'C' );
	while( !is_empty() ){
		putchar( pop() );
	}
	putchar( '\n' );
	return 0;
}
