#include<stdio.h>
#include<stdlib.h>

int positive(){
    int n;
    scanf("%d",&n);
    int total = abs(n);
    return total;
}

int main(){
    int result = positive();
    printf("%d",result);
    return 0;
}