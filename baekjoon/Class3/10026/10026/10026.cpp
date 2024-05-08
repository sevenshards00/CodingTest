/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 10026.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-08
* 이전 버전 작성 일자:
* 버전 내용: 10026 - 적록색약
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <cstring>

constexpr int GRID_MAX = 100;
constexpr int DIR_IDX = 4;


char g_Grid[GRID_MAX][GRID_MAX];
bool g_Visited[GRID_MAX][GRID_MAX];
int g_Direction[DIR_IDX][2] = 
{
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

void DFS(const int &curr_y, const int &curr_x, const int &boundary_idx)
{
	if (g_Visited[curr_y][curr_x])
		return;

	g_Visited[curr_y][curr_x] = true;

	for (int i = 0; i != DIR_IDX; ++i)
	{
		int nextY = curr_y + g_Direction[i][0];
		int nextX = curr_x + g_Direction[i][1];

		if (nextY < 0 || nextY >= boundary_idx || nextX < 0 || nextX >= boundary_idx)
			continue;

		if ((!g_Visited[nextY][nextX]) && (g_Grid[curr_y][curr_x] == g_Grid[nextY][nextX]))
			DFS(nextY, nextX, boundary_idx);
	}
}


int main()
{	
	int n;
	int normalAreaCnt = 0;
	int rgAreaCnt = 0;
	
	cin >> n;

	for (int iY = 0; iY != n; ++iY)
		for (int iX = 0; iX != n; ++iX)
			cin >> g_Grid[iY][iX];

	for (int iY = 0; iY != n; iY++)
	{
		for (int iX = 0; iX != n; iX++)
		{
			if (!g_Visited[iY][iX])
			{
				DFS(iY, iX, n);
				normalAreaCnt++;
			}
		}
	}

	memset(g_Visited, false, sizeof(g_Visited) / sizeof(bool));

	for (int iY = 0; iY != n; ++iY)
	{
		for (int iX = 0; iX != n; ++iX)
		{
			if ('G' == g_Grid[iY][iX])
				g_Grid[iY][iX] = 'R';
		}
	}

	for (int iY = 0; iY != n; iY++)
	{
		for (int iX = 0; iX != n; iX++)
		{
			if (!g_Visited[iY][iX])
			{
				DFS(iY, iX, n);
				rgAreaCnt++;
			}
		}
	}
	
	cout << normalAreaCnt << ' ' << rgAreaCnt << '\n';

	return 0;
}