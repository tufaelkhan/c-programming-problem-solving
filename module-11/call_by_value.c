#include<stdio.h>

void fun(int x){
    printf("fun fn %p\n",&x);
}

int main(){
    int x = 100;
    printf("main fn %p\n",&x);
    fun(x);
    return 0;
}