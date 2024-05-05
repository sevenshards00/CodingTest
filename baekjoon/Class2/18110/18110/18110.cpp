/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* ���ϸ�: 18110.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-05-05
* ���� ���� �ۼ� ����:
* ���� ����: 18110 - solved.ac
* ���� ���� ����:
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