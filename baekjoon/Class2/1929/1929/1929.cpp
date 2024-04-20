/*
* Coding Test - Baekjoon
* 파일명: 1929.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-20
* 이전 버전 작성 일자:
* 버전 내용: 1929 - 소수 구하기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <cmath>

constexpr unsigned ARR_LEN = 10000001;

int main()
{
	unsigned arr[ARR_LEN];
	unsigned n;
	unsigned m;
	
	cin >> n >> m;

	for (unsigned i = 2; i <= m; ++i)
		arr[i] = i;

	for (unsigned i = 2; i <= sqrt(m); ++i)
	{
		if (0 == arr[i])
			continue;

		for (unsigned j = i * i; j <= m; j += i)
			arr[j] = 0;
	}

	for (unsigned i = n; i <= m; ++i)
	{
		if (0 == arr[i])
			continue;
		
		cout << arr[i] << '\n';
	}

	return 0;
}