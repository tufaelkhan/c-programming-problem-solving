#include<stdio.h>
#include<string.h>

int main(){
    char arr[1005];
    fgets(arr,1005,stdin);
    int capital = 0,small = 0,spaces = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            capital = capital+1;
        }else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            small = small+1;
        }else if(arr[i] == ' '){
            spaces = spaces+1;
        }
        
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",spaces);
    return 0;
}