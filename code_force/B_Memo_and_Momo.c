#include<stdio.h>

int main(){
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    if(a%k == 0 && b%k == 0){
        printf("Both\n");
    }else if (a%k != 0 && a%k != 0)
    // (a % k != 0 && b % k != 0)
    {
        printf("No One\n");
    }else if (a%k == 0)
    {
        printf("Memo\n");
    }else{
        printf("Momo\n");
    }
    
    
    return 0;
}