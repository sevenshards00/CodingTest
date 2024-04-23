/*
* Coding Test - Baekjoon
* 파일명: 3052.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-17
* 이전 버전 작성 일자:
* 버전 내용: 3052 - 나머지
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int REMAINDER = 42;

int main()
{
	unsigned input;
	unsigned remainder[REMAINDER] = { 0, };
	unsigned result = 0;

	for (int i = 0; i != 10; ++i)
	{
		cin >> input;
		++remainder[input % 42];
	}

	for (int i = 0; i != REMAINDER; ++i)
	{
		if (0 != remainder[i])
			++result;
	}
		
	cout << result << '\n';

	return 0;
}