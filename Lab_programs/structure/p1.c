
typedef struct structureMy {
  int num;
  char ch;
  char ch1[20];
}st;

int main() {
 
  st s;
  s.num = 13;
  s.ch = 'B';
  s.ch1 ="RajnishKumar";

 
  printf("My number: %d\n", s.num);
  printf("My letter: %c\n", s.ch);
  printf("My name: %s\n", s.ch1);

  return 0;
}