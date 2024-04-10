#include<stdio.h>

int main(){
    int x,y,z;
    printf("Give first number: ");
    scanf("%d", &x);
    printf("Give second number: ");
    scanf("%d", &y);

    z = (x>y) ? x:y;
    printf("Maximum number is %d", z);
    return 0;
}
