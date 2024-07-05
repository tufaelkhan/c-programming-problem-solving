#include<stdio.h>

void sum(int x, int y){
    int total = x+y;
    printf("%d\n",total);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}