
#include <stdio.h>

int main(){

  unsigned int size = 12;
  char str[] = "Hello, Worms!";
  char temp;
  int i = 0;

  printf("%s\n", str);

  for( i = 0; i < size/2; i++ ){
    temp = str[i];
    str[i] = str[size - i];
    str[size - i] = temp;
  }

  printf("%s\n", str);

  return 0;
}
