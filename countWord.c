#include <stdio.h>

int main(void){
  char S[1000001]={0,};
  int cnt=1,i=0;

  fgets(S,sizeof(char)*1000001,stdin);

  if(S[i]==' ')i++;
  while (S[i]!='\0') {
    if(S[i]==' ')cnt++;
    i++;
  }
  if(S[i-1]==' ')cnt--;


  printf("%d\n",cnt);


  return 0;
}
