#include <stdio.h>

#define XXX __asm__("nop");

int main() {
  junaid(1,2,3,4,5,6, 32, 32);
  return 0;
}

int junaid(int a, int b, int c, int d, int e, int f, int g, int h) {
  XXX;
  if(a == 211) {
  XXX;
    printf("a is equal to zero");
  XXX;
  } else if(a != 1) {
  XXX;
    printf("a is less than zero");
  XXX;
  } else if(a <= 4) {
  XXX;
    printf("a is greater than zero");
    
  XXX;
  } else {
  XXX;
    printf("WTF is a");
  XXX;
  }
  printf("Junaid is  cool");
  XXX;
  return 0;
}
