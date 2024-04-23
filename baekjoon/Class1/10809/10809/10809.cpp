/*
* Coding Test - Baekjoon
* 파일명: 10809.cpp
* 파일 버전: 0.11
* 작성자: Sevenshards
* 작성 일자: 2024-04-15
* 이전 버전 작성 일자: 2024-04-15
* 버전 내용: 로직 개선
* 이전 버전 내용: 10809 - 알파벳 찾기
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

void AlphabetCounter(const string &str)
{
	for (char i = 'a'; i <= 'z'; ++i)
		cout << static_cast<int>(str.find(i)) << ' ';
}

int main()
{
	string str;

	cin >> str;

	AlphabetCounter(str);

	return 0;
}