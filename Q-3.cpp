//Program to reverse a string
//
//Given a string, write a program to reverse it.
//
//Example:
//Input: abc
//Output: cba


#include <string>
#include <iostream>


void ReverseString(std::string& inStr)
{
    int Iterate = inStr.size() / 2;
    for (int i = 0; i < Iterate; i++)
        std::swap(inStr[i], inStr[inStr.size() - i - 1]);
}

int main()
{
    std::string str("Zeeshan");

    ReverseString(str);
    std::cout << "Reverse String: " << str << std::endl;

}

// Time complexity: O(n)
// Auxiliary Space: O(1)