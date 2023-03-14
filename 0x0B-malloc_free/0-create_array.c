#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * char - function that takes arrays
 * @size: argument function
 * @c: second argument
 * @Return: NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	
	if (size == 0) {
        return NULL; 
   
       	}
    
    char *arr = (char *) malloc(size * sizeof(char)); 
    if (arr != NULL) {
        for (unsigned int i = 0; i < size; i++) {
            arr[i] = c;
        }
    }
    return arr;
}
