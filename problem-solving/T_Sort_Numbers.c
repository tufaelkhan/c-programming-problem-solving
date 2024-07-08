#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int org[3] = {a,b,c};
    int sort[3] = {a,b,c};
    for(int i = 0; i<3-1; i++){
        for(int j = i+1; j<3; j++){
            if(sort[i] > sort[j]){
                int temp = sort[i];
                sort[i] = sort[j];
                sort[j] = temp;
            }
        }
    }
    for(int i = 0; i<3; i++){
        printf("%d\n",sort[i]);
    }
    printf("\n");
    for(int i = 0; i<3; i++){
        printf("%d\n",org[i]);
    }
    return 0;
}