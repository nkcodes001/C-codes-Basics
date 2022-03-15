#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the num a=");
    scanf("%d",&a);
    printf("enter the num b=");
    scanf("%d",&b);
    c=a+b;
    printf("sum is %d\n",c);
    c=a-b;
    printf("diff is %d\n",c);
    c=a*b;
    printf("prod is %d\n",c);
    if(b==0)
 {printf("division is not possible\t");}
    
    else
    {c=a/b;
        printf("divission outcome is %d\n",c);}

    return 0;
}

//done it revised 100/100
