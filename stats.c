/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Program that Calculates statistics of an array of chars
 *
 * Calculate statistics on an array of chars implementig method of header file stats.h
 *
 * @author Leonardo Pierangelini
 * @date 14-12-2025
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114,  88,  45,  76, 123,  87,  25,  23,
                              200, 122, 150,  90,  92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  printf("Unordered array\n");
  print_array(test, SIZE);
  sort_array(test, SIZE);
  printf("Ordered array\n");
  print_array(test, SIZE);
  print_statistic(test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistic(unsigned char * array, unsigned int length) {
  printf("Maximum: %i\n", find_maximum(array, length));
  printf("Minimum: %i\n", find_minimum(array, length));
  printf("Mean: %i (truncated)\n", find_mean(array, length));
  printf("Median: %i (truncated)\n", find_median(array, length));
  return;
}

void print_array(unsigned char * array, unsigned int length) {
  printf("[");
  printf("%i", *array);
  for (int i=1; i<length; i++) {
    printf(", %i", *(++array));
  }
  printf("]\n");
  return;
}

unsigned char find_mean(unsigned char * array, unsigned int length){
  unsigned int sum = 0;
  for (int i=0; i<length; i++) {
    sum += array[i];
  }
  return (unsigned char)(sum/length);
}

unsigned char find_median(unsigned char * array, unsigned int length) {
  sort_array(array, length);
  if (length % 2 ==0) {
    return ( *(array + sizeof(char) * (length/2-1)) + *(array + sizeof(char) * length / 2) ) / 2;
  }
  else {
    return *(array + sizeof(char) * (length - 1) / 2);
  }
}

unsigned char find_maximum(unsigned char * array, unsigned int length) {
  return *find_maximum_ptr(array, length);
}

unsigned char find_minimum(unsigned char * array, unsigned int length) {
  unsigned char min = *array;
  for (int i=1; i<length; i++) {
    unsigned char nextArrayElem = *(array++);
    if (min > nextArrayElem ) {
      min = nextArrayElem;
    }
  }
  return min;
}

void sort_array(unsigned char * array, unsigned int length) {
  unsigned char orderedArray[length];
  unsigned char * currentMaxPtr;
  for (int i=0; i<length; i++) {
    currentMaxPtr = find_maximum_ptr(array, length - i);
    if (*array != *currentMaxPtr) {
      unsigned char tmp = *array;
      *array = *currentMaxPtr;
      *currentMaxPtr = tmp;
    }
    array++;
  }
  return;
}

unsigned char * find_maximum_ptr(unsigned char * array, unsigned int length) {
  unsigned char * maxPtr = array;
  for (int i=1; i<length; i++) {
    unsigned char * nextArrayElemPtr = ++array;
    if (*maxPtr < *nextArrayElemPtr) {
      maxPtr = nextArrayElemPtr;
    }
  }
  return maxPtr;
}
