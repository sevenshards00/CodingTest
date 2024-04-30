/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2869.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-30
* 이전 버전 작성 일자:
* 버전 내용: 2869 - 달팽이는 올라가고 싶다
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

int main()
{
	int v;
	int a;
	int b;
	int n = 0;

	scanf("%d %d %d", &a, &b, &v);

	n = (v - b) / (a - b);
	if (((v - b) % (a - b)) != 0)
		++n;

	printf("%d\n", n);

	return 0;
}