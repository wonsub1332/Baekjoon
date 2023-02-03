#include <stdio.h>

int main(void){
    int v,n;
    int arr[100];
    int cnt=0;

    scanf("%d",&v);
    for(int i=0;i<v;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);

    for(int i=0;i<v;i++){
        if(n==arr[i])cnt++;
    }
    printf("%d",cnt);

    return 0;

}