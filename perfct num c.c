#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=1;i<n;i++);
    
    {if(n%i==0)
    {
        sum=sum+i;
    }
        
    }
if (sum==n)
{printf("the num %d is a prfect num.",n);
}
else
{printf("not a perfect num");
}
    return 0;
}





perfect number is 6///   factors of 6 are 1,2,3,6......1+2+3=6// hence  a prfct no.
