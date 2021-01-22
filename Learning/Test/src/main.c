/* intercommunication between functions using pointers and return values.
Passing of values with integer or character type using pointers.
conversion from integer/character type to pointer or pointer to integer/character type.
for loops (done)
Print the contents of a 'string' as numbers.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char string[10];
	char *p = string; //declaring char pointer
	printf("enter string  \n");
	scanf("%s", p); //string input 

	for(i=0;string[i]!=0;i++) //string last charcter is 0 so...
	{
printf("The Character at %d Index Position = %c \n\n", i, string[i]); //printing every character 
printf("The memory at which %c is stored is %p \n\n",string[i], (void*)(&string[i]));//%p is for printing pointer addressprovided it is of void poniter type
//printf("The memory at which %c is stored is %i \n\n",string[i], (int)(&string[i])); //integer type to character pointer
    }
    return 0;
}
