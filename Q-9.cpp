// Find the number of Ways to get Given number, using the given numbers

// You will be given n, the number what you have to struggle for
// you will be an array having the numbers you can use

// Input
// n = 10
// c = { 2, 5, 3, 6 }

// Output
// 5


// Explaination
// You can use only the numbers given the c, to get n
// 2 + 2 + 2 + 2 + 2 = 10
// 2 + 2 + 3 + 3 = 10
// 2 + 2 + 6 = 10
// 2 + 5 + 3 = 10
// 5 + 5 = 10








#include <iostream>
#include <vector>

using namespace std;

int total = 0;
void Recurse(vector<long>& c, long n, long inSum, int currIndex)
{
    for (int i = currIndex; i < c.size(); i++)
    {
        if (inSum + c[i] == n)
        {
            total += 1;
        }

        else if (inSum + c[i] < n)
            Recurse(c, n, inSum + c[i], i);
    }
}

long getWays(int n, vector<long> c) {

    long Sum = 0;
    int currIndex = 0;

    Recurse(c, (long) n, Sum, currIndex);

    return (long) total;
}


int main()
{
    std::cout << getWays(10, { 2, 5, 3, 6 });
}