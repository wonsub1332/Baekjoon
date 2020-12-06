#include<stdio.h>


int main(void){
  long long n=0;
  int x=2,y=7;
  int count=1;
  int b1=6,b2=12;

  scanf("%d",&n );

  while(1){
    if(n==1)break;
    count++;
    if(x<=n && n<=y)break;

    x+=b1; y+=b2;

    b1+=6; b2+=6;


  }
  printf("%d\n", count);


  return 0;
}
