#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
/*
 * 定时器
 */

void signalHandler( int signo ){
	switch( signo ) {
		case SIGALRM:
			printf( "接收到信号\n" );
			break;
	}
}

int main( void ) {
	signal( SIGALRM, signalHandler );
	struct itimerval new_value, old_value;

	//3秒定时发出信号
	new_value.it_interval.tv_sec = 3;	
	new_value.it_interval.tv_usec = 0;

	//在1us的时间后触发信号
	new_value.it_value.tv_sec = 0;
	new_value.it_value.tv_usec = 1;
	setitimer( ITIMER_REAL, &new_value, &old_value );
	while( 1 );

	return 0;
}



