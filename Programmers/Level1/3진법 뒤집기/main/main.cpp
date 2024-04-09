/*
* Coding Test - Programmers
* 파일명: main.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-09
* 이전 버전 작성 일자:
* 버전 내용: Level1 - 3진법 뒤집기
* 이전 버전 내용:
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;
    vector<int> temp;

    while (n != 0)
    {
        temp.push_back(n % 3);
        n /= 3;
        ++cnt;
    }

    auto iter = temp.begin();

    while (iter != temp.end())
    {
        int temp_result = 0;
        temp_result = *iter;
        for (int i = 0; i != cnt - 1; ++i)
            temp_result *= 3;
        n += temp_result;
        --cnt;
        ++iter;
    }


    return n;
}

int main()
{
    std::cout << solution(45);
}