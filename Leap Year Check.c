#include<stdio.h>

int main(){
    int year;
    printf("Inpur year: ");
    scanf("%d", &year);

    (year%4 == 0 && year%100 !=0) ? printf("%d is Leap Year", year) : (year%400 == 0) ? printf("%d is Leap Year", year) : printf("%d is not Leap Year", year);

    return 0;
}
