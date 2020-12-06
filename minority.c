#include<stdio.h>

int main(void){
  int N=0,M=0;
  int arr[100]={0,};
  int temp=0;

  int sum=0;
  int min=100000;


  scanf("%d",&M );
  scanf("%d",&N );


  for(int i=M;i<=N;i++){
    temp=0;
    for(int j=1;j<10000;j++){
      if(i%j==0)temp++;
      if(temp>2)break;

    }
    if(temp==2){
      if(i<min){min=i;}
      sum += i;


    }


  }
  if(sum==0){
      printf("-1\n");
  }else{

  printf("%d\n%d\n",sum,min);
}


  return 0;
}
