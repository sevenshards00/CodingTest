/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2439.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-03
* 이전 버전 작성 일자:
* 버전 내용: 2439 - 별 찍기(2)
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int cnt{ 0 };
	cin >> cnt;

	for (int i = 0; i != cnt; ++i)
	{
		for (int j = 0; j != cnt - i - 1; ++j)
			cout << ' ';
		for (int j = 0; j != i + 1; ++j)
			cout << '*';

		cout << '\n';
	}

	return 0;
}