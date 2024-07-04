#include<stdio.h>
#include<string.h>

int main(){
    char arr[13];
    // gets(arr);
    fgets(arr,13,stdin);
    printf("%s",arr);
    return 0;
}