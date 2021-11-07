// Print all possible Permutations of a String Using cpp STL library
// Note: duplicates are not allowed in the string

// C++ program to illustrate next_permutation example

// this header file contains next_permutation function
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int totalPermutations = 0;
    std::string Str("ABCD");

    std::sort(Str.begin(), Str.end());

    do
    {
        std::cout << Str << std::endl;
        totalPermutations++;
    } while (std::next_permutation(Str.begin(), Str.end()));

    std::cout << "Permutations: " << totalPermutations << std::endl;
}