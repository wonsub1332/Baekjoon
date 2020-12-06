#include<stdio.h>


int main(void){
  int X=0;
  int a=1,b=1;
  int count=1;

  int index=0;
  int loop=0;

  scanf("%d",&X );

  while (1){
    loop++;//몇번 도는지

    if(X==count)break; // 1

    count++;
    loop++;

    if(X==count){      //2
      a=1; b++;
      break;
    }
    count+=4;           //  +4

    printf("count = %d loop = %d\n",count ,loop);

    if(X<count){
      index= count-X;
      b=loop;
      for(int i=0;i<index;i++){
        a++;b--;

      }
      break;
    }



  }

  printf("%d/%d\n",a,b );






  return 0;
}
