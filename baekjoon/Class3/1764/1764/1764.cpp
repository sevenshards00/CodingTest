/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1764.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-20
* 이전 버전 작성 일자:
* 버전 내용: 1764 - 듣보잡
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <set>
using std::set;
using std::pair;

#include <cstring>
struct CompStr
{
	bool operator()(const string &lhs, const string &rhs) const
	{
		return lhs < rhs;
	}
};


void FindList(const int &n, const int &m)
{
	set<string, CompStr> strSet1;
	set<string, CompStr> strSet2;
	set<string, CompStr> resultSet;

	for (int i = 0; i != n; ++i)
	{
		string inputStr;
		cin >> inputStr;
		strSet1.insert(inputStr);
	}

	for (int i = 0; i != m; ++i)
	{
		string inputStr;
		cin >> inputStr;
		strSet2.insert(inputStr);
	}

	auto iter = strSet1.begin();

	while (iter != strSet1.cend())
	{
		if (strSet2.find(*iter) != strSet2.cend())
			resultSet.insert(*iter);
		++iter;
	}

	iter = resultSet.begin();

	cout << resultSet.size() << '\n';
	while (iter != resultSet.cend())
	{
		cout << *iter++ << '\n';
	}
}

int main()
{
	int n;
	int m;

	cin >> n >> m;
	FindList(n, m);

	return 0;
}