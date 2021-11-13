// Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using
// the information given below, determine the number of applesand oranges that land on Sam's
// house.



// In the diagram below :

    //       Apple Tree                       Orange Tree
    //          **                                 **
    //        ******                             ******
    //          **                                 **
    //          |                                   |
    //          a                                   b
    //    <---- d ------>  s <----------> t   <---- d ------>
    //       -      +          House            -         +



// The region s <--> t  denotes the house, where  is the start point, and is the endpoint.The
// apple tree is to the left of the house, and the orange tree is to its right.
// Assume the trees are located on a single point, where the apple tree is at point,
// and the orange tree is at point .
// When a fruit falls from its tree, it lands  units of distance from its tree of origin
// along the - axis. * A negative value of  means the fruit fell  units to the tree's left,
// and a positive value of  means it falls  units to the tree's right. *

// Given the value of  for  apples and oranges, determine how many applesand oranges will
// fall on Sam's house (i.e., in the inclusive range )?





























#include <iostream>
#include <vector>
using namespace std;

/*
 *Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    // Complete the function
}

int main()
{

    int s = 7;
    int t = 11;

    int a = 5;
    int b = 15;

    vector<int> apples{ -2, 2, 1 };
    vector<int> oranges{ 5, -6 };

    countApplesAndOranges(s, t, a, b, apples, oranges); // Answer: 1 apple, 1 orange

    return 0;
}



















/*
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int nApples = 0,
        nOranges = 0;
    for (auto i : apples)
    {
        if (i + a >= s && i + a <= t)
            nApples++;
    }
    for (auto i : oranges)
    {
        if (i + b >= s && i + b <= t)
            nOranges++;
    }
    cout << nApples << endl;
    cout << nOranges << endl;
}
*/
