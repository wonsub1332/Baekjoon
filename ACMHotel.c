#include<stdio.h>

int main(void){
  int T;
  int H,W,N;
  int h,w;

  scanf("%d",&N );

  for(int i=0;i<N;i++){
    scanf("%d %d %d",&H,&W,&T );
    if(T%H==0)h=H;
    else h=T%H;
    w=T/H+1;
    printf("%d%02d\n",h,w );
  }


  return 0;
}
