/*
* Coding Test - LeetCode
* ���ϸ�: Solution.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-05-24
* ���� ���� �ۼ� ����:
* ���� ����: 1.Two Sum
* ���� ���� ����:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> iVec;

        for (int i = 0; i != nums.size(); ++i)
        {
            for (int j = i + 1; j != nums.size(); ++j)
            {
                if (target == (nums[i] + nums[j]))
                {
                    iVec.push_back(i);
                    iVec.push_back(j);
                    return iVec;
                }
            }
        }
        return iVec;
    }
};