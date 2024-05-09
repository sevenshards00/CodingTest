/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 2606.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-09
* 이전 버전 작성 일자:
* 버전 내용: 2606 - 바이러스
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
using std::vector;

constexpr int MAX_LEN = 101;

vector<int> g_ComputerGraph[MAX_LEN];
bool g_Visited[MAX_LEN];

int DFS(const int& curr_PC)
{
	int total_cnt = 0;
	if (g_Visited[curr_PC])
		return 0;

	g_Visited[curr_PC] = true;
	
	for (int i = 0; i != g_ComputerGraph[curr_PC].size(); ++i)
	{
		int next_PC = g_ComputerGraph[curr_PC][i];
		if (!g_Visited[next_PC])
		{
			++total_cnt;
			total_cnt += DFS(next_PC);
		}	
	}

	return total_cnt;
}

int main()
{
	int vertex_cnt;
	int edge_cnt;
	int vertex_start;
	int vertex_end;
	int result;

	scanf("%d", &vertex_cnt);
	scanf("%d", &edge_cnt);

	for (int i = 0; i != edge_cnt; ++i)
	{
		scanf("%d", &vertex_start);
		scanf("%d", &vertex_end);

		g_ComputerGraph[vertex_start].push_back(vertex_end);
		g_ComputerGraph[vertex_end].push_back(vertex_start);
	}

	result = DFS(1);
	printf("%d\n", result);

	return 0;
}