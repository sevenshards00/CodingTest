/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1463.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-10
* 이전 버전 작성 일자:
* 버전 내용: 1463 - 1로 만들기
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
using std::min;

constexpr int ARR_LEN = 1000001;

int g_iArr[ARR_LEN];

int CalcCnt(const int &x)
{
	for (int i = 2; i <= x; ++i)
	{
		g_iArr[i] = g_iArr[i - 1] + 1;

		if (i % 2 == 0)
			g_iArr[i] = min(g_iArr[i], g_iArr[i / 2] + 1);

		if (i % 3 == 0)
			g_iArr[i] = min(g_iArr[i], g_iArr[i / 3] + 1);
	}

	return g_iArr[x];
}

int main()
{
	int n;
	int cnt;

	scanf("%d", &n);

	cnt = CalcCnt(n);

	printf("%d\n", cnt);
	return 0;
}