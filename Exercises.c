#include <stdio.h>
/*name of file is exercises.c */
int main(){
  int c, nl, tab, backSpace, backSlash;
  nl = tab = backSpace = backSlash = 0;
  
  while((c = getchar()) != EOF){
    if(c == '\n')
      ++nl;
    else if(c == '\t')
      ++tab;
    else if(c == '\b')
      ++backSpace;
    else if(c == '\\')
      ++backSlash;
    }
  printf("%d %d %d %d\n", nl, tab, backSpace, backSlash);
}
