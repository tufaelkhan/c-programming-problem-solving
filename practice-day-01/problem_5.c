#include<stdio.h>

char capital(char a){
    return a;
}

int main(){
    char c;
    scanf("%c",&c);
    char value = capital(c);
    int result = value+32;
    printf("%c\n",result);
    return 0;
}