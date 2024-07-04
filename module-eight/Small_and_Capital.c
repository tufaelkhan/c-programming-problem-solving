#include<stdio.h>

int main(){
    char arr[1001];
    scanf("%s",&arr);
    int capital = 0, small = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            small++;
        }else if(arr[i] >= 'A' && arr[i] <= 'Z'){
            capital++;
        }
    }
    printf("%d %d",capital,small);
    return 0;
}