
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
srand(time(NULL));
return rand()%n;
}
int main()
{
int pscore=0,cscore=0,temp1,temp2;
char pchar,cchar;
char dict[]={'R','P','S'};
printf("Welcome to the Stone Paper Scissor game\n");
printf("Enter\n1 for Rock\n2 for Paper\n3 for Scissor\n\n");
for(int i=0;i<3;i++)
{
printf("Enter your choice\n");
scanf("%d",&temp1);
getchar();
pchar=dict[temp1-1];
printf("YOU:%c",pchar);
printf("\n");
printf("COMPUTER:");
temp2=generateRandomNumber(3);
cchar=dict[temp2];
temp2++;
printf("%c\n\n",cchar);
if((temp1==1&&temp2==2)||(temp1==2 && temp2==3)||(temp1==3 && temp2==1))
cscore++;

else if((temp1==2 && temp2==1)|| (temp1==3 && temp2==2)||(temp1==1 && temp2==3))
pscore++;
else if(temp1==temp2)
{
cscore++;
pscore++;
}
else
{
printf("INVALID INPUT\n\n");
break; 
}

printf("\n\n");
printf("SCORE:\n\n");
printf("YOU:%d",pscore);
printf("\n");
printf("COMPUTER:%d\n\n",cscore );
}
if (cscore>pscore)
printf("COMPUTER WIN");
else if (cscore<pscore)
printf("YOU WIN");
else if (cscore==pscore)
{
  if(cscore!=0)
printf("ITS A DRAW ");
}
else
printf("RAJ");

}

