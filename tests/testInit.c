#include <stdio.h>
#include <stdlib.h>

#include "../libs/Vector.h"
#include "../libs/unity.h"


#define START 0
#define DELTA 0.00005

void setUp(void)
{
  
}

void tearDown(void)
{
  
}

void test_initVector(void)
{
  puts("Testing Vector Init function");
  Vector test_number = NULL;
  test_number = initVector(START);
  TEST_ASSERT_NOT_NULL(test_number);
  freeVector(test_number);
}

void test_setVector(void)
{
 puts("Testing Vector Set function");
 Vector test_number = NULL; 
 size_t index;
 float* element;

 test_number = initVector(START);
 
 test_number = setVector(test_number, index, *element);

 //TEST CODE
 
 element = test_number->elements;
 index = test_number->n_elements;


 //TEST CODE
 TEST_ASSERT_FLOAT_WITHIN(DELTA, *element, index);
 freeVector(test_number);
}

/**
void test_ComplexNumberFree(void)
{
 puts("Testing Complex Number Get Function");
 ComplexNumber test_number = newComplexNumber();

 test_number = freeComplexNumber(test_number);

 TEST_ASSERT_NULL(test_number);
}*/

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_initVector, __LINE__);
  RUN_TEST(test_setVector, __LINE__);


  return UNITY_END();
}
