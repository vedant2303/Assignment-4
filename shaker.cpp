#include "shaker.h"
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
int getVecSize()
{
    int size;
    // Taking size of the vector from the user.
    cout << "Enter the size of the vector. ";
    cin >> size;
    return size;
}
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
void generateVec(int size, string filename)
{
    // creating a file and opening it to write the vector into it of a particular size.
    ofstream outData;
    outData.open(filename);
    // Iterating for the size
    for (int i = 0; i < size; i++)
    {
        outData << rand() << endl;
    }
    // close the file
    outData.close();
}
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
vector<int> readVec(string filename)
{
    // creating the vector of type int to store the data read from the file.
    vector<int> vec;
    ifstream inData;
    inData.open(filename);
    int value;
    // Read first value from the file.
    inData >> value;
    // Iterating through the file till the end of the file
    while (inData)
    {
        // Adding the read value to the vec
        vec.push_back(value);
        // Reading the next value from the file.
        inData >> value;
    }
    // Close the file
    inData.close();
    return vec;
}
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
void sortVecAsc(string inputfile, string fileName)
{
    // Calling the readVec function to get the vector.
    vector<int> s = readVec(inputfile);
    // Getting the length of the vector.
    int length = s.size();
    int start = 0;
    int end = length - 1;
    // Calculate the start time
    clock_t begin, endTime;
    begin = clock();
    while (1)
    {
        int z = 0;
        // This lop checks for the smaller number and starts sorting from the left side
        for (int i = start; i < end; i++)
        {
            // Swap the numbers if the condition matches
            if (s[i] > s[i + 1])
            {
                swap(s[i], s[i + 1]);
                z = 1;
            }
        }
        if (z == 0)
        {
            break;
        }
        end--;
        // This lop checks for the greater number and starts sorting from thew right side
        for (int j = end - 1; j >= start; j--)
        { // Swap the numbers if the condition matches
            {
                swap(s[j], s[j + 1]);
            }
        }
        start++;
    }
    endTime = clock();
    // write the sorted vector in the file
    writeVec(s, fileName);
}
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
void sortVecDesc(string inputfile, string fileName)
{
    // Calling the readVec function to get the vector.
    vector<int> s = readVec(inputfile);
    // Getting the length of the vector.
    int length = s.size();
    int start = 0;
    int end = length - 1;
    // Calculate the start time
    clock_t begin, endTime;
    begin = clock();
    while (1)
    {
        int z = 0;
        // This loop will move from left to right and get the maximum number and store it
        for (int i = start; i < end; i++)
        {
            // This lop checks for the larger number and starts sorting from the left side
            if (s[i] < s[i + 1])
            { // Swap the numbers if the condition matches
                swap(s[i], s[i + 1]);
                z = 1;
            }
        }
        if (z == 0)
        {
            break;
        }
        end--;
        // This lop checks for the smaller number and starts sorting from the right side
        for (int j = end - 1; j >= start; j--)
        { // Swap the numbers if the condition matches
            if (s[j] < s[j + 1])
            {
                swap(s[j], s[j + 1]);
            }
        }
        start++;
    }
    endTime = clock();
    // write the sorted vector in the file
    writeVec(s, fileName);
}
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
void writeVec(vector<int> vec, string filename)
{
    // get the size of the vector
    int size = vec.size();
    // opening the file to write the sorted vector into it.
    ofstream outData;
    outData.open(filename);
    // Iterating till the size of the vector.
    for (int i = 0; i < size; i++)
    {
        outData << vec[i] << endl;
    }
    // CLose the file.
    outData.close();
}
