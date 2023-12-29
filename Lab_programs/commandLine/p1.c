#include<stdio.h>
int main(int argc,char* argv[0])
{
printf("%d\n",argc);
printf("%s\n",argv[0]);
printf("%ca\n",argv[1]);
printf("%ca\n",argv[-1]);
printf("%ca\n",argv[2]);
printf("%d\n",argv[4]);
printf("%d\n",sizeof(argv)/sizeof('c'));
for(int i=0;i<argc;i++)
{
    printf("%s\n",argv[i]);
}
}