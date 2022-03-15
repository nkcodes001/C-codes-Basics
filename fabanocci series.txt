#include <stdio.h>

int main() {
int n,i,a=0,b=1,c;
printf("enter the limit=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\n",a);// 0,c=1,a=1,b=1,1,
    c=a+b;
    a=b;
    b=c;
}

    return 0;
}

//output

enter the limit=15
0
1
1
2
3
5
8
13
21
34
55
89
144
233
377
