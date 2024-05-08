/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1018.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-08
* 이전 버전 작성 일자:
* 버전 내용: 1018 - 체스판 다시 칠하기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <algorithm>
using std::min;

constexpr int MAX_CNT = 32;
constexpr int MAX_HEIGHT = 50;
constexpr int MAX_WIDTH = 50;
constexpr int CHESS_IDX = 8;

char g_Board[MAX_HEIGHT][MAX_WIDTH];

int PaintCount(const int &ref_y, const int &ref_x)
{
	int startBlackCnt = 0;
	int startWhiteCnt = 0;

	// 시작이 B일 경우
	// B는 0, 2, 4
	// W는 1, 3, 5, 7
	for (int y = ref_y; y != ref_y + CHESS_IDX; ++y)
	{
		for (int x = ref_x; x != ref_x + CHESS_IDX; ++x)
		{
			if ((y + x) % 2 == 0)
			{
				if (g_Board[y][x] != 'B')
					++startBlackCnt;
			}
			else
			{
				if (g_Board[y][x] == 'B')
					++startBlackCnt;;
			}
		}
	}

	// 시작이 W일 경우
	// W는 0, 2, 4
	// B는 1, 3, 5, 7
	for (int y = ref_y; y != ref_y + CHESS_IDX; ++y)
	{
		for (int x = ref_x; x != ref_x + CHESS_IDX; ++x)
		{
			if ((y + x) % 2 == 0)
			{
				if (g_Board[y][x] != 'W')
					++startWhiteCnt;
			}
			else
			{
				if (g_Board[y][x] == 'W')
					++startWhiteCnt;;
			}
		}
	}

	// 둘 중 작은 값을 반환
	return min(startBlackCnt, startWhiteCnt);
}

int main()
{
	int n;
	int m;
	int result = MAX_CNT;

	cin >> n >> m;

	// 보드의 값 입력
	for (int y = 0; y != n; ++y)
		for (int x = 0; x != m; ++x)
			cin >> g_Board[y][x];

	// 보드의 모든 부분의 y, x축을 이동해가며 8X8 케이스 중 최소값이 나오는 경우를 모두 찾아본다.
	for (int y = 0; y != n - (CHESS_IDX - 1); ++y)
	{
		for (int x = 0; x != m - (CHESS_IDX - 1); ++x)
			result = min(result, PaintCount(y, x));
	}

	cout << result << '\n';

	return 0;
}