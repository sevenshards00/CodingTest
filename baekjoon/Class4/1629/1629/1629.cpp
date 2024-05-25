/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 1629.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-25
* 이전 버전 작성 일자:
* 버전 내용: 1629 - 곱셈
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

long long Multiple(const int &a, const int &b, const int &c)
{
	if (b == 1)
		return a % c;

	long long output = Multiple(a, b / 2, c) % c;

	if (0 == b % 2)
		return output * output % c;
	else
		return output * output % c * a % c;
}

int main()
{
	int a;
	int b;
	int c;
	long long result;

	cin >> a >> b >> c;
	result = Multiple(a, b, c);
	cout << result << '\n';
	return 0;
}