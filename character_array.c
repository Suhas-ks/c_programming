#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{	
	char name[50];
	char init;
	printf("enter you name: ");
	scanf("%s",name);
	printf("\nWelcome %s. Please enter your initial: ",name);
	// once enter key is pressed that itself will be read as character in the next character reading scanf
	// so put a space before the scanf that reads the character so that the problem of it not being read appropriately will be fixed
	scanf(" %c",&init); 
	printf("\nyour initial is %c",init);
	return 0;
}