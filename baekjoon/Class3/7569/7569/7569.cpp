/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 7569.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-06
* 이전 버전 작성 일자:
* 버전 내용: 7569 - 토마토
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include <queue>
using std::queue;

constexpr int MAX_LEN = 100;
constexpr int DIR_LEN = 6;

struct st_Tomato
{
	int m_x;
	int m_y;
	int m_z;
	int elapsed = 0;
};

// Z, Y, X
int tomato_Box[MAX_LEN][MAX_LEN][MAX_LEN];

// Z축 상, 하 -> Y, X축 시계방향 탐색
constexpr int dir_z[DIR_LEN] = { 1, -1, 0, 0, 0, 0 };
constexpr int dir_y[DIR_LEN] = { 0, 0, -1, 0, 1, 0 };
constexpr int dir_x[DIR_LEN] = { 0, 0, 0, 1, 0, -1 };

int BFS(const int &z, const int &y, const int &x)
{
	queue<st_Tomato> tomatoQueue;
	int dayCnt = 0;

	// 입력값을 받아서 토마토 상자를 초기화
	for (int i = 0; i != z; ++i)
	{
		for (int j = 0; j != y; ++j)
		{
			for (int k = 0; k != x; ++k)
			{
				scanf("%d", &tomato_Box[i][j][k]);

				// 익은 토마토를 입력 받은 경우에는 큐에 삽입
				if (1 == tomato_Box[i][j][k])
				{
					st_Tomato ripeTomato;
					ripeTomato.m_z = i;
					ripeTomato.m_y = j;
					ripeTomato.m_x = k;
					tomatoQueue.push(ripeTomato);
				}
			}
		}
	}

	// 큐가 빌 때까지 반복
	while (!tomatoQueue.empty())
	{
		// 큐에서 하나를 꺼낸다.
		st_Tomato currTomato = tomatoQueue.front();
		tomatoQueue.pop();

		// 6방향으로 다음 토마토를 찾는다.
		for (int i = 0; i != DIR_LEN; ++i)
		{
			st_Tomato nextTomato;
			nextTomato.m_z = currTomato.m_z + dir_z[i];
			nextTomato.m_y = currTomato.m_y + dir_y[i];
			nextTomato.m_x = currTomato.m_x + dir_x[i];

			// 인덱스를 벗어나는 경우는 스킵
			if (nextTomato.m_z < 0 || nextTomato.m_z >= z || nextTomato.m_y < 0 || nextTomato.m_y >= y || nextTomato.m_x < 0 || nextTomato.m_x >= x)
				continue;

			// 채워져있지 않거나 이미 익은 토마토가 있는 경우도 스킵
			if (-1 == tomato_Box[nextTomato.m_z][nextTomato.m_y][nextTomato.m_x] || 1 == tomato_Box[nextTomato.m_z][nextTomato.m_y][nextTomato.m_x])
				continue;

			// 경과한 일수를 추가
			nextTomato.elapsed = currTomato.elapsed + 1;

			// 현재까지 카운팅한 일수가 새로 숙성된 토마토의 일수보다 작다면 갱신
			if (dayCnt <= nextTomato.elapsed)
				dayCnt = nextTomato.elapsed;
			// 새로 숙성된 토마토를 큐에 넣는다.
			tomatoQueue.push(nextTomato);
			tomato_Box[nextTomato.m_z][nextTomato.m_y][nextTomato.m_x] = 1;
		}
	}

	// BFS가 끝난 이후 체크
	// 하나라도 익지 않은 경우를 확인한다.
	for (int i = 0; i != z; ++i)
	{
		for (int j = 0; j != y; ++j)
		{
			for (int k = 0; k != x; ++k)
			{
				if (0 == tomato_Box[i][j][k])
					return -1;
			}
		}
	}

	return dayCnt;
}

int main()
{
	int m;
	int n;
	int h;
	int result;

	scanf("%d %d %d", &m, &n, &h);
	result = BFS(h, n, m);
	printf("%d\n", result);

	return 0;
}