/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10871.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 10871 - X보다 작은 수
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
    int size;
    int max;
    int input;

    vector<int> ivec;

    cin >> size >> max;

    for (int i = 0; i != size; ++i)
    {
        cin >> input;
        ivec.push_back(input);
    }

    for (auto i : ivec)
        if (i < max)
            cout << i << " ";
    return 0;
}