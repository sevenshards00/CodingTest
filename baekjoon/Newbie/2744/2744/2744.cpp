/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2744.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-31
* 이전 버전 작성 일자:
* 버전 내용: 2744 - 대소문자 바꾸기
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

constexpr int strLen = 101;

int main()
{
	char strArr[strLen];

	scanf("%s", strArr);

	for (int i = 0; i != strlen(strArr); ++i)
	{
		if (strArr[i] >= 'A' && strArr[i] <= 'Z')
			strArr[i] += 'a' - 'A';
		else
			strArr[i] -= 'a' - 'A';
	}

	printf("%s\n", strArr);

	return 0;
}