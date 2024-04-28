/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1181.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-28
* 이전 버전 작성 일자:
* 버전 내용: 1181 - 단어 정렬
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <algorithm>
using std::sort;

int Compare(const string &a, const string &b)
{
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main()
{
	int n;
	string *word_arr = nullptr;
	
	cin >> n;
	word_arr = new string[n];

	for (int i = 0; i < n; ++i)
		cin >> word_arr[i];

	sort(word_arr, word_arr + n, Compare);

	cout << word_arr[0] << '\n';

	for (int i = 1; i < n; ++i)
	{
		if (word_arr[i] == word_arr[i - 1])
			continue;

		cout << word_arr[i] << '\n';
	}
	
	delete[] word_arr;
	return 0;
}