/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* ���ϸ�: 11726.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-05-24
* ���� ���� �ۼ� ����:
* ���� ����: 11726 - 2xn Ÿ�ϸ�
* ���� ���� ����:
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