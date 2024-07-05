#include<stdio.h>

int sum(int x, int y){
    int total = x+y;
    return total;
}

int main(){
    int total = sum(10, 30);
    printf("%d\n",total);
    return 0;
}