#include<stdio.h>
#include<string.h>

int main(){
    char arr1[1001];
    char arr2[1001];
    scanf("%s",&arr1);
    scanf("%s",&arr2);
    int str1 = strlen(arr1);
    int str2 = strlen(arr2);
    printf("%d %d\n",str1,str2);
    printf("%s %s\n",arr1,arr2);

    return 0;
}