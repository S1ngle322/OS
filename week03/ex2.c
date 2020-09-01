#include <stdio.h>
#include <stdlib.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void bubbleSort(int a[], int size) 
{ 
   int i, j; 
   for (i = 0; i < size - 1; i++)       
       for (j = 0; j < size - i - 1; j++)  
           if (a[j] > a[j + 1]) 
              swap(&a[j], &a[j + 1]); 
} 
  
void print(int a[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int a[] = {10, 9, 8, 7, 6, 11, 90}; 
    int size = sizeof(a)/sizeof(a[0]); 
    bubbleSort(a, size); 
    printf("Sorted array: \n"); 
    print(a, size); 
    return 0; 
} 