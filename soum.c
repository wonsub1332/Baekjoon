#include<stdio.h>



int main(void){
  int N=0;
  int count=0;
  int num=666;
  int temp=0;

  scanf("%d",&N );

  while(count!=N){
    //if(a[i]==6 && a[i+1]==6 && a[i+2]==6){count++;}
    temp=num;
    while(temp!=0){



      if(temp%10==6){

        temp/=10;
        if(temp%10==6){

          temp/=10;
          if(temp%10==6){

            count++;
            break;
          }
        }
      }
      temp/=10;
    }
    num++;


  }
  printf("%d\n",num-1 );

  return 0;
}
