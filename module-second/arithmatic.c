#include<stdio.h>

int main(){
    // int a = 20, b = 3;
    // int divide = a%b;
    // printf("%d", divide);

    //problem - 01
    // printf("Recently I heard that you’ve achieved 95% marks in your exam. \n This is brilliant!");
    // printf("I wish you’ll shine in your life!\tGood luck with all the barriers(/\) in your life.");

    // problem - 02
    // float a, b;
    // scanf("%f", &a);
    // scanf("%f", &b);
    // float c = a*1.0 / b;
    // printf("%0.2f", c);

    // problem - 03
    // int e;
    // scanf("%d", &e);
    // if (e > 0)
    // {
    //     printf("given number is %d \n", e);
    //     if (e % 2 == 0)
    //     {
    //         printf("even number");
    //     }else{
    //         printf("odd number");
    //     }
        
    // }

    // problem - 04
    // int g;
    // scanf("%d", &g);
    // if (g == 0)
    // {
    //     printf("given number is zero %d", g);
    // }else if (g < 0)
    // {
    //     printf("given number is negative %d", g);
    // }else{
    //     printf("given number is positive %d", g);
    // }
    
    int b;
    scanf("%d", &b);
    if (b >= 10000)
    {
        printf("buy a gucci bag \n");
        if (b > 20000)
        {
            printf("also buy a gucci belt");
        }
    }else if (b >= 5000)
    {
        printf("buy a levis bag");
    }else{
        printf("buy something from anywhere");
    }
    
    
    return 0;
}