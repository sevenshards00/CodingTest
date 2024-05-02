/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1260.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-02
* 이전 버전 작성 일자:
* 버전 내용: 1260 - DFS와 BFS
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

#include <queue>
using std::queue;

#include <stack>
using std::stack;

constexpr int ARR_LEN = 1001;

bool g_Vertex[ARR_LEN][ARR_LEN];

void DFS(const int &v, const int &n)
{
	int nextVertex;

	bool Visited[ARR_LEN] = { 0, };
	memset(Visited, false, sizeof(bool) * ARR_LEN);
	Visited[v] = true;
	stack<int> iStack;
	iStack.push(v);
	printf("%d ", v);

	while (!iStack.empty())
	{
		nextVertex = iStack.top();
		iStack.pop();
		
		if (!Visited[nextVertex])
		{
			Visited[nextVertex] = true;
			printf("%d ", nextVertex);
		}
		
		for (int i = n; i >= 1; --i)
		{
			if (false == g_Vertex[nextVertex][i])
				continue;

			if (Visited[i])
				continue;

			iStack.push(i);			
		}
	}

	printf("\n");
}

void BFS(const int &v, const int &n)
{
	int nextPos;

	bool Visited[ARR_LEN];
	memset(Visited, false, sizeof(bool) * ARR_LEN);
	Visited[v] = true;
	queue<int> iQueue;
	iQueue.push(v);

	while (!iQueue.empty())
	{
		nextPos = iQueue.front();
		iQueue.pop();

		printf("%d ", nextPos);

		for (int i = 1; i <= n; ++i)
		{
			if (false == g_Vertex[nextPos][i])
				continue;

			if (Visited[i])
				continue;

			Visited[i] = true;
			iQueue.push(i);
		}
	}
}

int main()
{
	int n;
	int m;
	int v;
	int from;
	int to;

	scanf("%d %d %d", &n, &m, &v);

	for (int i = 1; i <= m; ++i)
	{
		scanf("%d %d", &from, &to);
		g_Vertex[from][to] = true;
		g_Vertex[to][from] = true;
	}

	DFS(v, n);
	BFS(v, n);

	return 0;
}