/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10952.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 10952 - A + B - (5)
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned a, b;
    do
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        cout << a + b << '\n';
    } while (true);

    return 0;
}