#include<stdio.h>

void fun(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    arr[n-1] = 100;
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    fun();
    return 0;
}