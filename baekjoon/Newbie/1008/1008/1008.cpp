/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 1008.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 1008 - A / B
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    double a, b;
    cin >> a >> b;
    cout.precision(10); // 소수점 자릿수 지정 -> 10자리까지 고정해서 출력하겠다.
    cout << a / b;
    return 0;
}