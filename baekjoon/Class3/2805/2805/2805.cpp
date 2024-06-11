/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 2805.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-06-11
* 이전 버전 작성 일자:
* 버전 내용: 2805 - 나무 자르기
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
using std::sort;
#include <vector>
using std::vector;

int main()
{
	long long n;
	long long m;
	long long target = 0;
	vector<long long> treeVec;

	scanf("%lld", &n);
	scanf("%lld", &m);

	for (int i = 0; i < n; ++i)
	{
		long long woodLen;
		scanf("%lld", &woodLen);
		treeVec.push_back(woodLen);
	}

	sort(treeVec.begin(), treeVec.end());

	long long first = 0;
	long long last = treeVec[n - 1];

	while (first <= last)
	{
		long long cutLen = 0;
		long long mid = (first + last) / 2;

		for (int i = 0; i < n; ++i)
		{
			if (treeVec[i] > mid)
				cutLen += treeVec[i] - mid;
		}

		if (cutLen >= m)
		{
			target = mid;
			first = mid + 1;
		}
		else
			last = mid - 1;
	}

	printf("%lld\n", target);

	return 0;
}