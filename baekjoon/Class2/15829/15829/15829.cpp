/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 15829.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-29
* 이전 버전 작성 일자:
* 버전 내용: 15829 - Hashing
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <cstring>

constexpr int r = 31;
constexpr long long M = 1234567891;

long long RmodM(int input)
{
	long long ri = 1;
	for (int i = 0; i != input; ++i)
	{
		ri *= r;
		ri = ri % M;
	}

	return ri;
}

void Hashing(const char *str)
{
	int len = strlen(str);
	long long ri = 1;
	long long hash_value = 0;

	for (int i = 0; i != len; ++i)
		hash_value += (str[i] - '`') % M * RmodM(i);

	hash_value = hash_value % M;

	cout << hash_value << '\n';
}

int main()
{
	int l;
	cin >> l;

	char *input_str = new char[l + 1];

	cin >> input_str;

	Hashing(input_str);

	return 0;
}