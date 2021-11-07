// Lexicographically next string

// Given a string, find lexicographically next string.
// Examples:

// Input: geeks
// Output : geekt
// The last character 's' is changed to 't'.

// Input : raavz
// Output : raawz
// Since we can't increase last character, 
// we increment previous character.

// Input : zzz
// Output : zzza

// If string is empty, we return ‘. If string contains all characters as ‘z’, we 
// append ‘a’at thend. Otherwise we find first character from end which is not z
// and increment it.

// Link
// https://www.geeksforgeeks.org/lexicographically-next-string/


#include <iostream>
#include <string>


std::string NextWord(std::string str)
{
    for (int i = str.size() - 1; i >= 0; --i)
        if (str[i] != 'z')
        {
            str[i] += 1;
            return str;
        }

    str.append("a"); // Note: append function takes only string, not char
    return str;
}


// Driver code
int main()
{
    std::string str = "samfz";
    std::cout << NextWord(str) << std::endl;
    return 0;
}