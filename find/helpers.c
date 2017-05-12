/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    bool flag=0;
    for(int i = 0;i<n+1;i++)
    {
      if(values[i]==value)
      {
          flag=1;
      }
    }
    if(flag==1)
    return true;
    else
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    return;
}
