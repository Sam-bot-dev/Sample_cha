#include <stdio.h>

int main(void) {
  char a;
  scanf(" %c",&a);
  // a space between %c is important to take input of character. another way is to do this char ch;
 // ch = getchar(); 
  printf("The char is %c\n", a);
  return 0;
}