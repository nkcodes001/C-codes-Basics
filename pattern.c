#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n value:");
    scanf("%d",&n);
    if(n>0)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i); }
    
        printf("\n");}
    }
    else
    {printf("wrong choice");}
    return 0;
}

//output as follows
1                                                                               
2 2                                                                             
3 3 3                                                                           
4 4 4 4                                                                         
5 5 5 5 5 
