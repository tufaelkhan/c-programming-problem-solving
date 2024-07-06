#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int space = 0;
    int value = 2*n-1;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=space; j++){
            printf(" ");
        }
        for(int j = 1; j<=value; j++){
            printf("*");
        }
        space++;
        value = value - 2;
        printf("\n");
    }
    return 0;
}