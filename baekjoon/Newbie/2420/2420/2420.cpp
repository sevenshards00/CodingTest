/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2420.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 2420 - 사파리월드
* 이전 버전 내용:
*/

#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;

int main()
{
    long long a;
    long long b;

    cin >> a >> b;
    cout << std::abs(a - b); // 두 값의 차를 절대값으로 구해서 출력 (C++ 라이브러리의 abs())
    return 0;
}