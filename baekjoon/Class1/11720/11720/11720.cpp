/*
* Coding Test - Baekjoon (solved.ac - Class1)
* 파일명: 11720.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-03
* 이전 버전 작성 일자:
* 버전 내용: 11720 - 숫자의 합
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

int main()
{
	int cnt{ 0 };
	string input_str;
	int result{ 0 };

	cin >> cnt;
	cin >> input_str;

	for (int i = 0; i != cnt; ++i)
	{
		result += (input_str[i] - '0');
	}

	cout << result;

	return 0;
}