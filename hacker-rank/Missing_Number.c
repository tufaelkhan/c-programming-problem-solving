#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    // while(n--){
    //     unsigned long long a,b,c,d;
    //     scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
    //     unsigned long long value = a-(b+c+d);
    //     printf("%llu\n",value);
    // }
    for(int i = 0; i<n; i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int missing = a-(b+c+d);
        printf("%d\n",missing);
    }
    return 0;
}