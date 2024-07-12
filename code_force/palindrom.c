#include<stdio.h>
#include<string.h>

int main(){
    char arr[100], arr2[100];
    scanf("%s",&arr);
    strcpy(arr2,arr);
    int i = 0, j = strlen(arr2)-1;
    while (i<j)
    {
        char temp = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = temp;
        i++;
        j--;
    }
    if(strcmp(arr,arr2)==0){
        printf("%d\n",arr);
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}