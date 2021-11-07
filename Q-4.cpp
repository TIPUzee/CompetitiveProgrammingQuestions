// Print reverse of a string using recursion
// 
// Write a recursive function to print reverse of a given string.
// 
// Input: Zeeshan
// Output : nahseeZ
// Link
// https://www.geeksforgeeks.org/reverse-a-string-using-recursion/

#include <iostream>
#include <string>


void PrintReverse(char& inChar)
{
    if (inChar == 0)
        return;
    PrintReverse(*((char*) &inChar + 1)); // if don't understand, visit the link, given at the top 
    std::cout << inChar;
}

int main()
{
    std::string str("Zeeshan");
    PrintReverse(str[0]);
}