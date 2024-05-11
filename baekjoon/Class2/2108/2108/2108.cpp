/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2108.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-11
* 이전 버전 작성 일자:
* 버전 내용: 2108 - 통계학
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>

#include <vector>
using std::vector;

#include <unordered_map>
using std::unordered_map;
using std::pair;

#include <algorithm>
using std::sort;

// 최빈값 비교를 위해 정의한 함수
bool Compare(const pair<int, int> &ref_l, const pair<int, int> &ref_r)
{
	// 만약 빈도수가 같지 않다면
	// 빈도수가 높은 것으로 내림차순
	if (ref_l.second != ref_r.second)
		return ref_l.second > ref_r.second;
	// 만약 빈도수가 같다면
	// 최빈값이 작은 것을 기준으로 오름차순
	else
		return ref_l.first < ref_r.first;
}

void Statistics(const int &n)
{
	vector<int> iVec;						// 입력한 수를 저장할 vector
	unordered_map<int, int> iFreqMap;		// 최빈값을 구하기 위해 사용할 unordered map
	int input;								// 입력값을 받기 위해 사용한 임시 변수
	int mean = 0;							// 산술평균
	int median = 0;							// 중앙값
	int mode = 0;							// 최빈값
	int range = 0;							// 범위

	// 수를 입력 받는다.
	// 동시에 최빈값의 Count를 매기는 것도 동시에 진행
	for (int i = 0; i != n; ++i)
	{
		scanf("%d", &input);
		iVec.push_back(input);
		iFreqMap[input]++;
	}
	
	// 산술평균
	for (auto &iter : iVec)
		mean += iter;
	mean = (int)round((double)mean / n);

	// 중앙값
	sort(iVec.begin(), iVec.end());
	median = iVec[n / 2];

	// 최빈값
	// Hash Table에 저장된 최빈값을 vector로 옮긴다.
	vector<pair<int, int>> iFreqVec(iFreqMap.begin(), iFreqMap.end());
	// 그리고 vector를 정렬, 정렬 기준은 앞에서 정의한 함수의 기준대로 정렬한다.
	sort(iFreqVec.begin(), iFreqVec.end(), Compare);

	// 정렬된 vector를 통해 최빈값이 동일할 경우에는 두 번째로 작은 값을 택한다.
	if (iFreqVec.size() > 1 && iFreqVec[0].second == iFreqVec[1].second)
		mode = iFreqVec[1].first;
	else
		mode = iFreqVec[0].first;

	// 범위
	range = iVec[n - 1] - iVec[0];

	printf("%d\n%d\n%d\n%d\n", mean, median, mode, range);
}

int main()
{
	int n;
	scanf("%d", &n);
	Statistics(n);
	return 0;
}