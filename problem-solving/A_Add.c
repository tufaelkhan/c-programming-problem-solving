#include<stdio.h>

int sum(){
    int x,y;
    scanf("%d %d",&x,&y);
    int total = x+y;
    return total;
}

int main(){
    int result = sum();
    printf("%d\n",result);
    return 0;
}