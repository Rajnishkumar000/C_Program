// C program to demonstrate working of strtok_r()
// by splitting string based on space character.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Geeks for Geeks";
	char* token;
	char* rest = str;
	token=strtok_r(str," ",&rest);

	while(token!=NULL)
	{
		printf("%s\n", token);
		token= strtok_r(NULL, " ", &rest);
	}

	return (0);
}