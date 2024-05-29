/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 11724.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-29
* 이전 버전 작성 일자:
* 버전 내용: 11724 - 연결 요소의 개수
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <vector>
using std::vector;

constexpr int MAX_LEN = 1001;

vector<int> g_AdjacentVec[MAX_LEN];
bool g_bVisited[MAX_LEN];

void DFS(const int& currVertex)
{
	g_bVisited[currVertex] = true;
	for (int i = 0; i != g_AdjacentVec[currVertex].size(); ++i)
	{
		int nextVertex = g_AdjacentVec[currVertex][i];
		if (!g_bVisited[nextVertex])
			DFS(nextVertex);
	}
}

int main()
{
	int n;
	int m;
	int u;
	int v;
	int result = 0;


	scanf("%d %d", &n, &m);

	for (int i = 0; i != m; ++i)
	{
		scanf("%d %d", &u, &v);
		g_AdjacentVec[u].push_back(v);
		g_AdjacentVec[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
	{
		if (g_bVisited[i])
			continue;

		result++;
		DFS(i);
		
	}

	printf("%d\n", result);

	return 0;
}