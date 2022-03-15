#include <stdio.h>

int main() {
int n,i,lt,sum;
printf("enter the limit=");
scanf("%d",lt);
for(n=1;n<=lt;n++)
{
    sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
        
    }
}
if(n==sum)
printf("%d\n",n);

    return 0;
}

// here for range means we use basically nested for loop!!! 
in the inner loop we use perfect no. wala code
