/*
* Coding Test - Baekjoon
* 파일명: 10989.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-21
* 이전 버전 작성 일자:
* 버전 내용: 10989 - 수 정렬하기 3
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

constexpr int NUM_MAX = 10001;

int main()
{
	int n;
	int input;

	scanf("%d", &n);

	int uarr[NUM_MAX] = { 0, };

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &input);
		++uarr[input];
	}

	for (int i = 1; i < NUM_MAX; ++i)
	{
		for (int j = 0; j < uarr[i]; ++j)
			printf("%d\n", i);
	}

	return 0;
}