/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 18111.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-15
* 이전 버전 작성 일자:
* 버전 내용: 18111 - 마인크래프트
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int GRID_MAX_LEN = 500;	// 그리드 세로, 가로 최대
constexpr int MAX_HEIGHT = 256;		// 높이 최대 값

int g_Grid[GRID_MAX_LEN][GRID_MAX_LEN];	// 전역 변수 Grid

void CalcTimeHeight(const int &y, const int &x, const int &block)
{
	
	int minElapsedTime = 0x7FFFFFFF;		// 땅을 고르는데 걸리는 최소 시간
	int maxHeight = 0;						// 최소 시간이 걸리는 높이
	int blockCnt;							// 블록의 갯수
	int currElapsedTime;					// 해당 높이에 대해서 블록을 넣고 채우는데 걸리는 시간
	int block_remove;						// 블록을 제거할 경우 (1번 작업)
	int block_add;							// 블록을 채워야 할 경우 (2번 작업)

	// 입력 받은 세로, 가로만큼 그리드의 높이를 입력 받는다.
	for (int i = 0; i != y; ++i)
		for (int j = 0; j != x; ++j)
			cin >> g_Grid[i][j];

	// 각 그리드별로 0부터 256의 높이까지 경과되는 시간을 구한다.
	for (int targetHeight = 0; targetHeight <= MAX_HEIGHT; ++targetHeight)
	{
		block_add = 0;
		block_remove = 0;

		for (int i = 0; i != y; ++i)
		{
			for (int j = 0; j != x; ++j)
			{
				// 현재 그리드의 높이에서 대상 높이가 되기 위한 차를 구한다.
				// blockCnt가 양수라면 blockCnt만큼 제거해서 targetHeight에 맞춰야 함
				// blockCnt가 음수라면 blockCnt만큼 추가해서 targetHeight에 맞춰야 함
				blockCnt = g_Grid[i][j] - targetHeight;
				if (blockCnt > 0)
					block_remove += blockCnt;
				else
					block_add -= blockCnt;
			}
		}

		// 추가해야 하는 블록이 더 많을 경우, 제거를 해서 얻는 블록과 내가 가진 블록을 가지고도 해당 높이를 맞출 수 없음
		// 다시 말해서 작업 자체가 불가능하며 시간 계산 대상이 아님
		// 예) 현재 그리드의 높이는 64고 내가 가진 블록 갯수는 0인데 높이를 65로 맞춰야 하는 경우
		// 그게 아닌 경우에는 작업이 가능하며 해당 작업에 걸린 시간을 계산하고 최소 시간인지 비교.
		// 해당 시간이 최소일 때, 해당 높이를 최대 높이로 본다.
		if (block_remove + block >= block_add)
		{
			currElapsedTime = (block_remove * 2) + block_add;
			if (currElapsedTime <= minElapsedTime)
			{
				minElapsedTime = currElapsedTime;
				maxHeight = targetHeight;
			}
		}
	}

	cout << minElapsedTime << ' ' << maxHeight << '\n';
}

int main()
{
	int n;
	int m;
	int b;

	cin >> n >> m >> b;
	CalcTimeHeight(n, m, b);

	return 0;
}