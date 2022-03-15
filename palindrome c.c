#include <stdio.h>

int main() {
int n,r,sum=0,temp;
printf("enter the number=");
scanf("%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=sum*10 + r;////////// r=n%10;sum=sum*10+ r ///////// n=n/10////////// this is to reverse a number!!!!!
    n/=10;
}
n=temp;
if(n==sum)
printf("its a palindrome no.");
else 
printf("Not a palindrome");
    return 0;
}

output//
enter the number=1223221
its a palindrome no.\

enter the number=123454321
its a palindrome no.

enter the number=123213
Not a palindrome


