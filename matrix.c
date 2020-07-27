#include <stdio.h>

void main()
{
  int arr1[3][3],i,j;
  
       printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
       printf("------------------------------------------------------\n");  
  
 
    /* Stored values into the array*/
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
}
//This is o/p shown as in ur examples
#include<stdio.h>
int main()
{
   int array[5];
   int i,sum=0;
   int *ptr;

   printf("\nEnter array elements (5 integer values):");
   for(i=0;i<5;i++)
      scanf("%d",&array[i]);

   /* array is equal to base address
    * array = &array[0] */
   ptr = array;

   for(i=0;i<5;i++) 
   {
      //*ptr refers to the value at address
      sum = sum + *ptr;
      ptr++;
   }

   printf("\nThe sum is: %d",sum);
}
Output:

Enter array elements (5 integer values): 1 2 3 4 5
The sum is: 15//this o/p is printing the sum of given matrix
