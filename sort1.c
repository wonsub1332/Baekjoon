#include<stdio.h>

int main(void){
  int N=0;
  int arr[1000]={0,};
  int temp=0;
  int minIndex=0;

  scanf("%d",&N );

  for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<N-1;i++){
    minIndex=i;

    for(int j=i+1;j<N;j++){
      if(arr[minIndex]>arr[j])minIndex=j;
    }
    temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;

  }


for(int i=0;i<N;i++){
  printf("%d\n",arr[i] );
}



  return 0;
}
