/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 2178.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-17
* 이전 버전 작성 일자:
* 버전 내용: 2178 - 미로 탐색
* 이전 버전 내용:
*/

#include <cstring>
#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;
using std::stoi;

#include <queue>
using std::queue;
using std::pair;

struct st_Pos
{
	int m_y;
	int m_x;
};

constexpr int MAX_HEIGHT = 100;
constexpr int MAX_WIDTH = 100;
constexpr int g_Dir[4][2] =
{
	{-1, 0},
	{0, 1},
	{1, 0},
	{0, -1}
};

void BFS(const int &ref_y, const int &ref_x)
{
	int end_y = ref_y - 1;
	int end_x = ref_x - 1;
	bool bGrid[MAX_HEIGHT][MAX_WIDTH];
	bool bVisited[MAX_HEIGHT][MAX_WIDTH];
	string input;
	queue<pair<st_Pos, int>> posQueue;
	st_Pos currPos;
	int currCnt;

	memset(bGrid, false, sizeof(bGrid));
	memset(bVisited, false, sizeof(bVisited));

	for (int i = 0; i != ref_y; ++i)
	{
		cin >> input;
		for (int j = 0; j != ref_x; ++j)
		{
			if (input[j] == '0')
				bGrid[i][j] = false;
			else
				bGrid[i][j] = true;
		}
	}

	currPos.m_y = 0;
	currPos.m_x = 0;
	currCnt = 1;

	posQueue.push(pair<st_Pos, int>(currPos, currCnt));
	bVisited[currPos.m_y][currPos.m_x] = true;
	
	while (!posQueue.empty())
	{
		currPos = posQueue.front().first;
		currCnt = posQueue.front().second;
		posQueue.pop();
		
		st_Pos nextPos;
		int nextCnt;
		
		if (currPos.m_y == end_y && currPos.m_x == end_x)
		{
			cout << currCnt << '\n';
			return;
		}

		for (int i = 0; i != 4; ++i)
		{
			nextPos.m_y = currPos.m_y + g_Dir[i][0];
			nextPos.m_x = currPos.m_x + g_Dir[i][1];
			
			if (nextPos.m_x >= ref_x || nextPos.m_x < 0 || nextPos.m_y >= ref_y || nextPos.m_y < 0)
				continue;

			if (!bGrid[nextPos.m_y][nextPos.m_x])
				continue;

			if (bVisited[nextPos.m_y][nextPos.m_x])
				continue;

			bVisited[nextPos.m_y][nextPos.m_x] = true;
			nextCnt = currCnt + 1;
			posQueue.push(pair<st_Pos, int>(nextPos, nextCnt));
		}
	}
}

int main()
{
	int n;
	int m;

	cin >> n >> m;
	BFS(n, m);

	return 0;
}