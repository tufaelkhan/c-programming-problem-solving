#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f",&a,&b,&c);
    float calculation = a*c;
    float required = calculation/b;
    printf("%0.f\n",required);
    return 0;
}