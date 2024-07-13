#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f",&a,&b);
    float price = b/(1-a/100);
    printf("%0.2f\n",price);
    return 0;
}