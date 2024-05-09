/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1920.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-09
* 이전 버전 작성 일자:
* 버전 내용: 1920 - 수 찾기
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include <unordered_set>
using std::unordered_set;

int main()
{
	int n;
	int m;
	int key;
	int find_key;
	unordered_set<int> uset;

	scanf("%d", &n);

	for (int i = 0; i != n; ++i)
	{
		scanf("%d", &key);
		uset.insert(key);
	}

	scanf("%d", &m);

	for (int i = 0; i != m; ++i)
	{
		scanf("%d", &find_key);
		if (uset.count(find_key) > 0)
			printf("1\n");
		else
			printf("0\n");
	}
	
	return 0;
}