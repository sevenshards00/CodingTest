/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1931.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-06-13
* 이전 버전 작성 일자:
* 버전 내용: 1931 - 회의실 배정
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
using std::sort;

#include <vector>
using std::vector;

#include <utility>
using std::pair;

int main()
{
	int n;
	int start_time;
	int end_time;
	int result = 1;

	vector<pair<int, int>> meetingVec;

	scanf("%d", &n);

	for (int i = 0; i != n; ++i)
	{
		scanf("%d %d", &start_time, &end_time);
		meetingVec.push_back(pair<int, int>(end_time, start_time));
	}

	sort(meetingVec.begin(), meetingVec.end());

	int currEndTime = meetingVec[0].first;
	
	for (int i = 1; i != n; ++i)
	{
		int nextStartTime = meetingVec[i].second;
		if (currEndTime <= nextStartTime)
		{
			++result;
			currEndTime = meetingVec[i].first;
		}
	}

	printf("%d\n", result);
}