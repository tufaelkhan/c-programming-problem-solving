#include<stdio.h>

int main(){
    char arr[1001];
    int count[26] = {0};
    scanf("%s",arr);
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            count[arr[i] - 'a']++;
        }
    }
    for(char c = 'a'; c <= 'z'; c++){
        printf("%c - %d\n",c,count[c - 'a']);
    }
    return 0;
}