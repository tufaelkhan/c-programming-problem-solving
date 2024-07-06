#include<stdio.h>

int x = 1000;
void fun(){
    int s = 100;
    printf("fun er address %p\n", &s);
}
int main(){
    int s = 500;
    printf("%p\n",&s);
    fun();
    printf("global variable address %p \n",&x);
    printf("%d",x);
    return 0;
}