/*
 * 键盘输入字符,直到输入q时退出
 */
#include <stdio.h>
#include <curses.h>

int main( void ) {
	initscr();
	int c;
	while( ( c = getch() ) != 'q' ) {
	}
	endwin();
	return 0;
}
