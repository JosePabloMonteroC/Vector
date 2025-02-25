#include <stdio.h>
#include <stdlib.h>

#include "../libs/Vector.h"
#include "../libs/unity.h"


#define START 0
#define INDEX 3
#define VECTOR 3
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

 size_t index = 0;
 float* element = 0;

 test_number = initVector(START);  
  
 test_number = setVector(test_number, INDEX, VECTOR);

 //TEST CODE
 
 element = test_number->elements;
 index = test_number->n_elements;

 //TEST CODE
 TEST_ASSERT_FLOAT_WITHIN(DELTA, VECTOR, *element);
 //TEST_ASSERT_EQUAL(VECTOR, element);

 freeVector(test_number);
}

void test_VectorFree(void)
{
 puts("Testing VectorFree Function");
 Vector test_number = initVector(START);

 test_number = freeVector(test_number);

 TEST_ASSERT_NULL(test_number);
}



int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_initVector, __LINE__);
  RUN_TEST(test_VectorFree, __LINE__);
  RUN_TEST(test_setVector, __LINE__);



  return UNITY_END();
}
