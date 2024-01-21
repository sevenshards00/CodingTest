/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2753.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 2753 - 윤년
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int year;
    cin >> year;

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        cout << 1;
    else
        cout << 0;

    return 0;
}