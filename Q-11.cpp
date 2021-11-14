// Given Points on Cartesian Coordinate System, Count the number of Ways to Get Rectangles.


// Input Method:
// You will be given Points as Vector of Pair of int and int denoting xand y coordinates respectively

// Return Method :
// long: Return the number of ways to get Rectangles in the coordinate system as.

// Complete CountRect() function

// Example :
// Input :

//     (1, 1)           (1, 5)     (1, 8)

//     (3, 1)           (3, 5)     (3, 8)

//     (5, 1)           (5, 5)     (5, 8)

// Output:
// 9

//     .       .       .
//     .       .       .
//     .       .       .

//     there are 9 ways to get Rectangles



//     1:
//     *       *       .
//     *       *       .
//     .       .       .




//     2 :
//     *       .       *
//     *       .       *
//     .       .       .



//     3 :
//     *       *       .
//     .       .       .
//     *       *       .



//     4 :
//     *               *
//     .       .       .
//     *               *



//     5 :
//     .       *       *
//     .       *       *
//     .       .       .



//     6:
//     .       *       *
//     .       .       .
//     .       *       *



//     7:
//     .       .       .
//     *       *       .
//     *       *       .



//     8:
//     .       .       .
//     *       .       *
//     *       .       *



//     9:
//     .       .       .
//     .       *       *
//     .       *       *




//  Test Case :
//     .       .       .
//     .       .       .
//     .               .

// Answer:
//     5

































#include <iostream>
#include <tuple>
#include <vector>

using namespace std;


long CountRect(vector<pair<int, int>>& Points)
{

}

int main()
{
    vector<pair<int, int>> Points1 = {
        { 1, 1 }, { 1, 5 }, { 1, 7 },
        { 3, 1 }, { 3, 5 }, { 3, 7 },
        { 5, 1 }, { 5, 5 }, { 5, 7 }
    };

    cout << "Expected: 9" << endl;
    cout << "Your output: " << CountRect(Points1) << endl;


    vector<pair<int, int>> Points2 = {
        { 1, 1 }, { 1, 5 }, { 1, 7 },
        { 3, 1 }, { 3, 5 }, { 3, 7 },
        { 5, 1 },           { 5, 7 }
    };

    cout << "Expected: 5" << endl;
    cout << "Your output: " << CountRect(Points2) << endl;
}





















/*

long CountRect(vector<pair<int, int>>& Points)
{

    long Count = 0;

    for (auto P1 = Points.begin(); P1 != Points.end(); P1++)
    {
        for (auto P2 = P1 + 1; P2 != Points.end(); P2++)
        {
            if (P2->first != P1->first)
                continue;

            for (auto P3 = P2 + 1; P3 != Points.end(); P3++)
            {
                if (P3->second != P1->second)
                    continue;

                for (auto P4 = P2 + 1; P4 != Points.end(); P4++)
                {
                    if (P4->second == P2->second &&
                        P4->first == P3->first)
                    {
                        Count++;
                    }
                }
            }
        }
    }
    return Count;
}

*/