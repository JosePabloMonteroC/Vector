/**
 * @Author Jose Pablo Montero C.
 * @Date 31/Aug/2021
 * @Name Vector.h
 * @Copyright TDA Otono 2021
 */

#ifndef Vector_h
#define Vector_h

#include <stdlib.h>
#include <stdio.h>

#define SIZE 20

struct _vector{
  float *elements;  
  size_t n_elements;
  
};

typedef struct _vector* Vector;

int Array[SIZE];

//Initialises Vector

Vector initVector(size_t size);
Vector setVector(Vector element, size_t index, float value);
Vector freeVector(Vector object);


void printArray(size_t n, int array[]);




#endif

