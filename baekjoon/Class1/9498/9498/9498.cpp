/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 9498.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 9498 - 시험 성적
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned result;
    cin >> result;
    if (result >= 90 && result <= 100)
        cout << 'A';
    else if (result >= 80 && result <= 89)
        cout << 'B';
    else if (result >= 70 && result <= 79)
        cout << 'C';
    else if (result >= 60 && result <= 69)
        cout << 'D';
    else
        cout << 'F';
    return 0;
}