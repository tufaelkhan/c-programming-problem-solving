#include<stdio.h>

int cha_to_ascii(char c){
    return (int)c;
}

int main(){
    char c;
    scanf("%c",&c);
    int ascii_value = cha_to_ascii(c);
    printf("%d\n", ascii_value);
    return 0;
}