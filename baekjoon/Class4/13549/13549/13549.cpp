/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 13549.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-19
* 이전 버전 작성 일자:
* 버전 내용: 13549 - 숨바꼭질 3
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include <queue>
using std::queue;

#include <cstring>

constexpr int MAX_LEN = 100001;

int g_Dir[3] = { 1, -1, 2};

void BFS(const int &ref_start, const int &ref_end)
{
	bool bVisited[MAX_LEN];
	int iElapsedTime[MAX_LEN];
	int currElapsedTime;
	memset(bVisited, false, sizeof(bVisited));
	memset(iElapsedTime, 0, sizeof(iElapsedTime));
	int currPos = ref_start;
	int nextPos;
	
	queue<int> bfsQueue;

	bfsQueue.push(currPos);
	bVisited[currPos] = true;
	iElapsedTime[currPos] = 0;

	while (!bfsQueue.empty())
	{
		currPos = bfsQueue.front();
		bfsQueue.pop();

		if (currPos == ref_end)
		{
			printf("%d\n", iElapsedTime[currPos]);
			return;
		}

		for (int i = 0; i != 3; ++i)
		{
			if (i < 2)
			{
				nextPos = currPos + g_Dir[i];
				currElapsedTime = iElapsedTime[currPos] + 1;
			}
				
			else
			{
				nextPos = currPos * g_Dir[i];
				currElapsedTime = iElapsedTime[currPos];
			}
				
			if (nextPos < 0 || nextPos >= MAX_LEN)
				continue;

			if (bVisited[nextPos] && currElapsedTime >= iElapsedTime[nextPos])
				continue;

			iElapsedTime[nextPos] = currElapsedTime;
			bVisited[nextPos] = true;
			bfsQueue.push(nextPos);
		}
	}
}

int main()
{
	int n;
	int k;

	scanf("%d %d", &n, &k);
	BFS(n, k);

	return 0;
}