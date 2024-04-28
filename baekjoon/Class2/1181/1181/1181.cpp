/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* ���ϸ�: 1181.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-04-28
* ���� ���� �ۼ� ����:
* ���� ����: 1181 - �ܾ� ����
* ���� ���� ����:
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