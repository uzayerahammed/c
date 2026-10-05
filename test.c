#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    int sum = a + b;
    int minus = a - b;
    int multiply = a * b;
    printf("The sum is: %d\n",sum);
    printf("Minus result is: %d\n", minus);
    printf("the multiplication is: %d\n", multiply);
    
    return 0;
}