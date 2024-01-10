

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
	
	char str1[] = "Rajnish-Kumar";
	char* token1;
	char* rest1 = str1;
	token1=strtok_r(str1,"-",&rest1);

	while(token!=NULL)
	{
		printf("%s %s\n", token,token1);
		token= strtok_r(rest, " ", &rest);
		token1= strtok_r(rest1, " ", &rest1);
// 		printf(" rest is %s\n",rest);
	}

	return (0);
}
