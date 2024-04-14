/*
* Coding Test - Baekjoon
* 파일명: 10809.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-15
* 이전 버전 작성 일자:
* 버전 내용: 10809 - 알파벳 찾기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <cstring>

void AlphabetCounter(const string &str)
{
	char counter[26];

	memset(counter, -1, sizeof(counter));

	for (int idx = 0; idx != str.length(); ++idx)
	{
		for (char i = 'a'; i <= 'z'; ++i)
		{
			if ((counter[i % 'a'] == -1) && (str[idx] == i))
			{
				counter[i % 'a'] = idx;
				break;
			}
		}
	}

	for (int i = 0; i != sizeof(counter) / sizeof(char); ++i)
		printf("%d ", counter[i]);
}

int main()
{
	string str;

	cin >> str;

	AlphabetCounter(str);

	return 0;
}