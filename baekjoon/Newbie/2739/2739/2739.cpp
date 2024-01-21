/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2739.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 2739 - 구구단
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int input;

    cin >> input;

    for (int i = 1; i != 10; ++i)
        cout << input << " * " << i << " = " << input * i << '\n';

    return 0;
}