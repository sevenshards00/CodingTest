/*
* Coding Test - Baekjoon (solved.ac - Class1)
* 파일명: 2675.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-03
* 이전 버전 작성 일자:
* 버전 내용: 2675 - 문자열 반복
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

int main()
{
	unsigned t_cnt{ 0 };
	unsigned r_cnt{ 0 };
	string input;
	cin >> t_cnt;

	while (t_cnt--)
	{
		cin >> r_cnt >> input;

		for (int i = 0; i != input.length(); ++i)
			for (int j = 0; j != r_cnt; ++j)
				cout << input[i];

		cout << '\n';
	}

	return 0;
}