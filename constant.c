#include<stdio.h>
#include<stdlib.h>

int main (void){
  char arr[2][4]={0,};
  char temp;

  int n1,n2;

  scanf("%s %s",&arr[0],&arr[1] );

    temp=arr[0][0];
    arr[0][0]=arr[0][2];
    arr[0][2]=temp;

    temp=arr[1][0];
    arr[1][0]=arr[1][2];
    arr[1][2]=temp;

  n1=atoi(arr[0]);
  n2=atoi(arr[1]);

  if(n1>n2)printf("%d\n",n1 );
  else printf("%d\n",n2);

return 0;

}
