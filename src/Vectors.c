#include <stdio.h>
#include <stdlib.h>

#include "Vector.h"

Vector initVector(size_t size){
    Vector newVector = NULL;
    newVector = malloc(sizeof(Vector));
    newVector->elements = calloc(size, sizeof(float));
    newVector->n_elements = size;
    
    return newVector;
}

void printArray(size_t n, int array[n]){
    for(int index = 0; index <=n; index++)
    {
        printf("Memory: %ld, index: %zu element %d\n",&array[index], index, array[index]);
    }
}


//MAIN

/** 
#include <stdio.h>

#include "Vector.h"

int main()
{
    Vector dynamicVector = NULL;
    
    dynamicVector = initVector(SIZE);

    
    printArray(dynamicVector->n_elements, dynamicVector->elements);
  
    printf("Hello World");

    return 0;
}
*/