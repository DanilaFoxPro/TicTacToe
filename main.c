#include <stdio.h>
#include<string.h>
int main()
{
	char password[20] = "human";
	char pass[20];
	printf( "Hello world!\n" );
	printf("enter your password: ");
	gets(pass);
	if(strcmp ( password, pass)==0)
	{
		printf("the password is correct");
	}
	else
	{
		printf("wrong password");
	}
	return 0;
}
