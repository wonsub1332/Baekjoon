#include<stdio.h>


int main(void){
  int N=0;
  int arr[50][3]={0,};
  int count=0;

  scanf("%d",&N );
  for(int i=0;i<N;i++){
    scanf("%d %d" , &arr[i][0],&arr[i][1] );
  }

  for(int i=0;i<N;i++){
    count=0;
    for(int j=0;j<N;j++){
      if(arr[i][0]<arr[j][0]&&arr[i][1]<arr[j][1])
        count++;
    }
    arr[i][2]=count+1;
  }

  for(int i=0; i<N;i++){
    printf("%d ",arr[i][2] );
  }


  return 0;
}
