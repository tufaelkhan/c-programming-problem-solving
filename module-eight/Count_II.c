#include<stdio.h>

int main(){
    char arr[1001];
    scanf("%s",arr);
    int vowel = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
        vowel++;
        }
    }
    printf("%d\n", vowel);
    return 0;
}