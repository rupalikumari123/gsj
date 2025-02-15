#include <stdio.h>

// Calculate the average of a given array of integers. Do not return a float.
int average(int numbers[], int n)
{
    int sum = 0;

    
    for (int i = 0; i < n; i++)
    {
        sum += numbers[i]; 
    }

    
    return sum / n;
}

