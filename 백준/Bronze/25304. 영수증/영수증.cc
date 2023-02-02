#include <stdio.h>
int main(void){
    int x,n;
    int a,b;
    int ret=0;
    scanf("%d",&x);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        ret=ret+a*b;
    }
    if(x==ret)printf("Yes");
    else printf("No");

    return 0;
}