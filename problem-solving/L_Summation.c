#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i<n; i++){
        total = total + arr[i];
    }
    printf("%d\n",total);
    return 0;
}