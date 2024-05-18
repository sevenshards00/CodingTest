/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2839.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-18
* 이전 버전 작성 일자:
* 버전 내용: 2839 - 설탕 배달
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <algorithm>
using std::min;

constexpr int MAX_LEN = 5000;
int g_iArr[MAX_LEN];

// Dynamic Programming
int MinSugarBagDP(const int &n)
{
	// 3일때 1, 5일때 1임을 알고 있음
	// 그래서 6부터 구해가면 됨
	for (int i = 6; i <= n; ++i)
	{
		if (0 != g_iArr[i - 3])
			g_iArr[i] = g_iArr[i - 3] + 1;

		if (0 != g_iArr[i - 5])
		{
			if (0 != g_iArr[i])
				g_iArr[i] = min(g_iArr[i], g_iArr[i - 5] + 1);
			else
				g_iArr[i] = g_iArr[i - 5] + 1;
		}
	}

	if (0 == g_iArr[n])
		return -1;
	else
		return g_iArr[n];
}

// Greedy
int MinSugarBagGreedy(const int &n)
{
	int min_cnt = 0;
	int currWeight = n;
	
	// 0보다 클 동안은 loop 수행
	while (0 <= currWeight)
	{
		// 5로 딱 나눠떨어지는 경우 - 5로 나눈 몫을 더해서 return
		if (0 == currWeight % 5)
		{
			min_cnt += currWeight / 5;
			return min_cnt;
		}

		// 5로 딱 나눠떨어지지 않을 경우 - 3을 빼고 cnt를 증가
		currWeight -= 3;
		++min_cnt;
	}
	
	// loop를 빠져나왔다는 것은 해당 조합을 만들어낼 수 없는 경우이므로 -1 return
	return -1;
}

int main()
{
	int n;
	int resultDP;
	int resultGreedy;

	g_iArr[3] = 1;
	g_iArr[5] = 1;

	cin >> n;
	resultDP = MinSugarBagDP(n);
	resultGreedy = MinSugarBagGreedy(n);
	cout << resultDP << '\n';
	cout << resultGreedy << '\n';

	return 0;
}