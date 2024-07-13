#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int odd = 0, even = 0;
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    int min_freq = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            min_freq = 1;
        }else if(arr[i] == min){
            min_freq++;
        }
    }
    if(min_freq%2 == 1){
        printf("Lucky\n");
    }else{
        printf("Unlucky\n");
    }
    return 0;
}