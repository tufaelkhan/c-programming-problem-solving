#include<stdio.h>

void sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int total = a+b;
    printf("%d\n",total);
}

int main(){
    sum();
    sum();
    return 0;
}