/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1436.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-01
* 이전 버전 작성 일자:
* 버전 내용: 1436 - 영화감독 숌
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int SPECIFIC_NUM = 666;

void CalcMovieTitle(int n)
{
	int title = 0;
	int cnt = 0;
	int temp;

	while (n != cnt)
	{
		++title;
		temp = title;

		while (0 != temp)
		{
			if (SPECIFIC_NUM == temp % 1000)
			{
				++cnt;
				break;
			}
			else
				temp /= 10;
		}
	}

	cout << title << '\n';
}

int main()
{
	int input;
	cin >> input;
	CalcMovieTitle(input);

	return 0;
}