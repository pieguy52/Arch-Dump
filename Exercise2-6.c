#include <stdio.h>

//Exercise2-6

unsigned getBits(unsigned x, int p, int n);

unsigned getBits(unsigned x, int p, int n){
  return (x >> (p+1-n)) & ~(~0 << n);
}



int main(){
  unsigned int x = 16;
  int p = 4;
  int n = 3;
  unsigned y, getBits(x, p, n);
  y = getBits(x, p, n);
  printf("%d \n", y);

  return 0;
}
