#include<stdio.h>

int main(){
    int taka;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("Buy a burger");
    }else if (taka >= 50)
    {
        printf("buy a hot dog");
    }else if (taka >= 20)
    {
        printf("buy a ice cream");
    }else{
        printf("Don't have any extra taka");
    }
    
    
    return 0;
}