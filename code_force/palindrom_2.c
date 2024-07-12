#include<stdio.h>
#include<string.h>

int main(){
    char arr1[1001];
    scanf("%s",arr1);
    int i = 0, j = strlen(arr1)-1;
    int flag = 1;
    while (i<j)
    {
        if(arr1[i] != arr1[j]){
            flag = 0;
        }
        i++;
        j--;
    }
    if(flag == 0){
        printf("NO");
    }else{
        printf("YES");
    }
    
    return 0;
}