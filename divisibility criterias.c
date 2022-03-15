#include <stdio.h>

int main() {
    int n,b,c;
    printf("enter the num n=\n");
    scanf("%d",&n);
    printf("enter the divisibility number 1=\n");
    scanf("%d",&b);
    printf("enter the divisibility number 2 =\n");
    scanf("%d",&c);
    if(n%b==0 && n%c ==0)
    printf("the given number %d is divisible by both %d and %d",n,b,c);
    else
    printf("the given number n is not divisible by both %d and %d together",b,c);

}
