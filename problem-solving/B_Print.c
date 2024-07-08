#include<stdio.h>

void fun(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        if(i==n){
            printf("%d",i);
            break;
        }
        printf("%d ",i);
    }
    printf("\n");
}

int main(){
    fun();
    return 0;
}