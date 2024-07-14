#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=2; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int pathan = 0, tiger = 0, draw = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<=2; j++){
            if(arr[i][1] > arr[i][2]){
                tiger++;
            }else if (arr[i][1] < arr[i][2])
            {
                pathan++;
            }else{
                draw++;
            }
        }
    }
    if(pathan > tiger){
        printf("Pathan\n");
    }else if (pathan < tiger)
    {
        printf("Tiger\n");
    }else{
        printf("Draw\n");
    }
    
    return 0;
}