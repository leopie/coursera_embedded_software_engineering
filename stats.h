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
 * Prints all statistic for a given array, including minimum, maximum, mean and median
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return void
 */
void print_statistic(char * array);

/**
 * @brief Prints the given array
 *
 * Prints the given array of chars to the screen
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return void
 */
void print_array(char * array, int length);

/**
 * @brief Find the mean
 *
 * Find the mean for the given array of chars
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return mean of all the values of the char array
 */
char find_mean(char * array, int length);

/**
 * @brief Find the median
 *
 * Find the median for the given array of chars
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return median of all the values of the char array
 */
char find_median(char * array, int length);

/**
 * @brief Find the minimum
 *
 * Find the minimum for the given array of chars
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return minimum value of the char array
 */
char find_minimum(char * array, int length);

/**
 * @brief Find the maximum 
 * 
 * Find the maximum for the given array of chars
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return the maximum value of the char array
 */
char find_maximum(char * array, int length);

/**
 * @brief Sort the given array
 *
 * Order the content of the given array from largest to smallest chars 
 *
 * @param array pointer to an array of chars
 * @param length size of the char array 
 *
 * @return void
 */
void sort_array(char * array, int length);


#endif /* __STATS_H__ */
