// union abc{  
// int a;  
// char b;  
// float c;  
// double d;  
// };  
// int main()  
// {  
//   printf("Size of union abc is %d", sizeof(union abc));  
//   return 0;  
// }  

union abc  
{  
int a;  
char b; 
int c;  
double d;
}var;  
int main()  
{  
  var.b=68.9;
  var.a = 66; 
  
  printf("\n a = %d", var.a);  
  printf("\n b = %d", var.b);  
  printf("\n c = %d", var.c);  
  printf("\n d = %d", var.d);  
}   