#include <stdio.h> 
#define row 3
#define col 3
void MAT_input(int arr[][col]) {
   int i,j;
   printf("\nEnter the matrix elements:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         scanf("%d", &(*(*(arr + i) + j)));
      }
   }
}
void MAT_print(int arr[][col]) {
   int i,j;
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", (*(*(arr + i) + j)));
      }
      printf("\n");
   }
}
void MAT_multi(int arr1[][col], int arr2[][col], int prod[][col]) {
   int i, j, k;
   int sum=0;
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         for (k = 0; k < col; k++) {
            sum += (*(*(arr1 + i) + k)) * (*(*(arr2 + k) + j));
         }
         *(*(prod + i) + j) = sum;
         sum=0;
      }
   }
}
int main() {
   int arr1[row][col];
   int arr2[row][col];
   int prod[row][col];
   printf("\nEnter elements in first matrix of size %dx%d\n", row, col);
   MAT_input(arr1);
   printf("\nEnter elements in second matrix of size %dx%d\n", row, col);
   MAT_input(arr2);
   printf("\nMATRIX 1:\n");
   MAT_print(arr1);
   printf("\nMATRIX 2:\n");
   MAT_print(arr2);
   MAT_multi(arr1, arr2, prod);
   printf("\nRESULTANT MATRIX: \n");
   MAT_print(prod);
   return 0;
}
