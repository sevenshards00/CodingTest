/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 11654.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-31
* 이전 버전 작성 일자:
* 버전 내용: 15964 - 이상한 기호
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	long long a;
	long long b;

	cin >> a >> b;

	cout << (a + b) * (a - b) << '\n';

	return 0;
}