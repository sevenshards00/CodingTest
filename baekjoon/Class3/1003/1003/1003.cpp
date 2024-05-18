/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1003.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-18
* 이전 버전 작성 일자:
* 버전 내용: 1003 - 피보나치 함수
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
using std::pair;

constexpr int MAX_LEN = 40;

pair<int, int> g_FiboCnt[MAX_LEN] = {
	{1, 0},
	{0, 1},
};

void CountFibo(const int &input)
{
	if (0 == input)
	{
		printf("%d %d\n", g_FiboCnt[0].first, g_FiboCnt[0].second);
		return;
	}
	
	if ((0 != g_FiboCnt[input].first) && (0 != g_FiboCnt[input].second))
	{
		printf("%d %d\n", g_FiboCnt[input].first, g_FiboCnt[input].second);
		return;
	}

	for (int i = 2; i <= input; ++i)
	{
		g_FiboCnt[i].first = g_FiboCnt[i - 1].first + g_FiboCnt[i - 2].first;
		g_FiboCnt[i].second = g_FiboCnt[i - 1].second + g_FiboCnt[i - 2].second;
	}

	printf("%d %d\n", g_FiboCnt[input].first, g_FiboCnt[input].second);
}

int main()
{
	int T;
	int n;
	scanf("%d", &T);

	for (int i = 0; i != T; ++i)
	{
		scanf("%d", &n);
		CountFibo(n);
	}
	
	return 0;
}