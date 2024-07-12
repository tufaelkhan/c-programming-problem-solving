#include<stdio.h>

int main(){
    int row, col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    // for(int i = 0; i<col; i++){
    //     printf("%d ",arr[n][i]);
    // }

    for(int i = 0; i<row; i++){
        printf("%d ",arr[i][n]);
    }
    return 0;
}