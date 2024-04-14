/*
* Coding Test - Baekjoon
* 파일명: 8958.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-15
* 이전 버전 작성 일자:
* 버전 내용: 로직 개선
* 이전 버전 내용: 8958 - OX 퀴즈
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

void calc()
{
	string str;

	int score = 1;
	int result = 0;

	cin >> str;

	for (int i = 0; i != str.length(); ++i)
	{
		if ('O' == str[i])
		{
			result += score;
			score++;
		}
		else
			score = 1;
	}

	cout << result << '\n';
}

int main()
{
	
	int cnt;

	cin >> cnt;

	for (int i = 0; i != cnt; ++i)
		calc();

	return 0;
}