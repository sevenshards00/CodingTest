/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 27866.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-02
* 이전 버전 작성 일자:
* 버전 내용: 27866 - 문자와 문자열
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
	string inputStr;
	unsigned strIdx;

	cin >> inputStr;
	cin >> strIdx;

	cout << inputStr[strIdx - 1];

	return 0;
}