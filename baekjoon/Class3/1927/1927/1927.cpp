﻿/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1927.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-03
* 이전 버전 작성 일자:
* 버전 내용: 1927 - 최소 힙
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include <queue>
using std::priority_queue;

#include <vector>
using std::vector;

#include <algorithm>
using std::greater;

void PriorityQueue(const unsigned &n)
{
	priority_queue<unsigned, vector<unsigned>, greater<unsigned>> uPQueue;
	unsigned x;


	for (int i = 0; i != n; ++i)
	{
		scanf("%d", &x);

		if (x == 0)
		{
			if (!uPQueue.empty())
			{
				printf("%d\n", uPQueue.top());
				uPQueue.pop();
			}
			else
				printf("0\n");
		}
		else
			uPQueue.push(x);
	}
}

int main()
{
	unsigned n;

	scanf("%d", &n);
	PriorityQueue(n);

	return 0;
}