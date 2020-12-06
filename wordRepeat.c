#include<stdio.h>

void repeat(char *a,int cnt){
  int i=0;
  while(a[i]!='\0'){
    for(int j=0;j<cnt;j++){
      printf("%c",a[i]);
    }
    i++;
  }
  printf("\n");
}

int main(void){
  char arr[21]={0,};
  int T=0,cnt=0;
  scanf("%d",&T );

  for(int i=0;i<T;i++){
    scanf("%d %s",&cnt,&arr );
    repeat(arr,cnt);
  }

  return 0;

}
