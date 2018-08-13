#include <stdio.h>
#include <string.h>

int main ( void ) {
	int day, year;
	char weekday[32], month[32], date_str[64];
	strcpy( date_str, "Friday Feb 23 1987" );
	sscanf( date_str, "%s %s %d %d", weekday, month, &day, &year );
	printf( "%d %d %s %s\n", year, day, month, weekday );
	return 0;
}
