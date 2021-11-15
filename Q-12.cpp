// Given Points on Cartesian Coordinate System, Count the number of Ways to Get Rectangles (tilted also).

// Note:
// You should first know the way how to check that if Two lines are making Rectangles or not
// Distance formula
// Second formulay ka nam nai ata, sachi, xD (Sum of two sides' lengths should be equal to Diagonal)

// Input Method:
// You will be given Points as Vector of Pair of int and int denoting xand y coordinates respectively

// Return Method :
// long: Return the number of ways to get Rectangles in the coordinate system (tilted Rectangles are also counted).

// Complete CountRect() function

// Example :
// Input :

//     (1, 1)           (1, 5)     (1, 8)

//     (3, 1)           (3, 5)     (3, 8)

//     (5, 1)           (5, 5)     (5, 8)

// Output:

// Please check the Last output specialy
// 10

//     .       .       .
//     .       .       .
//     .       .       .

//     there are 10 ways to get Rectangles



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



//     10:
//     .       *       .
//     *       .       *
//     .       *       .



// Note:
// Please understand the 10th output, tilted Rectangles are also counted

























// vector<pair<int, int>> Points1 = {
//     { 1, 1 }, { 1, 2 }, { 1, 3 }, { 1, 4 },
//     { 2, 1 }, { 2, 2 }, { 2, 3 }, { 2, 4 },
//     { 3, 1 }, { 3, 2 }, { 3, 3 }, { 3, 4 },
//     { 4, 1 }, { 4, 2 }, { 4, 3 }, { 4, 4 }
// };




#include <iostream>
#include <tuple>
#include <vector>
#include <math.h>

using namespace std;


long CountRect(vector<pair<int, int>>& Points) {
    // Complete the function
}

int main()
{
    vector<pair<int, int>> Points1 = {
        { 1, 1 }, { 1, 2 }, { 1, 3 }, { 1, 4 },

        { 2, 1 }, { 2, 2 }, { 2, 3 }, { 2, 4 },

        { 3, 1 }, { 3, 2 }, { 3, 3 },

        { 4, 1 }, { 4, 2 }, { 4, 3 }
    };

    cout << "Expected: 26" << endl;
    int firstAnswer = CountRect(Points1);
    cout << "Your output: " << firstAnswer << endl;;

}





































/*
long CountRect(vector<pair<int, int>>& Points)
{

    long Count = 0;

    for (auto A = Points.begin(); A != Points.end(); A++)
    {
        for (auto B = A + 1; B != Points.end(); B++)
        {

            // Calculate Length through Distance formula
            float AB = pow(B->first - A->first, 2) + pow(B->second - A->second, 2);

            for (auto C = B + 1; C != Points.end(); C++)
            {

                for (auto D = C + 1; D != Points.end(); D++)
                {

                    // Calculate Length through Distance formula
                    float CD = pow(D->first - C->first, 2) + pow(D->second - C->second, 2);

                    if (CD != AB)
                        continue;

                    // Calculate Diagonal through Distance formula
                    float BC = pow(C->first - B->first, 2) + pow(C->second - B->second, 2);

                    // Calculate Length through Distance formula
                    float AC = pow(C->first - A->first, 2) + pow(C->second - A->second, 2);
                    float BD = pow(D->first - B->first, 2) + pow(D->second - B->second, 2);

                    // Sum of two contigious Sides lengths, should be equal to length of Diagonal
                    // for first two sides
                    if (BC != AC + AB)
                        continue;

                    // for second two sides
                    if (BC != BD + CD)
                        continue;

                    // To check which points are making Rectangles
                    //printf("(%d, %d), (%d, %d), (%d, %d), (%d, %d)\n", A->first, A->second, B->first, B->second, C->first, C->second, D->first, D->second);

                    Count++;
                }
            }
        }
    }

    return Count;
}

*/