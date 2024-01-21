/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2438.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 2438 - 별 찍기 - 1
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    unsigned input;

    cin >> input;

    for (unsigned i = 0; i != input; ++i)
    {
        for (unsigned j = 0; j != i + 1; ++j)
            cout << '*';
        cout << '\n';
    }
    return 0;
}