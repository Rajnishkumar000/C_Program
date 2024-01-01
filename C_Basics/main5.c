#include  <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  l:
  printf("we are inside label\n");
  goto l;
 
  end:
    printf("we are at end");
    return 0;
  return 0;
}
