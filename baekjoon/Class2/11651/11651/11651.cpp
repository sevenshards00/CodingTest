/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 11651.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-24
* 이전 버전 작성 일자:
* 버전 내용: 11651 - 좌표 정렬하기 2
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

#include <set>
using std::pair;

#include <utility>
using std::make_pair;

#include <algorithm>
using std::sort;

#include <vector>
using std::vector;

bool compare(pair<int, int> point1, pair<int, int> point2)
{
	if (point1.second == point2.second)
		return point2.first > point1.first;
	else
		return point2.second > point1.second;
}

void Sorting(int n)
{
	vector<pair<int, int>> pVec;
	int x;
	int y;

	for (int i = 0; i != n; ++i)
	{
		cin >> x >> y;
		pVec.push_back(make_pair(x, y));
	}

	sort(pVec.begin(), pVec.end(), compare);

	for (auto &iter : pVec)
		cout << iter.first << ' ' << iter.second << '\n';
}

int main()
{
	int n;

	cin >> n;
	Sorting(n);

	return 0;
}