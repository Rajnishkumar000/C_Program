// C program to demonstrate working of strtok_r()
// by splitting string based on space character.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Geeks for Geeks";
	char* token;
	char* rest;

	while ((token = strtok_r(str, " ", &rest)))
		printf("%s\n", token);

	return (0);
}
