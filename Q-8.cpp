// // Given 2D array, 1 represents Land, and 0 represents Water.Print the Sizes of all Lands


// Input
//         0 0 1 1 1 0 1
//         0 0 0 0 1 0 0
//         1 0 0 1 0 1 1
//         0 0 1 1 1 1 0
//         1 1 0 0 0 0 1
//         0 0 1 0 1 1 1
//         0 0 1 0 0 1 1

//should return
// 4 1 1 7 2 6 2







#include <iostream>
#include <vector>
#include <algorithm>

struct Vector2D
{
    int x, y;

    Vector2D(int x, int y)
        : x(x), y(y)
    {
    }

    bool operator==(const Vector2D& other) const
    {
        return x == other.x && y == other.y;
    }
};


bool isVisited(std::vector<Vector2D>& v, Vector2D value)
{
    return std::find(v.begin(), v.end(), value) != v.end();
}

std::vector<Vector2D> s_VisitedNodes;



void VisitNextNodes(int Matrix[7][7], int XIndex, int YIndex, int& Size)
{
    if (Matrix[XIndex][YIndex] == 0)
        return;

    Size++;
    s_VisitedNodes.emplace_back(XIndex, YIndex);



    if (YIndex + 1 < 7 && Matrix[XIndex][YIndex + 1] == 1 && !isVisited(s_VisitedNodes, { XIndex, YIndex + 1 }))
        VisitNextNodes(Matrix, XIndex, YIndex + 1, Size);

    if (XIndex + 1 < 7 && Matrix[XIndex + 1][YIndex] == 1 && !isVisited(s_VisitedNodes, { XIndex + 1, YIndex }))
        VisitNextNodes(Matrix, XIndex + 1, YIndex, Size);

    if (YIndex - 1 >= 0 && Matrix[XIndex][YIndex - 1] == 1 && !isVisited(s_VisitedNodes, { XIndex, YIndex - 1 }))
        VisitNextNodes(Matrix, XIndex, YIndex - 1, Size);

    if (XIndex - 1 >= 0 && Matrix[XIndex - 1][YIndex] == 1 && !isVisited(s_VisitedNodes, { XIndex - 1, YIndex }))
        VisitNextNodes(Matrix, XIndex - 1, YIndex, Size);

}




std::vector<int> GetMatrixLandSizes(int Matrix[7][7])
{
    std::vector<int> outSizes;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {

            if (Matrix[i][j] == 0 || isVisited(s_VisitedNodes, { i, j }))
                continue;

            int Size = 0;

            VisitNextNodes(Matrix, i, j, Size);

            outSizes.push_back(Size);

        }
    }

    return outSizes;
}





int main()
{
    int Matrix[7][7] = {
        { 0, 0, 1, 1, 1, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 0 },
        { 1, 0, 0, 1, 0, 1, 1 },
        { 0, 0, 1, 1, 1, 1, 0 },
        { 1, 1, 0, 0, 0, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1 }
    };


    std::vector<int> Sizes = GetMatrixLandSizes(Matrix);

    for (auto i : Sizes)
        std::cout << i << " " << std::endl;


}