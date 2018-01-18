# include <stdio.h>

int main(){
  printf("Do you want to play a game? (y/n)\n");
  
  int c;
  int p;
  while((c = getchar()) != EOF){
    if(c == 'y' || c  == 'Y'){
      putchar(c);
      printf("\n");
      p = c;
    }
  }

  if(p == 'y')
    printf("%c\n", p);
  else
    printf("moron\n");
  
  return 0;
}
