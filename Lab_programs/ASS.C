#include <stdio.h>
int main()
{
    char text[100]="Programming with c cab be a challenging creative activity12345678901234567890";
     printf("%s\n",text);
     printf("%18s\n",text);
     printf("%.18s\n",text);
     printf("%18.9s\n",text);
     printf("%-18.7s\n",text);
}