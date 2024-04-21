/*
* Coding Test - Baekjoon
* 파일명: 4153.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-21
* 이전 버전 작성 일자:
* 버전 내용: 4153 - 직각삼각형
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	while (true)
	{
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		unsigned pow_a = a * a;
		unsigned pow_b = b * b;
		unsigned pow_c = c * c;

		if (pow_a + pow_b == pow_c || pow_a + pow_c == pow_b || pow_b + pow_c == pow_a)
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';

		
	}

	return 0;
}