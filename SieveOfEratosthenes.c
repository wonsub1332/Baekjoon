#include<stdio.h>
#include<math.h>

#define size 1000001

int num[size]={0,};

int main(void){
  int M,N,i,j;
  int tmp=0;

  for(i=2;i<size;i++)
    num[i]=i;

  scanf("%d %d",&M,&N);
  tmp=(int)sqrt(N);

  for(i=2;i<=tmp;i++){
    if(num[i]==0)
      continue;
    else{
        for(j=i+1;j<=N;j++){
          if(num[j]==0)
            continue;
          if(num[j]%i==0)
            num[j]=0;
        }
    }
  }
  for(i=M;i<=N;i++){
    if(num[i]!=0)
      printf("%d\n",i);
  }



  return 0;
}
