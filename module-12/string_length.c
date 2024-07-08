#include<stdio.h>

int fun(char *arr,int i){
    if(arr[i] == '\0') return 0;
    int l = fun(arr, i+1);
    return l+1;
}

int main(){
    char arr[11] = "tufaelkhan";
    int length = fun(arr,0);
    printf("%d\n",length);
    return 0;
}