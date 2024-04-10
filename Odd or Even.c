#include<stdio.h>

int main(){
    int x;
    printf("Input Number: ");
    scanf("%d", &x);

    (x % 2 == 0) ? printf("The number is Even") : printf("The Number is Odd");
    return 0;
}
