/*
* Coding Test - Baekjoon
* ���ϸ�: 11866.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-04-22
* ���� ���� �ۼ� ����:
* ���� ����: 11866 - �似Ǫ�� ���� 0
* ���� ���� ����:
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