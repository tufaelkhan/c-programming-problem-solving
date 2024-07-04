#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    scanf("%s",&arr);
    int str = strlen(arr);
    printf("%d\n",str);

    // int count = 0;
    // int i = 0;
    // while(arr[i] != '\0'){
    //     count++;
    //     i++;
    // }
    // for(int i = 0; arr[i] != '\0'; i++){
    //     count++;
    // }
    // printf("%d",count);
    return 0;
}