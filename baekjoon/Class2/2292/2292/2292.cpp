/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2292.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-25
* 이전 버전 작성 일자:
* 버전 내용: 2292 - 벌집
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int MULTIPLIER = 6;

int main()
{
	int n;

	cin >> n;

	int cnt =  1;
	int bound = 1;
	int index = 0;
	
	while (true)
	{
		if (n <= bound)
			break;

		++cnt;
		++index;
		bound += index * MULTIPLIER;
	}

	cout << cnt << '\n';

	return 0;
}