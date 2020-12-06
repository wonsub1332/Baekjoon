#include <stdio.h>
#define N 10

int main(void){
  int arr[10]={1,2,3,5,5,6,7,8,9,10};
  int temp=arr[0];
  int cnt=1;
  int tempCount=0;
  int maxC,maxI;

  int tmp;

  for(int i=1;i<N;i++){

    if(temp==arr[i]){
      cnt++;
      maxC=cnt;
      maxI=i;
    }
    else{
      cnt=1;
      tmp=maxC;

      if(tmp==maxC)break;

    }
    temp=arr[i];

  }


  printf("tmpC=%d index=%d arr=%d",tempCount,maxI,arr[maxI]);


  return 0;
}
