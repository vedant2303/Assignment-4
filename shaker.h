#include <bits/stdc++.h>
using namespace std;

/**
 * int getVecSize()
 * Module: Shaker
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: It returns the size of the vector taken input from the user.
 *
 * Function   : getVecSize
 *
 * Parameters : N/A
 *
 * Output :
 *          int x -> the vector size
 *
 * Example of Usage:
 *
 *  int size=getVecSize();
 *
 */
int getVecSize();

/**
 * void generateVec(int size, string filename)
 * Module: Shaker
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: It will generate the vector of the given size and stores it in the file.
 *
 * Function   : getVecSize
 *
 * Parameters : 
 *              1) size - int : the size of the vector.
 *              2) filename - string : The name of the file in which the vector is stored.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *  generateVec(5,"input.txt");
 *
 */
void generateVec(int size, string filename);
/**
 * vector<int> readVec(string filename)
 * Module: Shaker
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: It will return the vector that was read from the file.
 *
 * Function   : readVec
 *
 * Parameters : 
 *              1) filename - string : The name of the file from which the file vector is read.
 *
 * Output : 
 *          vector<int>=[1,2,3,4,5];
 *
 * Example of Usage:
 *
 *  vector<int> vec=readVec("input.txt");
 *
 */
vector<int> readVec(string filename);
/**
 * void sortVecAsc(string inputfile, string fileName)
 * Module: Shaker
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: It will sort the data in the ascending order and store it in the file.
 *
 * Function   : sortVecAsc
 *
 * Parameters : 
 *              1) inputfile - string : The name of the file from which the file vector is read.
 *              1) fileName - string : The name of the file where the sorted data is stored.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *  sortVecAsc("input.txt","ascending.txt");
 *
 */
void sortVecAsc(string inputfile , string fileName);
/**
 * void sortVecDesc(string inputfile, string fileName)
 * Module: Shaker
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: It will sort the data in the descending order and store it in the file.
 *
 * Function   : sortVecDesc
 *
 * Parameters : 
 *              1) inputfile - string : The name of the file from which the file vector is read.
 *              1) fileName - string : The name of the file where the sorted data is stored.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *  sortVecDesc("input.txt","descending.txt");
 *
 */
void sortVecDesc(string inputfile , string fileName);
/**
 * void writeVec(vector<int> vec, string filename)
 * Module: Shaker
 * Author: Vedant Patel
 * Date:   04/11/2022
 * Purpose: It will write the sorted data in the output file.
 *
 * Function   : writeVec
 *
 * Parameters : 
 *              1) vec - vector<int> : The sorted vector to be written in the file.
 *              1) fileName - string : The name of the file where the sorted data is stored.
 *
 * Output : N/A
 *
 * Example of Usage:
 *
 *  writeVec([1,2,3,4,5,6,7], "ascending.txt");
 *
 */
void writeVec(vector<int> vec,string filename);

