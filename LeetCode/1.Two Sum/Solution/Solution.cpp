/*
* Coding Test - LeetCode
* 파일명: Solution.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-24
* 이전 버전 작성 일자:
* 버전 내용: 1.Two Sum
* 이전 버전 내용:
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