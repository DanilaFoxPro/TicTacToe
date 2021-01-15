#include <stdio.h>
#include <string.h>
int main()
{
	int health = 100;
	char swing[]= "swing";
	char stab[] = "stab";
	char shield[] = "shield";
	printf( "Hello world!\n" );
	printf( " WELCOME TO SSS GAME" );
	printf("The barrels health is initially 100, you win when the barrels health falls to zero. \n");
	printf("You can perform the following actions \n 1. Swing \t 2. Stab \t 3. Shield \n");
	printf("Keep attacking!!");
	
	char user_input[8];
	gets(user_input);
	
    if(strcmp(user_input, swing == 0)){ //user input is compared with swing (crash)
	printf("health falls by 5% \n");
	health = health - 5%health;
	printf("health of barrel is %d \n",health); 
		}

	
 	else if(strcmp(user_input,stab)== 0){ //input is compared with stab
 		printf("health falls by 20%");
 		health = health - 20%health;
 		printf("health of the barrel is %d \n",health);
	}
	
	else if (strcmp(user_input,shield==0)){ //input is compared with shield
		printf("You are protected, health remains same \n Health of the barrel is %d \n", health);
	
	}
	else{
		printf("Enter valid attack option \n"); //to print when proper option is not entered
	}
	
	return 0;
}
