#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    long long int sum = 0;
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    if(sum < 0){
        printf("%lld\n",sum*-1);
    }else{
        printf("%lld\n",sum);
    }
    return 0;
}