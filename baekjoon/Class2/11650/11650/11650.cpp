/*
* Coding Test - Baekjoon
* 파일명: 11650.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-22
* 이전 버전 작성 일자:
* 버전 내용: 11650 - 좌표 정렬하기
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

#include <set>
using std::set;
using std::pair;

#include <utility>
using std::make_pair;

void Sorting(int n)
{
	set<pair<int, int>> iSet;
	int x;
	int y;

	for (int i = 0; i != n; ++i)
	{
		cin >> x >> y;
		iSet.insert(make_pair(x, y));
	}

	for (auto &iter : iSet)
		cout << iter.first << ' ' << iter.second << '\n';
}

int main()
{
	int n;

	cin >> n;
	Sorting(n);

	return 0;
}