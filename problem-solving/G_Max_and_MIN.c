#include<stdio.h>
#include<limits.h>

void min_max(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d ",&arr[i]);
    }
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d %d\n",min,max);
}

int main(){
    min_max();
    return 0;
}