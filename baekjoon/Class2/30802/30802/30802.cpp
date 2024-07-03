/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 30802.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-07-03
* 이전 버전 작성 일자:
* 버전 내용: 30802 - 웰컴 키트
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

int main()
{
	int n;
	int sizeArr[6];
	
	int t;
	int p;

	int tSet = 0;

	scanf("%d", &n);

	for (int i = 0; i != 6; ++i)
		scanf("%d", &sizeArr[i]);

	scanf("%d %d", &t, &p);

	for (int i = 0; i != 6; ++i)
	{
		tSet += sizeArr[i] / t;
		if ((sizeArr[i] % t) != 0)
			++tSet;
	}

	printf("%d\n%d %d\n", tSet, n / p, n % p);
}