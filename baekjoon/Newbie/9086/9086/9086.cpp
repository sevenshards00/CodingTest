/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 9086.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-02
* 이전 버전 작성 일자:
* 버전 내용: 9086 - 문자열
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <vector>
using std::vector;

int main()
{
	unsigned testCnt;
	string inputStr;
	string outputStr;
	vector<string> strVec;

	cin >> testCnt;
	for (int i = 0; i != testCnt; ++i)
	{
		cin >> inputStr;
		strVec.push_back(inputStr);
	}

	for (auto &i : strVec)
	{
		cout << *(i.begin()) << *(i.rbegin()) << '\n';
	}
	return 0;
}