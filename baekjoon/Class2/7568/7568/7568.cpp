/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 7568.cpp
* 파일 버전: 0.11
* 작성자: Sevenshards
* 작성 일자: 2024-05-01
* 이전 버전 작성 일자: 2024-05-01
* 버전 내용: delete 추가
* 이전 버전 내용: 7568 - 덩치
*/

#include <iostream>
using std::cin;
using std::cout;

struct Person
{
	int m_Weight;
	int m_Height;
	int m_Rank;
};

int main()
{
	int n;
	cin >> n;

	Person *pPerson = new Person[n];
	for (int i = 0; i != n; ++i)
	{
		cin >> pPerson[i].m_Weight;
		cin >> pPerson[i].m_Height;
		pPerson[i].m_Rank = 1;
	}

	for (int i = 0; i != n; ++i)
	{
		for (int j = 0; j != n; ++j)
		{
			if (pPerson[i].m_Height < pPerson[j].m_Height && pPerson[i].m_Weight < pPerson[j].m_Weight)
				++pPerson[i].m_Rank;
		}
	}

	for (int i = 0; i != n; ++i)
		cout << pPerson[i].m_Rank << ' ';

	cout << '\n';
	delete[] pPerson;
	
	return 0;
}