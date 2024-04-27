/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* ���ϸ�: 10814.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-04-27
* ���� ���� �ۼ� ����:
* ���� ����: 10814 - ���̼� ����
* ���� ���� ����:
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