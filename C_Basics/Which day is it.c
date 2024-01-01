#include<stdio.h>
int total();
//Vasavi College of engineering
//1602-19-734-004
//E.E.E.
void main()
{
int d,m,y,j,c=0,e,f,a;
printf("Enter any year(0000-10000) ");
scanf("%d",&y);
printf("Enter any month(1-12) ");
scanf("%d",&m);
printf("Enter any date(1-31) ");
scanf("%d",&d);
for(j=0;j<y;j++)
{
if(j%4==0)
c=c+366;
else
c=c+365;
}
e=total(d,m,y);
f=(e+c+5)%7;
if(f==0)
printf("Saturday");
else if(f==1)
printf("Sunday");
else if(f==2)
printf("Monday");
else if(f==3)
printf("Tuesday");
else if(f==4)
printf("Wednesday");
else if(f==5)
printf("Thursday");
else
printf("Friday");
}
int total(int d, int m,int y)
{
int t;
if(m==1)
t=d;
else if(m==2)
t=31+d;
else if(m==3)
t=59+d;
else if(m==4)
t=90+d;
else if(m==5)
t=120+d;
else if(m==6)
t=151+d;
else if(m==7)
t=181+d;
else if(m==8)
t=212+d;
else if(m==9)
t=243+d;
else if(m==10)
t=273+d;
else if(m==11)
t=304+d;
else if(m==12)
t=334+d;
if((y%4==0)&&(m>2))
t=t+1;
return t;
}