/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 1001.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 1001 - A - B
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int a;
	int b;

	cin >> a >> b;
	if (a > 0 && b < 10)
		cout << a - b;
	else
		cin >> a >> b;

	return 0;
}