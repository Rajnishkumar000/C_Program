//Q1// int bytescount(char *s){
// char *p=s;
// while(*p!='\0')
// {
// p++;
// }
// return p-s;
// } 
// int main()
// {
//     int bc=bytescount("COVID-19 Is Still Active");
//     printf("%d",bc);
//     return 0;
// }

// Q2int countchar(char *s){
// int n;
// for(n=0; *s!='\0'; s++){
// n++;
// }
// return n;
// } 

//  int main()
// {
//     int bc=countchar("COVID-19 Is Still Active");
//     printf("%d",bc);
//     return 0;
// }

int main()
{
char *amsg="I am in 5th Sem CSE"; 
    printf("%c\n",amsg[0]);
    printf("%s\n",amsg);
    printf("%d\n",amsg);

}
