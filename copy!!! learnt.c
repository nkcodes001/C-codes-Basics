#include <stdio.h>

void main()
{
    int arr1[100], arr2[100];
    int i, n;
	
	
       printf("\n\nCopy the elements one array into another array :\n");
       printf("----------------------------------------------------\n");
	   
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    /* Copy elements of first array into second array.*/ 
    for(i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }

    /* Prints the elements of first array   */
    printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr1[i]);
    }

    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", arr2[i]);
    }
	       printf("\n\n");
}

/* sample output!!!

Copy the elements one array into another array :                                                              
----------------------------------------------------                                                          
Input the number of elements to be stored in the array :3                                                     
Input 3 elements in the array :                                                                               
element - 0 : 15                                                                                              
element - 1 : 10                                                                                              
element - 2 : 12                                                                                              
                                                                                                              
The elements stored in the first array are :                                                                  
   15   10   12                                                                                               
                                                                                                              
The elements copied into the second array are :                                                               
   15   10   12
*/
///////////////////////////////////////////////////////////////////
