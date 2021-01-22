/* intercommunication between functions using pointers and return values.
Passing of values with integer or character type using pointers.
conversion from integer/character type to pointer or pointer to integer/character type.
for loops (done)
Print the contents of a 'string' as numbers.
*/
#include<stdio.h>
#include<string.h>
char* useless(char a[])
{
 return a;
}
int main()
{
	char name[]= "hueh";
	char string[10];
	int value;
	int i;
	printf("enter string  \n");
	scanf("%s",&string);
	
	if(1){
		printf("woah\n\n");
	}
	
	for(i=0;string[i]!=0;i++)
	{
		
printf("The Character at %d Index Position = %c \n\n", i, string[i]);
printf("The memory at which %c is stored is %x \n\n",string[i],string[i]);
}
 printf("%s", useless("human\n"));
 for(value=4097;value>=129;	value=(value/2)+1)
 {
 	printf("%d\n", value);
 }
 printf("wkwkwk\n");
 printf("%s\n",name);
 printf("%c",name);
}
