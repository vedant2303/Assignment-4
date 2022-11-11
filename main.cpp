#include "shaker.cpp"

/**
 * int main()
 * Module: Main
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: Program execution starts from this main function.
 *
 * Function   : main
 *
 * Parameters : N/A
 *
 * Output : 0
 *          
 * Example of Usage:
 *
 *  main()
 *
 */
int main()
{
   // Get the size from the user.
   int size = getVecSize();
   // Generate the vector and store it in the Input.txt file.
   generateVec(size, "input.txt");
   // Sort the vector in ascending order and store it in the Ascending.txt file
   sortVecAsc("input.txt", "Ascending.txt");
   // Sort the vector iun descending order and store it in the Descending.txt file
   sortVecDesc("input.txt", "Descending.txt");
   return 0;
}