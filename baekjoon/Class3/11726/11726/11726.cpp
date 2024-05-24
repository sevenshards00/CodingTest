/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 11726.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-24
* 이전 버전 작성 일자:
* 버전 내용: 11726 - 2xn 타일링
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

constexpr int MAX_LEN = 1001;
constexpr int MODULAR = 10007;

int g_Tile[MAX_LEN];

int CalcTile(const int &input)
{
	if (1 == input)
		return g_Tile[1];
	else if (2 == input)
		return g_Tile[2];
	
	for (int i = 3; i <= input; ++i)
		g_Tile[i] = (g_Tile[i - 1] + g_Tile[i - 2]) % MODULAR;

	return g_Tile[input];
}

int main()
{
	g_Tile[1] = 1;
	g_Tile[2] = 2;
	
	int n;
	int result;
	
	scanf("%d", &n);
	result = CalcTile(n);

	printf("%d\n", result);

	return 0;
}