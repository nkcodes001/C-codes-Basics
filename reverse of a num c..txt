#include <stdio.h>

int main() {
   int n,r,sum=0;
   printf("enter the number broo=");
   scanf("%d",&n);
   while(n>0)
   {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
   }
    printf("The reverse of the given number is %d",sum);
    return 0;
}
//output

enter the number broo=1234
The reverse of the given number is 4321
/*
The logic to reverse the number is
r=n%10;
       sum=sum*10+r;
       n=n/10;
*/
