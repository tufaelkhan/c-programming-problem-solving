#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n+1; i++)
    {
        if(i%n == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}