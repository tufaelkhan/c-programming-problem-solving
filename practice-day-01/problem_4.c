#include<stdio.h>

char small(char c){
    return c;
}

int main(){
    char c;
    scanf("%c",&c);
    char value = small(c);
    int result = value-32;
    printf("%c\n",result);
    return 0;
}