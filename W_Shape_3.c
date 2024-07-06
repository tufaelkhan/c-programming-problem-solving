#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int space = n-1;
    int value = 1;
    for(int i = 0; i<2*n; i++){
        for(int j = 1; j<=space; j++){
            printf(" ");
        }
        for(int j = 1; j<=value; j++){
            printf("*");
        }
        if(i<n-1){
            space--;
            value=value+2;
        }
        if(i<=n-1){
            space;
            value;
        }else{
            space++;
            value=value-2;
        }
        printf("\n");
    }
    return 0;
}