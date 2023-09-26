#include<stdio.h>

int main ()
{
   int arows, acolumns;

   printf("Enter the num of rows and columns of matrix a: ");
   scanf("%d %d",&arows, &acolumns);

   int a[arows][acolumns];

   printf("Enter the elements of matrix a:\n");
   for (int i=0; i<arows; i++) {
      for(int j=0; j<acolumns; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   int brows, bcolumns;

   printf("Enter the num of rows and columns of the matrix b: ");
   scanf("%d %d", &brows, &bcolumns);

   int b[brows][bcolumns];

   /**
    * @brief to multiply two matrix a x b, the number of columns in 'a' must be
    * equal to the number of rows in 'b'.
    * 
    * if order of 'a' is [m x n] & order of 'b' is [n x r], then order of
    * resultant matrix will be [m x r]
    * 
    * 
    * 
    */
   if(brows!=acolumns)
   {
      printf("Can't multiply matrix a and b as num of columns in a is not equal to the num of rows in b");
      return 0;
   }

   printf("Enter the elements of matrix b:\n");
   for (int i=0; i<brows; i++) {
      for(int j=0; j<bcolumns; j++) {
         scanf("%d", &b[i][j]);
      }
   }
   
   printf("\n");

   int products[arows][bcolumns];
   int sum=0;

   for(int i=0; i<arows; i++)
   {
      for(int j=0; j<bcolumns; j++)
      {
         for(int k=0; k<brows; k++)
         {
            sum+= a[i][k] * b[k][j];
         }

         products[i][j]=sum;
         sum=0;
      }
   }

   printf("Resultant matrix:\n");
   for(int i=0; i<arows; i++) {
      for(int j=0; j<bcolumns; j++) {
         printf("%d ", products[i][j]);
      }
      
      printf("\n");
   }

   return 0;
}

/**
 * @test 
 * 
 * 1  2              8    5
 * 3  4  x  4  3  =  20   13
 * 0  1     2  1     2    1
 * 
 */