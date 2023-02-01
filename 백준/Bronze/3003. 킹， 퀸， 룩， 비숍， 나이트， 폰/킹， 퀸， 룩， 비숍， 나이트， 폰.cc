#include <stdio.h>
#include <string.h>

int main (void){
    int k,q,l,b,n,p;

    scanf("%d %d %d %d %d %d",&k,&q,&l,&b,&n,&p);
    k=1-k;
    q=1-q;
    l=2-l;
    b=2-b;
    n=2-n;
    p=8-p;
    printf("%d %d %d %d %d %d",k,q,l,b,n,p);
    return 0;
}