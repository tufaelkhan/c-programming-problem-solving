#include<stdio.h>

int fun(char st[],int i){
    if(st[i] == '\0') return 0;
    int ans = fun(st,i+1);
    if(st[i] >= 'A' && st[i] <= 'Z'){
        st[i] = st[i]+32;
    }
    if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u'){
        return ans+1;
    }else{
        return ans;
    }
}

int main(){
    char st[205];
    fgets(st,205,stdin);
    int count = fun(st,0);
    printf("%d\n",count);
    return 0;
}