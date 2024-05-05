/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 18110.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-05
* 이전 버전 작성 일자:
* 버전 내용: 18110 - solved.ac
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <algorithm>
using std::sort;

void AverageCalc(const int &n)
{
	if(0 == n)
	{
		printf("0");
		return;
	}
		

	unsigned char *arr_opinion = new unsigned char[n];
	int truncate = round((double)n * 0.15);
	unsigned sum = 0;
	double average;

	for (int i = 0; i != n; ++i)
		scanf("%d", &arr_opinion[i]);

	sort(arr_opinion, arr_opinion + n);

	for (int i = truncate; i != n - truncate; ++i)
		sum += arr_opinion[i];

	average = (double)sum / (n - (truncate * 2));

	printf("%d", (int)round(average));
	delete[] arr_opinion;
}

int main()
{
	int n;
	scanf("%d", &n);
	AverageCalc(n);

	return 0;
}