#include<stdio.h>
void reference (int[], int);	/// function prototype
int
main () 
{
  
int arr[100], n;
  
int i;
  
printf ("\n Enter the number of array elements to store :");
  
scanf ("%d", &n);		///n=5
  printf ("\n Enter array elements:");
  
for (i = 0; i < n; i++)
    
    {
      
scanf ("%d", &arr[i]);
    
}
  
printf ("\nBefore function call\n");
  
for (i = 0; i < n; i++)
    
    {
      
printf ("%d ", arr[i]);
    
}
  
printf ("\n Elements by reference:");
  
reference (arr, n);		///Passing array by call by reference
  printf ("\n\nAfter function call \n");
  
for (i = 0; i < n; i++)
    
    {
      
printf ("%d ", arr[i]);
    
}
  
return 0;

}				///x[] == arr, size = n

void
reference (int x[], int size) 
{				/// size = n x[] = arr
  int i;
  
for (i = 0; i < size; i++)
    
    {
      
x[i] = x[i] + 1;
      
printf ("%d ", x[i]);
    
}

}


//arr[6, 7, 8, 9, 9]
//arr[0][1][2][3][4]
//x[6,6,7,8,9]

