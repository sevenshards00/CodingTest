/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* ���ϸ�: 11659.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-05-25
* ���� ���� �ۼ� ����:
* ���� ����: 11659 - ���� �� ���ϱ� 4
* ���� ���� ����:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <vector>
using std::vector;

int main()
{
	int n;
	int m;
	int i;
	int j;

	int *sum;
	
	scanf("%d %d", &n, &m);

	sum = new int[n + 1];
	memset(sum, 0, sizeof(sum));

	for (int k = 1; k <= n; ++k)
	{
		scanf("%d", &sum[k]);
		sum[k] += sum[k - 1];
	}

	for (int k = 0; k != m; ++k)
	{
		scanf("%d %d", &i, &j);
		printf("%d\n", sum[j] - sum[i - 1]);
	}

	delete[] sum;

	return 0;
}