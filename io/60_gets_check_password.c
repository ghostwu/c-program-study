#include <stdio.h>
#include <string.h>

int main( void ) {
	
	char username[256];
	printf( "pls input user name:" );
	gets( username );

	char password1[256];
	printf( "pls input your password:" );
	gets( password1 );

	char password2[256];
	printf( "pls input your password again:" );
	gets( password2 );

	if( strcmp( password1, password2 ) == 0 ) {
		printf( "password confirmed OK!\n" );
	}else{
		printf( "password confirmed error, you input different password!\n" );
	}
	
	return 0;
}
