#include<stdio.h>

int sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    return sum;
}

int main(){
    int total = sum();
    printf("%d\n",total);
    return 0;
}