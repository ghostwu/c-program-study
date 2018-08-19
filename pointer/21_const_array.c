#include <stdio.h>
#define N 5

double sum( const double* p_arr, int n );
void deal_array( double p_arr[], int n, double val );
void show_array( double* p_arr, int n );

int main( void ) {
	double arr[N] = { 10, 20, 30, 40, 50 };
	printf( "sum=%.2lf\n", sum( arr, 5 ) );
	show_array( arr, 5 );
	deal_array( arr, 5, 2.0 );
	show_array( arr, 5 );
	return 0;
}

void show_array( double* p_arr, int n ){
	for( int i = 0; i < n; i++ ){
		printf( "%.2lf\t", *( p_arr + i ) );
	}
	putchar( '\n' );
}

double sum( const double* p_arr, int n ){
	double total = 0;
	for( int i = 0; i < n; i++ ){
		total += *( p_arr + i );
	}
	return total;
}

void deal_array( double p_arr[], int n , double val ) {
	for( int i = 0; i < n; i++ ){
		p_arr[i] *= val;
	}
}

