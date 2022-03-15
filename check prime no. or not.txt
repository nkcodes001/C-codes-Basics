#include <stdio.h>

int main() {
int n,count=0,i;
printf("enter the number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        count=count+1;
    }
}
if(count==2)
printf("The given number is a prime number");
else
printf("The given number is not a prime ,so get lost");

    return 0;
}

//output

enter the number=13
The given number is a prime number

enter the number=113
The given number is a prime number

enter the number=45
The given number is not a prime ,so get lost



