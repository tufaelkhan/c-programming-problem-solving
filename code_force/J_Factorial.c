#include<stdio.h>

long long int fun(long long int n){
    if(n==0)return 1;
    long long ans = fun(n-1);
    return ans*n;
}

int main(){
    long long n;
    scanf("%lld",&n);
    long long int ans = fun(n);
    printf("%lld\n",ans);
    return 0;
}