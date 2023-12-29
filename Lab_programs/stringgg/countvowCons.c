#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the String\n");
    fgets(str, 100, stdin);
    count(str);
}
void count(char str[100])
{
    int vowel = 0;
    int conso = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
        {

            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i')
                vowel += 1;

            else
                conso += 1;
        }
    }
    printf("no of Vowel letter is %d \n", vowel);
    printf("no of Consonants letter is %d \n", conso);
}
