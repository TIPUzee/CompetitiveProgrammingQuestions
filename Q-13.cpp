//The Knight Tour Problem





#include <iostream>
#include <tuple>
#include <memory.h>
#include <vector>
#include <iomanip>
#include <algorithm>


using namespace std;


class ChessBoard
{
private:

    int** m_Visited;
    size_t m_Order;
    int m_xMove[8] = { -1, +1, -2, +2, -2, +2, -1, +1 };
    int m_yMove[8] = { -2, -2, -1, -1, +1, +1, +2, +2 };
    int m_Count;
    std::vector<std::pair<int, int>> m_WayPoints;



public:
    void KnightTour(size_t Order, std::pair<size_t, size_t> StartPoints)
    {
        m_Order = Order;
        m_Count = 1;
        // Allocating Memory and initializing with "false"
        m_Visited = new int* [Order];
        for (size_t i = 0; i < Order; ++i)
        {
            m_Visited[i] = new int[Order];
            memset(m_Visited[i], 0, Order * 4);
        }

        m_Visited[StartPoints.first][StartPoints.second] = 1;

        if (!ChessBoard::SolutionInternal(StartPoints))
            std::cout << "Cannot find the Solution" << endl;
        else
            ChessBoard::PrintRoadMap();
        cout << "\nCount: " << m_Count << endl;
    }

    bool isValidMove(int x, int y)
    {
        if (x < 0 || x >= m_Order || y < 0 || y >= m_Order)
            return false;
        return true;
    }


    bool SolutionInternal(std::pair<int, int> currPoint)
    {
        if (m_Count == m_Order * m_Order)
        {
            return true;
        }

        for (int i = 0; i < 8; ++i)
        {
            int x = m_xMove[i] + currPoint.first;
            int y = m_yMove[i] + currPoint.second;

            if (isValidMove(x, y) &&
                !m_Visited[x][y])
            {
                m_Count++;
                m_Visited[x][y] = m_Count;

                if (SolutionInternal({ x, y }))
                    return true;

                m_Count--;
                m_Visited[x][y] = 0;
            }
        }

        return false;
    }


    void PrintRoadMap()
    {
        for (int i = 0; i < m_Order; i++)
        {
            for (int j = 0; j < m_Order; j++)
            {
                std::cout << std::setw(3) << m_Visited[i][j];
            }
            std::cout << "\n";
        }
    }
};



int main()
{
    ChessBoard board;
    board.KnightTour(5, { 0, 0 });
}