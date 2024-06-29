#include<stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Go to cox's bazar \n");
        if (tk >= 10000)
        {
            printf("Go to sent martian \n");
        }else{
            printf("Return back from cox's bazar \n");
        }
    }else{
        printf("No way to go outside from home \n");
    }
    
    return 0;
}