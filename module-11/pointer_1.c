#include<stdio.h>

int main(){
    int x = 100;
    int *ptr = &x;
    // printf("%p\n",&x);
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);
    // printf("memory size %d\n",sizeof(ptr));

    *ptr = 200;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    return 0;
}