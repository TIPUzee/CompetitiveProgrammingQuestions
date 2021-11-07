
#include <bits/stdc++.h>
#include <iostream>
#include <vector>


// Minimum value to be added at each level in Binary Tree to make all level sum equal

// Given a binary tree, the task is to find all minimum values greater than or
// equal to zero, that should be added at each level to make the sum at each level equal.

// Input:
//          1
//        /    \
//      2        3
//     /  \     
//    4     5  
// Output: 8 4 0
// Explanation: Initial sum at each level is {1, 5, 9}. To make all levels sum equal minimum 
// values to be added are {8, 4, 0}. So the final sums at each level becomes {1 + 8, 5 + 4, 9 + 0} i.e. {9, 9, 9}.





// Given Problem Below

// Input:
//              8
//           /    \
//         3       10
//      /  \         \
//     1    6         14 
//        /  \        /
//      4    7      13
// Output: 16 11 3 0




// Node class
class Node {
public:
    int data;
    Node* left, * right;
    Node(int item)
    {
        data = item;
        left = right = NULL;
    }
};



void GetSumOfLevels(Node* node, std::vector<int>& outSum, int currLevel)
{
    if (!node)
        return;

    if (outSum.size() <= currLevel)
        outSum.push_back(node->data);
    else
        outSum[currLevel] += node->data;

    GetSumOfLevels(node->left, outSum, currLevel + 1);

    GetSumOfLevels(node->right, outSum, currLevel + 1);

}


std::vector<int> GetAbsoluteSum(const std::vector<int>& sumList)
{
    auto HighestLevel = std::max_element(sumList.begin(), sumList.end(), [](int a, int b) { return a < b; });

    std::vector<int> outSums;
    for (auto i : sumList)
    {
        if (i == *HighestLevel)
            outSums.push_back(0);
        else
            outSums.push_back(*HighestLevel - i);
    }
    return outSums;
}


// Driver Code
int main()
{
    Node* root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->left->right = new Node(6);
    root->right->right = new Node(14);
    root->left->right->left = new Node(4);
    root->left->right->right = new Node(7);
    root->right->right->left = new Node(13);

    std::vector<int> List;
    GetSumOfLevels(root, List, 0);

    auto ReqList = GetAbsoluteSum(List);

    for (auto i : ReqList)
    {
        std::cout << i << " ";
    }

}