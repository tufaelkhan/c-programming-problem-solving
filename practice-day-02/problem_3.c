#include<stdio.h>

void odd(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int odd = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]%2 == 1){
            odd = odd+1;
        }
    }
    printf("%d",odd);
}

int main(){
    odd();
    return 0;
}