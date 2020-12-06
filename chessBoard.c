#include<stdio.h>

int main(void){
  int N,M;

  char chessB[50][50]={0,};

  int count=0;

  scanf("%d %d",&N,&M);
  for(int i=0;i<N;i++){
    scanf("%s",&chessB[i] );
  }

  for(int i=0;i<N;i++){
    int j=0;
    while(chessB[i][j+1]!='\0'){
      if(chessB[i][j]=='B' && chessB[i][j+1]!='W')count++;
      if(chessB[i][j]=='W' && chessB[i][j+1]!='B')count++;
      j++;
    }
  }
  printf("%d\n",count );







  return 0;
}
