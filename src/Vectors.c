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
    element->elements = realloc(element->elements, sizeof(float));
    element->n_elements = index;
    
   if(spaceValidation(element, index)== 1){
        element->elements[index] = value;

         return element;
    }
    else return NULL;
   
}


Vector freeVector(Vector object)
{
   
    free(object);

    return object;

}