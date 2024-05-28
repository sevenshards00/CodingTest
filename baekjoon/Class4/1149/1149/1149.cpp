/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 1149.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-28
* 이전 버전 작성 일자:
* 버전 내용: 1149 - RGB 거리
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <algorithm>
using std::min;

constexpr int MAX_LEN = 1001;

int DP(const int &ref)
{
	int costArr[MAX_LEN][3];
	int result;
	memset(costArr, 0, sizeof(costArr));
	
	for (int i = 0; i != ref; ++i)
	{
		for (int j = 0; j != 3; ++j)
			scanf("%d", &costArr[i][j]);
	}

	// 세가지 가중치에 따라서 케이스 분류
	for (int i = 1; i != ref; ++i)
	{
		// 1) 이전 집을 R로 칠한 경우
		costArr[i][0] += min(costArr[i - 1][1], costArr[i - 1][2]);
		// 2) 이전 집을 G로 칠한 경우
		costArr[i][1] += min(costArr[i - 1][0], costArr[i - 1][2]);
		// 3) 이전 집을 B로 칠한 경우
		costArr[i][2] += min(costArr[i - 1][0], costArr[i - 1][1]);
	}

	// 가중치를 다 구하고 난 뒤에 마지막 인덱스의 값 중 가장 작은 것을 반환
	result = min({ costArr[ref - 1][0], costArr[ref - 1][1], costArr[ref - 1][2] });
	return result;
}

int main()
{
	int n;
	int result;
	scanf("%d", &n);

	result = DP(n);
	printf("%d\n", result);
	return 0;
}