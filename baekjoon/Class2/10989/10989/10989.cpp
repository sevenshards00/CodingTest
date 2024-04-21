/*
* Coding Test - Baekjoon
* ���ϸ�: 10989.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-04-21
* ���� ���� �ۼ� ����:
* ���� ����: 10989 - �� �����ϱ� 3
* ���� ���� ����:
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