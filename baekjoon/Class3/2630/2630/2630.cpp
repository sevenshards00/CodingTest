/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 2630.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-28
* 이전 버전 작성 일자:
* 버전 내용: 2630 - 색종이 만들기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <cstring>

constexpr int MAX_LEN = 128;

bool g_bTable[MAX_LEN][MAX_LEN];
int g_White;
int g_Blue;

void Divide(const int &ref_x, const int &ref_y, const int &size)
{
	int blueCnt = 0;

	for (int i = ref_x; i != ref_x + size; ++i)
	{
		for (int j = ref_y; j != ref_y + size; ++j)
		{
			if (g_bTable[i][j])
			{
				blueCnt++;
			}
		}
	}

	if (0 == blueCnt)
		++g_White;
	else if (size * size == blueCnt)
		++g_Blue;
	else
	{
		Divide(ref_x, ref_y, size / 2);								// 좌 상단
		Divide(ref_x + size / 2, ref_y, size / 2);					// 우 상단
		Divide(ref_x, ref_y + size / 2, size / 2);					// 좌 하단
		Divide(ref_x + size / 2, ref_y + size / 2, size / 2);		// 우 하단
	}

	return;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i != n; ++i)
	{
		for (int j = 0; j != n; ++j)
			cin >> g_bTable[i][j];
	}

	Divide(0, 0, n);

	cout << g_White << '\n';
	cout << g_Blue << '\n';

	return 0;
}