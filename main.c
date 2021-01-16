#include<stdio.h>
#include <string.h>
int operation( char* user_input, char* swing, char* stab,char* shield )
{
     if(strcmp(user_input,swing)==0){ //if input is swing, the function returns 1
     	return 1;
	 }
	 else if (strcmp(user_input,stab)==0){ //if input is stab, the function returns 2
	 	return 2;
	 }
	 else if (strcmp(user_input,shield)==0){ //if input is shield, the function returns 3
	 	return 3;
	 }
	 else{ //if input is any random alphabet or number, the function returns 0
	 	return 0;
	 }
}

int main()
{
	
	int health = 100;
	char swing[]= "swing";
	char stab[] = "stab";
	char shield[] = "shield";
	printf( "Hello world!\n" );
	printf( " WELCOME TO SSS GAME" );
	printf("The barrels health is initially 100, you win when the barrels health falls to zero. \n");
	printf("Keep attacking!!\n");
		printf("You can perform the following actions \n 1. Swing \t 2. Stab \t 3. Shield \n");

	
	char user_input[8];
	gets(user_input); 
	int i;
	//operation(user_input,swing,stab,shield);
	//printf("return value of function is %d\n", operation( user_input, swing,  stab, shield ));
	while(i<2)
	{
		
    if(operation(user_input, swing ,stab,shield)){ //user input is compared with swing 
	printf("health falls by 5 percent \n");
	health = health - (health*0.05); //need to fix this
	printf("health of barrel is %d \n",health); 
		}
		
	
 	else if(operation(user_input,swing,stab,shield)){ //input is compared with stab
 		printf("health falls by 20 percent");
 		health = health - (health*0.2); //need to fix this
 		printf("health of the barrel is %d \n",health);
	}
	
	else if (operation(user_input,swing,stab,shield)){ //input is compared with shield
		printf("You are protected, health remains same \n Health of the barrel is %d \n", health);
	
	}
	else{
		printf("Enter valid attack option \n"); //to print when proper option is not entered
	}
	i++;
}
}
	

