// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    char pres[20]="Adams, John Quincy";
    char tmp1[40];
    char tmp2[40];
   
   strncpy(tmp1, &pres[7], 4);
   printf("%s\n",tmp1);
   
   tmp1[4] = '\0';
   printf("%s\n",tmp1);
   
   strcat(tmp1, " ");
   printf("%s\n",tmp1);
   
   
   strncpy(tmp2, pres, 5);
   printf("%s\n",tmp2);
   
   tmp2[5] = '\0';
   printf("%s\n",tmp2);
   
   printf("%s\n", strcat(tmp1, tmp2)); 
    return 0;
}