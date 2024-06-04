/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* ���ϸ�: 18870.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-06-04
* ���� ���� �ۼ� ����:
* ���� ����: 18870 - ��ǥ ����
* ���� ���� ����:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
using std::vector;
#include <algorithm>
using std::sort;
using std::unique;
using std::lower_bound;

int main()
{
	int n;
	long long input;
	vector<long long> originVec;
	vector<long long> sortVec;

	scanf("%d", &n);

	for (int i = 0; i != n; ++i)
	{
		scanf("%lld", &input);
		originVec.push_back(input);
		sortVec.push_back(input);
	}
	sort(sortVec.begin(), sortVec.end());
	sortVec.erase(unique(sortVec.begin(), sortVec.end()), sortVec.cend());

	for (int i = 0; i != n; ++i)
		printf("%lld ", lower_bound(sortVec.cbegin(), sortVec.cend(), originVec[i]) - sortVec.cbegin());

	return 0;
}