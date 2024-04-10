#include<stdio.h>

int main(){
    int a,b,c,d;

    printf("First Number: ");
    scanf("%d", &a);
    printf("Second Number: ");
    scanf("%d", &b);
    printf("Third Number: ");
    scanf("%d", &c);

    d = (a>b && a>c) ? a: (b>c) ? b:c;

    printf("Maximum Number is %d", d);
return 0;
}
