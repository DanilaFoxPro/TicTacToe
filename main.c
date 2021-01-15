#include<stdio.h>
#include<string.h>
int scompare(char* string1, char* string2)
{
	if(strcmp(string1,string2)==0){ //if string1 and string2 are equal then it returns 1 else 0
		
		return 1;
	}
	else{
		
		return 0;
	}
}
int main()
{
	char string1[] = "entry";
	char string2[] = "random";
     //scompare(string1,string2);
     printf("%d\n",     scompare(string1,string2)); //printing return value of scompare function
	if(scompare(string1,string2)  ) //comparing string1 and string2 using the above function
	{
		printf("strings are equal");
	}
	else
	
	{
		printf("strings are not equal");
	}
	
}
