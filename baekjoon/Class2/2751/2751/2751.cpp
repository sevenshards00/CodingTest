/*
* Coding Test - Baekjoon
* 파일명: 2751.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-22
* 이전 버전 작성 일자:
* 버전 내용: 2751 - 수 정렬하기 2
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <set>
using std::set;

void Sorting(int n)
{
	set<int> iSet;
	int input;

	for (int i = 0; i != n; ++i)
	{
		cin >> input;
		iSet.insert(input);
	}

	for (auto &iter : iSet)
		cout << iter << '\n';
}

int main()
{
	int n;

	cin >> n;
	Sorting(n);

	return 0;
}