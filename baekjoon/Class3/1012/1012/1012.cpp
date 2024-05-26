/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1012.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-26
* 이전 버전 작성 일자:
* 버전 내용: 1012 - 유기농 배추
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <cstring>

constexpr int MAX_WIDTH = 50;
constexpr int MAX_HEIGHT = 50;
constexpr int g_Dir[4][2] =
{
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

bool g_bPlant[MAX_WIDTH][MAX_HEIGHT];
bool g_bVisited[MAX_WIDTH][MAX_HEIGHT];

void DFS(const int &ref_y, const int &ref_x)
{
	g_bVisited[ref_y][ref_x] = true;

	for (int i = 0; i != 4; ++i)
	{
		int next_y = ref_y + g_Dir[i][0];
		int next_x = ref_x + g_Dir[i][1];

		if (next_y < 0 || next_y >= MAX_WIDTH || next_x < 0 || next_x >= MAX_HEIGHT)
			continue;

		if (!g_bPlant[next_y][next_x])
			continue;

		if (g_bVisited[next_y][next_x])
			continue;

		DFS(next_y, next_x);
	}
}

int main()
{
	int t;
	int m;
	int n;
	int k;
	int result;

	cin >> t;
	
	while (0 != t)
	{
		result = 0;

		cin >> m >> n >> k;

		memset(g_bPlant, false, sizeof(g_bPlant));
		memset(g_bVisited, false, sizeof(g_bVisited));

		for (int i = 0; i != k; ++i)
		{
			int y;
			int x;

			cin >> y >> x;
			g_bPlant[y][x] = true;
		}

		for (int i = 0; i != m; ++i)
		{
			for (int j = 0; j != n; ++j)
			{
				if (g_bPlant[i][j] && !g_bVisited[i][j])
				{
					DFS(i, j);
					++result;
				}
			}
		}

		cout << result << '\n';
		--t;
	}

	return 0;
}