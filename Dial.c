#include <stdio.h>

int dial(char a){
  if(a>90)return -1;
  else if(a>=87)return 9;
  else if(a>=84)return 8;
  else if(a>=80)return 7;
  else if(a>=77)return 6;
  else if(a>=74)return 5;
  else if(a>=71)return 4;
  else if(a>=68)return 3;
  else if(a>=65)return 2;
  else return -1;

}

int main(void){
  char word[15]={0,};
  int sum=0;
  int i=0;

  scanf("%s",word );
  while (word[i]!='\0') {
    /* code */
    sum = sum+ dial(word[i])+1;
    i++;
  }
  printf("%d",sum);






  return 0;
}
