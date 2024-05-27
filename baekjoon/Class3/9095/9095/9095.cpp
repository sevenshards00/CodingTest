/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 9095.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-27
* 이전 버전 작성 일자:
* 버전 내용: 9095 - 1,2,3 더하기
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

constexpr int MAX_LEN = 11;

int g_Arr[MAX_LEN] = { 0, 1, 2, 4, };

int DP(const int &input)
{
	if (input < 4)
		return g_Arr[input];
	else
	{
		if (0 != g_Arr[input])
			return g_Arr[input];

		for (int i = 4; i <= input; ++i)
			g_Arr[i] = g_Arr[i - 1] + g_Arr[i - 2] + g_Arr[i - 3];

		return g_Arr[input];
	}
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i != t; ++i)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", DP(n));
	}

	return 0;
}