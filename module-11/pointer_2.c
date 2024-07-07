#include<stdio.h>

int main(){
    double x = 4.56;
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr = 102.20;
    printf("%0.2lf\n", x);
    printf("%0.2lf\n", *ptr);
    printf("%0.2lf\n", *ptr2);
    // printf("%d\n",sizeof(ptr));

    return 0;
}