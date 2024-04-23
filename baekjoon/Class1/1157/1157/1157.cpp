/*
* Coding Test - Baekjoon
* 파일명: 1157.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-16
* 이전 버전 작성 일자:
* 버전 내용: 로직 수정
* 이전 버전 내용: 1157 - 단어 공부
*/

#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

void WordCount(const string &str)
{
	int cnt[26] = { 0, };
	int max = 0;
	char result;

	for (int i = 0; i != str.length(); ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			++cnt[str[i] - 'A'];

		if (str[i] >= 'a' && str[i] <= 'z')
			++cnt[str[i] - 'a'];
	}

	for (int i = 0; i != sizeof(cnt) / sizeof(int); ++i)
	{
		if (max == cnt[i])
			result = '?';

		else if (max < cnt[i])
		{
			max = cnt[i];
			result = 'A' + i;
		}
	}

	cout << result << '\n';
}

int main()
{
	string input;
	cin >> input;
	WordCount(input);

	return 0;
}