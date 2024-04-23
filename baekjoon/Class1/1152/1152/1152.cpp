/*
* Coding Test - Baekjoon
* 파일명: 1152.cpp
* 파일 버전: 0.11
* 작성자: Sevenshards
* 작성 일자: 2024-04-09
* 이전 버전 작성 일자: 2024-04-09
* 버전 내용: 로직 수정
* 이전 버전 내용: 1152 - 단어의 개수
*/

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
using std::getline;

int main()
{
	string str;
	int wordCnt = 0;

	getline(cin, str);

	// 첫 번째 문자가 공백만 들어오고 그 뒤로 아무 것도 없는 경우만 체크
	if (str.length() == 1 && str[0] == ' ')
	{
		cout << wordCnt;
		return 0;
	}

	// 그게 아니면 최소 한 단어는 있는 것이므로 증가
	++wordCnt;

	for (int i = 1; i < str.length() - 1; i++)
	{
		if (str[i] == ' ')
			++wordCnt;
	}
		
	cout << wordCnt;

	// 다른 풀이
	// 바로 확 와닿는 풀이는 아님. 꼼수에 가까움
	/*while (cin >> str)
		++wordCnt;

	cout << wordCnt;*/

	return 0;
}