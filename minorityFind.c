#include<stdio.h>

int main(void){
  int N=0;
  int arr[100]={0,};
  int count=0;
  int temp=0;


  scanf("%d",&N );

  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<N;i++){
    temp=0;
    for(int j=1;j<1000;j++){
      if(arr[i]%j==0)temp++;
      if(temp>2)break;

    }
    if(temp==2)count++;


  }

  printf("%d\n",count );



  return 0;
}
