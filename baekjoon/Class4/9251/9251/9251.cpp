/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 9251.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-06-20
* 이전 버전 작성 일자:
* 버전 내용: 9251 - LCS
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#define max(a, b) (a > b ? a : b)

constexpr int MAX_LEN = 1002;

int lcsTable[MAX_LEN][MAX_LEN];

int LCS(const char *inputStr1, const char *inputStr2)
{
	int lcsResult = 0;
	int str1Len = strlen(inputStr1);
	int str2Len = strlen(inputStr2);

	for (int i = 1; i <= str1Len; ++i)
	{
		for (int j = 1; j <= str2Len; ++j)
		{
			if (inputStr1[i - 1] == inputStr2[j - 1])
				lcsTable[i][j] = lcsTable[i - 1][j - 1] + 1;
			else
				lcsTable[i][j] = max(lcsTable[i - 1][j], lcsTable[i][j - 1]);
		}
	}

	lcsResult = lcsTable[str1Len][str2Len];
	return lcsResult;
}

int main()
{
	char str1[MAX_LEN] = { 0, };
	char str2[MAX_LEN] = { 0, };
	int result;

	scanf("%s", str1);
	scanf("%s", str2);

	result = LCS(str1, str2);
	printf("%d\n", result);
	return 0;
}