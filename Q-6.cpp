// Write a program to print all permutations of a given string
// Note: Duplicates are allowed in the Given String

// A permutation also called an “arrangement number” or “  order,” is a rearrngement 
// of the elements of an ordered list S in t o  a  one - to - one correspondence with
// Sitself.A string of length  has n!permtation.

// Below are the permutations of string ABC.
// ABC ACB BAC BCA CBA CAB

// Link :
// https://www.tutorialspoint.com/print-distinct-sorted-permutations-with-duplicates-allowed-in-input-in-cplusplus



//                                                    ABC
//                                   Swapping on 1st Character, no character is fixed

//          ABC                                      BAC                                     CBA
//                                   Swapping on 2nd Character, first one character is fixed

//      ABC ACB                                  BAC   BCA                               CBA     CAB
//                                cannot swap any more, first two characters are fixed

//                                                    Print 


// Note: swap the value with itself also


#include <iostream>
#include <string>
#include <algorithm>


static int s_Permutations = 0;


bool isValidSwap(std::string inStr, int StartIndex, int CurrIndex)
{
    for (int i = StartIndex; i < CurrIndex; ++i)
        if (inStr[i] == inStr[CurrIndex])
            return false;
    return true;
}

void Permutate(std::string inStr, int FixedIndex)
{
    if (FixedIndex == (int) inStr.size() - 1)
    {
        std::cout << inStr << " ";
        s_Permutations++;
        return;
    }

    for (int i = FixedIndex; i < (int) inStr.size(); ++i)
    {
        if (!isValidSwap(inStr, FixedIndex, i))
            continue;

        std::swap(inStr[i], inStr[FixedIndex]);
        Permutate(inStr, FixedIndex + 1);
    }
}



int main()
{
    std::string Str("ABAD");
    Permutate(Str, 0);
    std::cout << "\nPermutate: " << s_Permutations << std::endl;
}
