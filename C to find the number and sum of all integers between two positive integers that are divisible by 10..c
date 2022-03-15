#include <stdio.h>

int main()
{
    int low,upp,i,count=0,sum=0;
    printf("enter lower number\n");
    scanf("%d",&low);
    printf("Enter upper limit\n");
scanf("%d",&upp);
for(i=low;i<=upp;i++){
    if(i%10==0){
      //  printf("%d\n",i);
        sum=sum+i;
        count=count+1;
    }
}
/*if(low%10==0){
    sum=sum-low;
}
else if (upp%10==0){
    sum=sum-upp;
}*/

    

printf("The sum of all integers between %d and %d which are divisible by 10 is %d \n",low,upp,sum);
printf("The count is %d",count);

    return 0;
}


/*output:::
enter lower number                                                                                                    
12                                                                                                                    
Enter upper limit                                                                                                     
33                                                                                                                    
The sum of all integers between 12 and 33 which are divisible by 10 is 50                                             
The count is 2      
*/
