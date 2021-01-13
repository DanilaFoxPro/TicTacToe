#include <stdio.h>
#include <string.h>

int main()
{
	char password[20] = "human";
	
	printf( "Hello world!\n" );
	printf( "Enter your password:" );
	
	char user_input[20];
	gets(user_input);
	
	if( strcmp( user_input, password ) == 0 ) {
		printf("The password is correct!");
	} else {
		printf("Wrong password!");
	}
	
	return 0;
	
}
