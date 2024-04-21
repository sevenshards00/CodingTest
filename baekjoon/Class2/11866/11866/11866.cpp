/*
* Coding Test - Baekjoon
* 파일명: 11866.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-22
* 이전 버전 작성 일자:
* 버전 내용: 11866 - 요세푸스 문제 0
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <queue>
using std::queue;

int main()
{
	int n;
	int k;
	int result;
	queue<int> iQueue;

	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; ++i)
		iQueue.push(i);

	printf("<");

	while (!iQueue.empty())
	{
		if (1 == iQueue.size())
		{
			printf("%d>", iQueue.front());
			iQueue.pop();
			break;
		}

		for (int i = 1; i != k; ++i)
		{
			iQueue.push(iQueue.front());
			iQueue.pop();	
		}
		result = iQueue.front();
		printf("%d, ", result);
		iQueue.pop();
	}

	return 0;
}