#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a == 1){
        printf("-1\n");
    }else{
        for(int i = 1; i <= a; i = i+1){
            if(i%2 == 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}