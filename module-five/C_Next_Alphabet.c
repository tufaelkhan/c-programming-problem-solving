#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    if(a == 'z'){
        printf("%c",'a');
    }else if(a >= 'a'){
        printf("%c",a+1);
    }
    return 0;
}