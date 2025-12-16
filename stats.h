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
 * @file stats.h 
 * @brief Header file for statistic functions
 *
 * Contains all the declarations of statistic functions:
 * 1) print_statistics
 * 2) print_array
 * 3) find_median
 * 4) find_mean
 * 5) find_maximum
 * 6) find_minimum
 * 7) sort_array
 *
 * @author Leonardo Pierangelini
 * @date 14-12-2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints all statistics for given array
 *
 * This function takes as input a pointer to a char array and calculates on it the minimum, the maximum, the mean and the median, and prints all this values to the screan.
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return void
 */
void print_statistic(unsigned char * array, unsigned int length);

/**
 * @brief Prints the given array
 *
 * This function takes as input a pointer to a char array and prints its values to the screen
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return void
 */
void print_array(unsigned char * array, unsigned int length);

/**
 * @brief Find the mean
 *
 * This function takes as input a pointer to a char array and its length and find the mean for the given array of chars
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return mean of all the values of the char array
 */
unsigned char find_mean(unsigned char * array, unsigned int length);

/**
 * @brief Find the median
 *
 * This function takes as input a pointer to a char array and its length and find the median for the given array of chars
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return median of all the values of the char array
 */
unsigned char find_median(unsigned char * array, unsigned int length);

/**
 * @brief Find the minimum
 *
 * This function takes as input a pointer to a char array and its length and find the minimum for the given array of chars
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return minimum value of the char array
 */
unsigned char find_minimum(unsigned char * array, unsigned int length);

/**
 * @brief Find the maximum 
 * 
 * This function takes as input a pointer to a char array and its length and find the maximum for the given array of chars
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return the maximum value of the char array
 */
unsigned char find_maximum(unsigned char * array, unsigned int length);

/**
 * @brief Sort the given array
 *
 * This function takes as input a pointer to a char array and its length and order its values from largest to smallest char 
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return void
 */
void sort_array(unsigned char * array, unsigned int length);

/**
 * @brief Find the pointer to the array maximum
 *
 * This function takes as input a pointer to a char array and its length and find the address of the maximum value for the given array of chars
 *
 * @param pointer to an array of chars
 * @param length of the char array 
 *
 * @return a pointer to the address of the maximum element of the array
  */
unsigned char * find_maximum_ptr(unsigned char * array, unsigned int length);
#endif /* __STATS_H__ */
