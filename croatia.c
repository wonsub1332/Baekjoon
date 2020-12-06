#include<stdio.h>


int main(void){

  char string[101]={0,};
  int i=0;
  int count=0;

  scanf("%s",string );

  while (string[i]!='\0'){
    /* code */

    if(string[i]=='c'){
      if(string[i+1]=='='){count++; i+=2; continue;}

      if(string[i+1]=='-'){count++; i+=2; continue;}
    }

    if(string[i]=='d'){
      if(string[i+1]=='z'){
        if(string[i+2]=='='){count++; i += 3; continue;}
        }
      if(string[i+1]=='-'){count++; i+=2; continue;}
    }

    if(string[i]=='l')
      if(string[i+1]=='j'){count++; i+=2; continue;}

    if(string[i]=='n')
      if(string[i+1]=='j'){count++; i+=2; continue;}

    if(string[i]=='s')
      if(string[i+1]=='='){count++; i+=2; continue;}

    if(string[i]=='z')
      if(string[i+1]=='='){count++; i+=2; continue;}

    count++;
    i++;


  }


  printf("%d\n",count );


  return 0;
}
