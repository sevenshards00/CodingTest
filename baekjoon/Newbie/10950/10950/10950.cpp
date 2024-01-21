/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10950.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 10950 - A + B - (3)
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    unsigned case_num;
    unsigned a;
    unsigned b;

    cin >> case_num;
    for (unsigned i = 0; i != case_num; ++i)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}