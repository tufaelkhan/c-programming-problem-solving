#include<stdio.h>

void fun(int *ptr){
    *ptr = 500;
    printf("%d\n",*ptr);
}

int main(){
    int x = 100;
    // printf("main %p\n",&x);
    fun(&x);
    printf("%d\n",x);
    return 0;
}