/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10807.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 10807 - 개수 세기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
	int input;
	int n;
	int v;
	int cnt = 0;
	vector<int> ivec;

	cin >> n;

	for (int i = 0; i != n; ++i)
	{
		cin >> input;
		ivec.push_back(input);
	}

	cin >> v;

	for (auto i : ivec)
		if (i == v)
			++cnt;

	cout << cnt;
	return 0;
}