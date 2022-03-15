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
            printf("%d ",j); }
    
        printf("\n");}
    }
    else
    {printf("wrong choice");}
    return 0;
}
//output

enter n value:12                                                                
1                                                                               
1 2                                                                             
1 2 3                                                                           
1 2 3 4                                                                         
1 2 3 4 5                                                                       
1 2 3 4 5 6                                                                     
1 2 3 4 5 6 7                                                                   
1 2 3 4 5 6 7 8                                                                 
1 2 3 4 5 6 7 8 9                                                               
1 2 3 4 5 6 7 8 9 10                                                            
1 2 3 4 5 6 7 8 9 10 11                                                         
1 2 3 4 5 6 7 8 9 10 11 12                                                      
                                                                                
            
