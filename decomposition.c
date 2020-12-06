#include<stdio.h>

int digitSum(int a){
  int sum=0;
  while(a!=0){
    sum += (a%10);
    a/=10;
  }
  return sum;
}


int main(void){
  int N=0;
  int temp=0;
  int result=0;

  scanf("%d",&N);

  for(int i=9;i<N;i++){
    temp=i+digitSum(i);
    if(temp==N){
      result=i;
      break;
    }

  }

  printf("%d\n",result );


  return 0;
}
