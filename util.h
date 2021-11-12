#ifndef SHAKERSORT_H
#define SHAKERSORT_H

// Module Name : util.h
// Author : Vedant Patel
// Date of Creation: 06/11/2021
// Purpose: To provide utility functions for shaker sort algorithm

/** getRandomArray
		
		* Purpose: To fill the array with random numbers of n size.
		* Parameter(s): 
        *       <1> n : integer value of array size
		* Precondition(s): N/A
		* Returns: Array of size n.
		* Side effect: N/A
		*/

int *getRandomArray(int n);

/** shakerSort
		
		* Purpose: To perform sorting of array in ascending or descending order
		* Parameter(s): 
		* 		<1> array : Blank array
        *       <2> n : Size of array
        *       <3> sortType: Decide whether it sorts array in ascending (sortType=0) or descending order (sortType=1).
		* Precondition(s): N/A
		* Returns: array in ascending or descending order based on sortType.
		* Side effect: N/A
		*/

void shakerSort(int *array, int n, int sortType);

/** printArray
		
		* Purpose: Prints the array to console.
		* Parameter(s): 
		* 		<1> array : An array.
        *       <2> n : Size of array
		* Precondition(s): N/A
		* Returns: Displays the array.
		* Side effect: N/A
		*/
    
void printArray(int *array, int n);

#endif /* SHAKERSORT_H */
