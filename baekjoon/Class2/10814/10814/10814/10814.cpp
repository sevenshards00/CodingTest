/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 10814.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-27
* 이전 버전 작성 일자:
* 버전 내용: 10814 - 나이순 정렬
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <algorithm>
using std::sort;

struct st_Person
{
	int m_age;
	int m_idx;
	string m_name;
};

bool Compare(const st_Person &a, const st_Person &b)
{
	if (a.m_age != b.m_age)
		return a.m_age < b.m_age;

	return a.m_idx < b.m_idx;
}

int main()
{
	int n;
	cin >> n;
	st_Person *pPerson = new st_Person[n];

	for (int i = 0; i != n; ++i)
	{
		cin >> pPerson[i].m_age >> pPerson[i].m_name;
		pPerson[i].m_idx = i;
	}

	sort(pPerson, pPerson + n, Compare);

	for (int i = 0; i != n; ++i)
		cout << pPerson[i].m_age << ' ' << pPerson[i].m_name << '\n';

	return 0;
}