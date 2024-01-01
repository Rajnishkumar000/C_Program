//★Designed by Atul Chourasiya

//★Insta/dcoder @atulchourasiyaa

//★This code can print whole class marksheet 

//★Please dont try to print more than 3 marksheet for better performance
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=0;
int input();
char uprcase(char s[]); 
struct roll
{
    int  roll[10];
    int  addno[6];
    char name[25];
    char fname[25];
    char mname[25];
    int  dob[12];
    int  contact[13];
    int  marks[3][6];
};
int main()
{ int h; 
  char sname[50];
  char cdate[12];
  char tname[25];
  printf("HOW MANY MARKSHEET YOU WANT TO PRINT :");
  B:;
  h=input();
  if(h==0)
  {
    printf("[INVALID INPUT!(ENTER A NUMBER BETWEEN 1 TO 100)]\n");
    goto B;
  }
  while(getchar()!='\n');
  
  printf("\n");    
  for(int i=0;i<42;i++)
  printf("★");
  //ONE TIME OUTPUT
  printf("\n\nENTER SCHOOL NAME :");
  fgets(sname,sizeof(sname),stdin);
  uprcase(sname);
  printf("ENTER CURRENT DATE[dd/mm/yyyy] :");
  fgets(cdate,sizeof(cdate),stdin);
  uprcase(cdate);
  strtok(cdate,"\n");
  printf("ENTER TEACHER NAME :");
  fgets(tname,sizeof(tname),stdin);
  uprcase(tname); 
  printf("\n");  
  for(int i=0;i<42;i++)
  printf("★");
  
  for(int n=0;n<h;n++)
  {
    printf("\nMARKSHEET NO: %d",n+1);
   struct roll R;
    // INFORMATION INPUT
    printf("\n\nENTER A ROLL NO :");
    fgets(R.roll,sizeof(R.roll),stdin);
    uprcase(R.roll);
    printf("ENTER A ADDMISSION NO :");
    fgets(R.addno,sizeof(R.addno),stdin);
    uprcase(R.addno);
    printf("ENTER A NAME OF STUDENT :");
    fgets(R.name,sizeof(R.name),stdin);
    uprcase(R.name);
    printf("ENTER A NAME OF FATHER :");
    fgets(R.fname,sizeof(R.fname),stdin);
    uprcase(R.fname);
    printf("ENTER A NAME OF MOTHER :");
    fgets(R.mname,sizeof(R.mname),stdin);
    uprcase(R.mname);
    printf("ENTER A DATE OF BIRTH[dd/mm/yyyy] :");
    fgets(R.dob,sizeof(R.dob),stdin);
    uprcase(R.dob);
    printf("ENTER A CONTACT NUMBER :");
    fgets(R.contact,sizeof(R.contact),stdin);
    uprcase(R.contact);  
    //MARKS INPUT
    for(int k=0; k<3; k++)
    {
        if(k==0)
            printf("\n◆◆◆◆◆◆◆[ ENTER MARKS OF TERM 1 ]◆◆◆◆◆◆◆\n");
        else if (k==1)
            printf("\n◆◆◆◆◆◆◆[ ENTER MARKS OF TERM 2 ]◆◆◆◆◆◆◆\n");
        else if(k==2)
            printf("\n◆◆◆◆◆◆◆[ ENTER MARKS OF TERM 3 ]◆◆◆◆◆◆◆\n");
        for(int l=0; l<6; l++)
        {
            if(l==0)
             {  printf("\nENTER ENGLISH MARKS OUT OF 100 :\n");
                R.marks[k][l]=input();
             }
            else if(l==1)
            {  printf("\nENTER HINDI MARKS OUT OF 100 :\n");
                R.marks[k][l]=input();
            }
            else if(l==2)
           {  printf("\nENTER SANSKRIT MARKS OUT OF 100 :\n");
                R.marks[k][l]=input();
           }
            else if(l==3)
           {  printf("\nENTER MATHS MARKS OUT OF 100 :\n");
                R.marks[k][l]=input();
           }
            else if(l==4)
            {  printf("\nENTER S.SCIENCE MARKS OUT OF 100 :\n");
                R.marks[k][l]=input();
            }
            else if(l==5)
            {  printf("\nENTER SCIENCE MARKS OUT OF 100 :\n");
                R.marks[k][l]=input();
            }

        }

    }
printf("\n\n\n\n");    
for(int i=0;i<42;i++)
printf("★");
printf("\n\n");
int sl;
sl=strlen(sname);
printf("       %s",sname);
printf("       ");
for(int v=0;v<(sl-1);v++)
{printf("¯");}

printf("\n\nROLL NO.       :%s",R.roll);
printf("ADD NO.        :%s",R.addno);
printf("NAME           :%s",R.name);
printf("FATHER'S NAME  :%s",R.fname);
printf("MOTHER'S NAME  :%s",R.mname);
printf("DATE OF BIRTH  :%s",R.dob);
printf("CONTACT NO.    :%s",R.contact);
//MARKSHEET OUTPUT
char p='%';
int total1=R.marks[0][0]+R.marks[0][1]+R.marks[0][2]+R.marks[0][3]+R.marks[0][4]+R.marks[0][5];
int total2=R.marks[1][0]+R.marks[1][1]+R.marks[1][2]+R.marks[1][3]+R.marks[1][4]+R.marks[1][5];
int total3=R.marks[2][0]+R.marks[2][1]+R.marks[2][2]+R.marks[2][3]+R.marks[2][4]+R.marks[2][5];
char g1[10];
char g2[10];
char g3[10];

if((total1/6)>=90)
{
  strcpy(g1,"A+[PASS]");
}
else if((total1/6)<90 && (total1/6)>=80)
{
  strcpy(g1,"A[PASS]");
}
else if((total1/6)<80 && (total1/6)>=75)
{
  strcpy(g1,"B[PASS]");
}
else if((total1/6)<75 && (total1/6)>=60)
{
  strcpy(g1,"C[PASS]");
}
else if((total1/6)<60 && (total1/6)>=33)
{
  strcpy(g1,"D[PASS]");
}
else if((total1/6)<33)
{
  strcpy(g1,"F[FAIL]");
}

if((total2/6)>=90)
{
  strcpy(g2,"A+[PASS]");
}
else if((total2/6)<90 && (total2/6)>=80)
{
  strcpy(g2,"A[PASS]");
}
else if((total2/6)<80 && (total2/6)>=75)
{
  strcpy(g2,"B[PASS]");
}
else if((total2/6)<75 && (total2/6)>=60)
{
  strcpy(g2,"C[PASS]");
}
else if((total2/6)<60 && (total2/6)>=33)
{
  strcpy(g2,"D[PASS]");
}
else if((total2/6)<33)
{
  strcpy(g2,"F[FAIL]");
}

if((total3/6)>=90)
{
  strcpy(g3,"A+[PASS]");
}
else if((total3/6)<90 && (total3/6)>=80)
{
  strcpy(g3,"A[PASS]");
}
else if((total3/6)<80 && (total3/6)>=75)
{
  strcpy(g3,"B[PASS]");
}
else if((total3/6)<75 && (total3/6)>=60)
{
  strcpy(g3,"C[PASS]");
}
else if((total3/6)<60 && (total3/6)>=33)
{
  strcpy(g3,"D[PASS]");
}
else if((total1/6)<33)
{
  strcpy(g3,"F[FAIL]");
}

//MARKSHEET TABLE

printf("\n┏");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("┓\n");
printf("| SUBJECT   | MAX/MIN  | TERM 1 | TERM 2 | TERM 3 |");
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| ENGLISH   |  100/33  |  %3d   |  %3d   |  %3d   |",R.marks[0][0],R.marks[1][0],R.marks[2][0]);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| HINDI     | 100/33   |  %3d   |  %3d   |  %3d   |",R.marks[0][1],R.marks[1][1],R.marks[2][1]);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| SANSKRIT  | 100/33   |  %3d   |  %3d   |  %3d   |",R.marks[0][2],R.marks[1][2],R.marks[2][2]);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| MATHS     | 100/33   |  %3d   |  %3d   |  %3d   |",R.marks[0][3],R.marks[1][3],R.marks[2][3]);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| S.SCIENCE | 100/33   |  %3d   |  %3d   |  %3d   |",R.marks[0][4],R.marks[1][4],R.marks[2][4]);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| SCIENCE   | 100/33   |  %3d   |  %3d   |  %3d   |",R.marks[0][5],R.marks[1][5],R.marks[2][5]);
printf("\n┗");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("┛\n┏");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("┓\n");
printf("| TOTAL     | 600      |  %3d   |  %3d   |  %3d   |",total1,total2,total3);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");
printf("| PERCENT   | 100%c     |  %3d%c  |  %3d%c  | %3d%c   |",p,total1/6,p,total2/6,p,total3/6,p);
printf("\n|");
for(int i=0;i<49;i++)
{
  printf("—");
}
printf("|\n");

printf("| GRADE     |  -       |%8s|%8s|%8s|",g1,g2,g3);

printf("\n┗");
for(int i=0;i<49;i++)
{
  printf("—");
} 
printf("┛\n\n");
printf("DATE                            TEACHER'S SIGNATURE\n");
printf("%s                      %s",cdate,tname);
printf("\n");    
for(int i=0;i<42;i++)
printf("★");
while(getchar()!='\n');
}
}
//FUNCTION THAT PRINT ONLY INTEGER OUTPUT
int input()
{
    char ch[8];
    A:;
    int num=0; 
    scanf("%s",&ch);
    int l=strlen(ch);
    for(int i=0;i<l;i++)
    {
      if(ch[i]<48||ch[i]>58)
    {
      printf("[INVALID INPUT!(ENTER A NUMBER BELOW 100)]\n");
      goto A;
    }
    else
    {
      num= num*10+(ch[i]-48);
    }
    if(num<0||num>100)
    {
      printf("[INVALID INPUT!(ENTER A NUMBER BELOW 100)]\n");
      goto A;
    }
    }
    return num;
} 
//FUNCTION FOR UPPER CASE
char uprcase(char s[])    
{
int n=strlen(s);
for(int i=0;i<n;i++)
{
if(s[i]>96&&s[i]<123)
s[i]-=32;
}
}


