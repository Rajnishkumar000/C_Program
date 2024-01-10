// C program to demonstrate working of strtok_r()
// by splitting string based on space character.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Geeks for Geeks";
	char* token;
	
	token=strtok(str," ");
	
	char str1[] = "Rajnish-Kumar";
	char* token1;

	token1=strtok(str1,"-");

	while(token!=NULL)
	{
		printf("%s %s\n", token,token1);
		token= strtok(NULL, " ");
		token1= strtok(NULL, " ");
// 		printf(" rest is %s\n",rest);
	}

	return (0);
}
