# include <stdio.h>
# include <stdlib.h>

typedef struct _node {
  struct _node *rChild;
  struct _node *lChild;
  char *y;
} node;


int main(){
  node *root;

  char *holder = (char *) malloc(sizeof(char));
  
  
  //holder = (char *) "ayyy";

  root = (node *) malloc(sizeof(node)); 
  root->y = (char *) malloc(sizeof(char)*limit);
  //root -> y = holder;

  char c;
  char limit = 100;
  
  while(((c = getchar()) != EOF) && (limit != 0)){
    root->y = c;
    root++;
  }
  


  
  printf("%s\n", root->y);
  
  return 0;
 
}
