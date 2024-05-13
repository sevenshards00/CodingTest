/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 14940.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-13
* 이전 버전 작성 일자:
* 버전 내용: 14940 - 쉬운 최단거리
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <queue>
using std::queue;

constexpr int MAX_HEIGHT = 1000;
constexpr int MAX_WIDTH = 1000;
constexpr int g_Dir[4][2] =
{
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

struct st_Pos
{
	bool m_Visited = false;
	int m_y;
	int m_x;
	int m_cnt;
};

enum class GRID_TYPE
{
	OBSTACLE = 0,
	NONE,
	START
};

GRID_TYPE g_Grid[MAX_HEIGHT][MAX_WIDTH];
st_Pos g_Pathfind[MAX_HEIGHT][MAX_WIDTH];

void BFS(const int &ref_y, const int &ref_x, const int &ref_height, const int &ref_width)
{
	queue<st_Pos> bfsQueue;
	st_Pos currPos;
	st_Pos nextPos;

	currPos.m_Visited = true;
	currPos.m_y = ref_y;
	currPos.m_x = ref_x;
	currPos.m_cnt = 0;
	g_Pathfind[currPos.m_y][currPos.m_x] = currPos;
	bfsQueue.push(currPos);

	while (!bfsQueue.empty())
	{
		currPos = bfsQueue.front();
		bfsQueue.pop();

		for (int i = 0; i != 4; ++i)
		{
			nextPos.m_y = currPos.m_y + g_Dir[i][0];
			nextPos.m_x = currPos.m_x + g_Dir[i][1];

			if (GRID_TYPE::OBSTACLE == g_Grid[nextPos.m_y][nextPos.m_x])
				continue;

			if (nextPos.m_y < 0 || nextPos.m_y >= ref_height || nextPos.m_x < 0 || nextPos.m_x > ref_width)
				continue;

			if (g_Pathfind[nextPos.m_y][nextPos.m_x].m_Visited)
				continue;

			nextPos.m_Visited = true;
			nextPos.m_cnt = currPos.m_cnt + 1;
			g_Pathfind[nextPos.m_y][nextPos.m_x] = nextPos;
			bfsQueue.push(nextPos);
		}
	}
}

int main()
{
	int n;
	int m;
	int start_x;
	int start_y;

	cin >> n;
	cin >> m;

	for (int i = 0; i != n; ++i)
	{
		for (int j = 0; j != m; ++j)
		{
			int grid_type;
			cin >> grid_type;
			g_Grid[i][j] = static_cast<GRID_TYPE>(grid_type);
			
			if (GRID_TYPE::START == static_cast<GRID_TYPE>(grid_type))
			{
				start_x = j;
				start_y = i;
			}
		}
	}

	BFS(start_y, start_x, n, m);

	for (int i = 0; i != n; ++i)
	{
		for (int j = 0; j != m; ++j)
		{
			if (GRID_TYPE::NONE == g_Grid[i][j] && !g_Pathfind[i][j].m_Visited)
				g_Pathfind[i][j].m_cnt = -1;
			cout << g_Pathfind[i][j].m_cnt << ' ';
		}
		cout << '\n';
	}
	return 0;
}