#include <stdio.h>
char arr[101]={0,};

int check(){
  int list[101]={0,};
  int i=0;
  while(arr[i]!='\0'){
    list[i]=arr[i];
    i++;
  }
  for(int j=0;j<i-1;j++){

    if(list[j]==list[j+1])continue;

    for(int h=j+1;h<i;h++){

      if(list[j]==list[h]) return 0;
    }
  }
  return 1;
}


int main(void){

  int N=0;
  int cnt=0;

  scanf("%d",&N);

  for(int i=0;i<N;i++){
    scanf("%s",&arr );
    cnt+=check();

  }
  printf("%d",cnt);


  return 0;
}
