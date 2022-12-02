#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    // declare local variables   
    int arr[20], i, j, k, size;  
    int *ptr = arr;
    printf (" Define the number of elements in an array: ");  
    scanf (" %d", &size);  
      
    printf (" \n Enter %d elements of an array: \n ", size);  
    // use for loop to enter the elements one by one in an array  
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", ptr+i);  
    }  
      
      
    // use nested for loop to find the duplicate elements in array  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( *(ptr+i) == *(ptr+j))  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < size - 1; k++)  
                {  
                    *(ptr+i +k) =  *(ptr+i +k+1) ;  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
      
      
    /* display an array after deletion or removing of the duplicate elements */  
    printf (" \n Array elements after deletion of the duplicate elements: ");  
      
    // for loop to print the array  
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", *(ptr+i));  
    }  
    return 0;  
}
