#include<stdio.h>

void sort(int *arr,int N){
  int minIndex=0;
  int temp=0;

  for(int i=0;i<N-1;i++){
    minIndex=i;

    for(int j=i+1;j<N;j++){
      if(arr[minIndex]>arr[j])minIndex=j;
    }
    temp=arr[i];
    arr[i]=arr[minIndex];
    arr[minIndex]=temp;

  }
}

int oftenValue(int *arr,int N){
  int temp=arr[0];
  int maxC,maxI;
  int cnt=1;
  int
  for(int i=1;i<N;i++){


    if(temp==arr[i]){
      cnt++;
      maxC=cnt;
      maxI=i;
    }
    else{

      cnt=1;
    }
    temp=arr[i];

  }
  if(maxC==1) return ;

  return arr[maxI];


}



int main(void){
  int N=0;
  int arr[500000]={0,};
  float avg=0.0;
  int set=0;
  int often=0;
  int range=0;

  int min,max;
  int sum=0;

  scanf("%d",&N );

  for(int i=0;i<N;i++){
    scanf("%d",&arr[i] );
    sum += arr[i];
  }

  sort(arr,N);

  for(int i=0;i<N;i++){
    printf("%d ",arr[i] );
  }

  avg=sum/N; //1.산술평균
  min=arr[0];
  max=arr[N];
  set=arr[N/2];//2.중앙값
  range=max-min;//4.범위
  often=oftenValue(arr,N);

  printf("%.0f\n",avg);
  printf("%d\n",set );
  printf("%d\n",often );
  printf("%d\n",range );









  return 0;
}
