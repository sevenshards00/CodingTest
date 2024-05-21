/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1697.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-21
* 이전 버전 작성 일자:
* 버전 내용: 1697 - 숨바꼭질
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include <queue>
using std::queue;

#include <cstring>

constexpr int MAX_LEN = 100001;

int g_Dir[3] = { 1, -1, 2 };

void BFS(const int &ref_start, const int &ref_end)
{
	bool bVisited[MAX_LEN];
	unsigned uElapsedTime[MAX_LEN];
	unsigned currElapsedTime;
	memset(bVisited, false, sizeof(bVisited));
	memset(uElapsedTime, -1, sizeof(uElapsedTime));
	int currPos = ref_start;
	int nextPos;
	queue<int> bfsQueue;

	bfsQueue.push(currPos);
	bVisited[currPos] = true;
	uElapsedTime[currPos] = 0;

	while (!bfsQueue.empty())
	{
		currPos = bfsQueue.front();
		bfsQueue.pop();

		if (currPos == ref_end)
			break;

		for (int i = 0; i != 3; ++i)
		{
			if (i < 2)
			{
				nextPos = currPos + g_Dir[i];
				currElapsedTime = uElapsedTime[currPos] + 1;
			}

			else
			{
				nextPos = currPos * g_Dir[i];
				currElapsedTime = uElapsedTime[currPos] + 1;
			}

			if (nextPos < 0 || nextPos >= MAX_LEN)
				continue;

			if (bVisited[nextPos] && currElapsedTime > uElapsedTime[nextPos])
				continue;

			uElapsedTime[nextPos] = currElapsedTime;
			bVisited[nextPos] = true;
			bfsQueue.push(nextPos);
		}
	}

	printf("%d\n", uElapsedTime[ref_end]);
}

int main()
{
	int n;
	int k;

	scanf("%d %d", &n, &k);
	BFS(n, k);

	return 0;
}