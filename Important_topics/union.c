// union abc{  
// int a;  
// char b;  
// double d;  
// float c;  

// };  
// int main()  
// {  
//   printf("Size of union abc is %d", sizeof(union abc));  
//   return 0;  
// }  

union abc  
{  
// int a;  
char b; 
// int c;  
// double d;
}var;  
int main()  
{  
  // var.a = 66; 
  // var.b='a';
  var.b=-149.7;//decimal me rotation nahi hoga
  //Rotation will be from -128 to 127
  
  // printf("\n a = %d", var.a);  
  printf("\n b = %d", var.b);  
  // printf("\n c = %d", var.c);  
  // printf("\n d = %d", var.d);  
  // printf("\n d = %c", var.b); //follows max ascii and check format
}   