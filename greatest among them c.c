#include <stdio.h>
//for greatest among 2 nos.
int main() {
    int a,b;
    printf("enter the num a=\n");
    scanf("%d",&a);
    printf("enter the num b=\n");
    scanf("%d",&b);
    if(a>b)
    printf("%d is the greatest among %d and %d",a,a,b);
else
printf("%d is the greatest among %d and %d",b,a,b);
return 0;
}


//for greatest among 3 nos. |
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the num a=\n");
    scanf("%d",&a);
    printf("enter the num b=\n");
    scanf("%d",&b);
    printf("enter the num c=\n");
    scanf("%d",&c);
    if(a>b)
    {if(a>c)
    {printf("%d is the greatest among %d,%d and %d",a,a,b,c);}
    else
    {printf("%d is the greatest among %d,%d and %d",c,a,b,c);}
    }
    else
    {if(b>c)
    {printf("%d is the greatest among %d,%d,%d",b,a,b,c);}
    else
    {printf("%d is the greatest among %d,%d,%d",c,a,b,c);}
    }
return 0;
}
