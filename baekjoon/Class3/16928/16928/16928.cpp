/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 16928.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-11
* 이전 버전 작성 일자:
* 버전 내용: 16928 - 뱀과 사다리 게임
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>
#include <queue>
using std::queue;

constexpr int MAX_LEN = 101;

int MinDiceCnt(const int &n, const int &m)
{
	int iTable[MAX_LEN];			// 10x10의 보드
	int iDiceCntTable[MAX_LEN];		// 굴린 주사위 횟수 기록
	bool bVisited[MAX_LEN];			// 방문 여부 확인
	int nextPos;					// 다음 좌표
	int currPos;					// 현재 좌표
	queue<int> iQueue;				// BFS에 사용할 Queue

	// 지역변수로 사용했으므로 전체 초기화
	memset(iTable, 0, sizeof(iTable));
	memset(iDiceCntTable, 0, sizeof(iDiceCntTable));
	memset(bVisited, false, sizeof(bVisited));

	// 사다리 정보 입력
	for (int i = 0; i != n; ++i)
	{
		scanf("%d %d", &currPos, &nextPos);
		iTable[currPos] = nextPos;
	}

	// 뱀 정보 입력
	for (int i = 0; i != m; ++i)
	{
		scanf("%d %d", &currPos, &nextPos);
		iTable[currPos] = nextPos;
	}

	// BFS 시작 부분
	// 1부터 시작하며, 맨 처음에는 주사위를 굴리지 않았으므로 카운트는 0, 방문 표시를 하고 Queue에 넣는다.
	currPos = 1;
	bVisited[currPos] = true;
	iDiceCntTable[currPos] = 0;
	iQueue.push(currPos);

	// Queue가 비워질 때까지 반복
	while (!iQueue.empty())
	{
		// Queue에 들어있는 값을 꺼낸다.
		currPos = iQueue.front();
		iQueue.pop();

		// 주사위를 1~6까지 굴린 경우를 비교
		for (int i = 1; i <= 6; ++i)
		{
			// 다음 위치는 주사위의 눈과 더한 위치
			nextPos = currPos + i;

			// 만약 100까지 도착했다면
			// 주사위를 1회 굴려서 도착한 것이므로 최종적으로 1을 더한다.
			if (nextPos == 100)
				return iDiceCntTable[currPos] + 1;

			// 100을 넘었거나 이미 방문한 좌표라면 더 확인하지 않는다.
			if (nextPos > 100 || bVisited[nextPos])
				continue;

			// 만약 해당 좌표에 사다리나 뱀이 있을 경우
			if (iTable[nextPos] != 0)
			{
				// 다음 좌표를 해당 좌표로 점프한다.
				nextPos = iTable[nextPos];
				// 그리고 마찬가지로 점프한 좌표의 방문 여부를 확인한다.
				// 이미 방문했을 경우에는 더 확인할 필요가 없다.
				if (bVisited[nextPos])
					continue;
				// 방문하지 않았을 경우에는 방문으로 처리한다.
				bVisited[nextPos] = true;	
			}

			// 위의 조건을 전부 넘어와서 방문한 적이 없는 새로운 좌표라면 방문 처리를 한다.
			bVisited[nextPos] = true;

			// 그리고 Queue에 넣고, 주사위를 굴린 횟수를 1회 추가한다.
			iQueue.push(nextPos);
			iDiceCntTable[nextPos] = iDiceCntTable[currPos] + 1;
		}
	}		
}

int main()
{
	int n;
	int m;
	int result;

	// N과 M을 입력
	scanf("%d %d", &n, &m);
	result = MinDiceCnt(n, m);
	printf("%d\n", result);
	return 0;
}