#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define full 10001

int *stack;
int top=0;
int size=0;

void push(int);
int pop();
int empty();
int ftop();

int sw(char *op){
  char list[5][6]={"push","pop","size","empty","top"};
  for(int i=0;i<5;i++){
    if(strcmp(op,list[i])==0)return i;
  }
return -1;
}


int main(void){
  char op[6];

  int X=0;
  int n=0;
  int result=0;

  stack = (int *)malloc(sizeof(int)*full);
  stack[0]=-1;

  scanf("%d",&n );

  for(int i=0;i<n;i++){

    scanf("%s",op);
    if(strcmp(op,"push")==0)scanf("%d",&X );

    switch (sw(op)) {
      case 0:
        push(X);
        break;
      case 1:
        result=pop();
        printf("%d\n",result );
        break;
      case 2:
        result=size;
        printf("%d\n",result );
        break;
      case 3:
        result=empty();
        printf("%d\n",result );
        break;
      case 4:
        result=ftop();
        printf("%d\n",result );


    }


  }

  free(stack);

}
void push(int x){
  stack[++top]=x;
  size++;
}
int pop(){
  if(top==0)return -1;
  int temp=stack[top];
  top--;
  size--;
  return temp;
}
int empty(){
  if(top==0){
    return -1;
  }
  else{
    return 0;
  }
}
int ftop(){
  if(top==0)return -1;
  else return stack[top];
}
