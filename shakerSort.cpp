// Module Name : shakerSort.cpp
// Author : Vedant Patel
// Date of Creation: 06/11/2021
// Purpose: To perform shaker sort algorithm

//Importing necessary libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "util.h"

using namespace std;

/**
 * @info:
 * Contains all the main logic for the given program and is executed first before any other functions.
 * 
 * @explaination:
 * 	- this function performs shakersort algorithm and reports the time in both ascending and descending order.
 * 
 * @preconditions:
 * - N/A
 * 
 * @param: - N/A
 * @return: - Sort the array and returns time for both ascending and descending order.
 * 
 * @sideeffects: N/A
 */

int main()
{

	int size;
	cout << "Please enter the size of array: ";
	cin >> size;

	int *array = getRandomArray(size);

	cout << "==== BEFORE SORTING ====\n";
	printArray(array, size);

	clock_t time = clock();
	shakerSort(array, size, 0); //sorting in ascending order
	cout << "====== AFTER ASCENDING SORT ======\n";
	printArray(array, size);
	time = clock() - time;
	cout << "Time Taken for Ascending sort = " << (double)time / CLOCKS_PER_SEC << " seconds\n\n";

	time = clock();
	shakerSort(array, size, 1); //sorting in descending order
	cout << "====== AFTER DESCENDING SORT ======\n";
	printArray(array, size);
	time = clock() - time;
	cout << "Time Taken for Descending sort = " << (double)time / CLOCKS_PER_SEC << " seconds\n\n";
}

int *getRandomArray(int n)
{

	int *array = new int[n];

	srand((unsigned)time(0));

	for (int i = 0; i < n; i++)
		array[i] = rand() % n + 1;

	return array;
}

void shakerSort(int *array, int n, int sortType)
{

	bool swapped = true;
	int start = 0;
	int end = n - 1;

	if (!sortType)
	{ //sorting in ascending order

		while (swapped)
		{

			// reset the swapped flag on entering
			swapped = false;

			// loop from left to right same as
			// the bubble sort
			for (int i = start; i < end; i++)
			{
				if (array[i] > array[i + 1])
				{
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swapped = true;
				}
			}

			// if nothing moved, then array is sorted.
			if (!swapped)
				break;

			// reseting flag to use in next stage
			swapped = false;

			// move the end point back by one, as last item is at its place
			end--;

			// from right to left, doing the
			// same comparison as in the previous stage
			for (int i = end - 1; i >= start; i--)
			{
				if (array[i] > array[i + 1])
				{
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swapped = true;
				}
			}

			// increase the starting point because first element is at its place
			start++;
		}
	}
	else
	{ //sorting in descending order

		while (swapped)
		{

			// reset the swapped flag on entering
			swapped = false;

			// loop from left to right same as
			// the bubble sort
			for (int i = start; i < end; i++)
			{
				if (array[i] < array[i + 1])
				{
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swapped = true;
				}
			}

			// if nothing moved, then array is sorted.
			if (!swapped)
				break;

			// reseting flag to use in next stage
			swapped = false;

			// move the end point back by one, as last item is at its place
			end--;

			// from right to left, doing the
			// same comparison as in the previous stage
			for (int i = end - 1; i >= start; i--)
			{
				if (array[i] < array[i + 1])
				{
					int temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swapped = true;
				}
			}

			// increase the starting point because first element is at its place
			start++;
		}
	}
}

void printArray(int *array, int n)
{

	cout << "Array : ";
	for (int i = 0; i < n; i++)
	{ //loop through array
		if (i == n - 1)
			cout << array[i] << endl; //if last element print with endline
		else
			cout << array[i] << ", "; //else print with comma
	}
}
