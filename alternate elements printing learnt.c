#include <stdio.h>
#define MAX_SIZE 100 
    void main()
    {
 
        int array[MAX_SIZE];
        int i,size;
        printf("Enter size of array:\n");
        scanf("%d",&size);
        printf("enter the element of an array \n");
        for (i = 0; i < 10; i++)
            scanf("%d", &array[i]);
 
        printf("Alternate elements of the given array is \n");
        for (i = 0; i < 10; i += 2)
            printf( "%d\n", array[i]) ;
    }


// BASIC IDEA IS TO INCREASE ELEMET BY 2

/*
#include<stdio.h>
#define MAX_SIZE 100
void main(){
int array[MAX_SIZE];
int i,size;
printf("ENTERSIZE HOWLE:");
scanf("%d",&size);
for(i=0;i<size;i++){
printf("\nENTER ELEMENT numbEr %d:",i+1);
scanf("%d",&a[i]);
}






for(i=0;i<size;i+=2){
 printf( "%d\n", array[i]) ;
} 





}
