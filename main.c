#include <stdio.h>
#include <string.h>
int main()
{
	char password[20] = "human";
	char password2[20]= "daniel";
	printf( "Hello world!\n" );
	printf( "Enter your password:" );
	char user_input[20];
	gets(user_input);
	
	if( strcmp( user_input, password ) == 0) { 
		printf("The password is correct!"); //input is compared with human
	}

	
 	else if(strcmp(user_input,password2)== 0){
		printf("The password is correct"); //input is compared with daniel
	}
	
	else{
		printf("Wrong password"); //the password entered is not human or daniel
	}
	
	return 0;
}
