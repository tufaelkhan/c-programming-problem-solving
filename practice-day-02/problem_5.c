#include<stdio.h>

void fun(int *a, int *b){
    int temp = a;
    a = b;
    b = temp;
    printf("%d %d\n",a,b);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b);
    return 0;
}