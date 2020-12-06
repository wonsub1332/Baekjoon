#include<stdio.h>

int main(void){
  int N=0,M=0;
  int card[100]={0,};
  int max=0;

  scanf("%d %d",&N, &M );

  for(int i=0;i<N;i++){
    scanf("%d",&card[i]);
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      for(int h=0;h<N;h++){
        if(i==j||j==h||i==h)continue;
        if((card[i]+card[j]+card[h])<=M &&(card[i]+card[j]+card[h]) > max){
          max=(card[i]+card[j]+card[h]);
        }

      }
    }
  }

printf("%d\n",max);



  return 0;
}
