#include<stdio.h>
#include<string.h>

void fun(char *arr){
    int size = sizeof(arr)/sizeof(char);
    printf("%d\n",size);
    // printf("%d\n",strlen(arr));
}

int main(){
    char arr[20] = "Hello";
    fun(arr);
    return 0;
}