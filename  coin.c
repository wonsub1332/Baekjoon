#include<stdio.h>

int main(void){
  int N=0,K=0; //N은 동전 종류 K는 만들려는 금액

  int list[10]={0,};
  int cnt=0;

  scanf("%d %d",&N,&K );
  for(int i=0;i<10;i++){
    scanf("%d",&list[i]);
  }

  for(int i=9;i>=0;i--){
    while(K>list[i]){
        K -= list[i];
        cnt++;
    }
  }

  printf("%d\n",cnt );





return 0;

}
