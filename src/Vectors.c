#include <stdio.h>
#include <stdlib.h>

#include "../libs/Vector.h"

static size_t spaceValidation(Vector element, size_t index);

static size_t spaceValidation(Vector element, size_t index)
{

    if(element->n_elements <= index)return 1;
    else return 0;

}

Vector initVector(size_t size){
    Vector newVector = NULL;
    newVector = malloc(sizeof(Vector));
    newVector->elements = calloc(size, sizeof(float));
    newVector->n_elements = size;
    
    return newVector;
}

Vector setVector(Vector element, size_t index, float value)
{
    Vector myVector;

    if(spaceValidation(element, index)){
        myVector->elements[index] = value;

         return myVector;
    }
    else return NULL;  
   
}

/**
void printArray(size_t n, int array[n]){
    for(int index = 0; index <=n; index++)
    {
        printf("Memory: %ld, index: %zu element %d\n",&array[index], index, array[index]);
    }
}*/

Vector freeVector(Vector object)
{
   
    free(object);

    return object;

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