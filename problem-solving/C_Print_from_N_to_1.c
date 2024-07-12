#include<stdio.h>

void fun(int n){
    if(n==0) return;
    if(n==1){
        printf("%d",n);
        return 0;
    }
    printf("%d ",n);
    fun(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    fun(n);
    printf("\n");
    return 0;
}