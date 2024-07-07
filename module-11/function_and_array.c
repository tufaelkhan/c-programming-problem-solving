#include<stdio.h>

void fun(double *arr,int n){
    for(int i = 0; i<n; i++){
        printf("%0.2lf ",arr[i]);
    }
}

int main(){
    double arr[4] = {10.40, 20.50, 30.20, 40.90};
    fun(arr, 4);
    return 0;
}