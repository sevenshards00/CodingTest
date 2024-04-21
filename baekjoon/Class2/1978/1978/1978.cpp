/*
* Coding Test - Baekjoon
* 파일명: 1978.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-22
* 이전 버전 작성 일자:
* 버전 내용: 1978 - 소수 찾기
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

constexpr char MAX_LEN = 100;

void PrimeNumCnt(int n)
{
	int input[MAX_LEN] = { 0, };
	int primeCnt = 0;
	int i;
	int j;

	for (i = 0; i != n; ++i)
		cin >> input[i];

	for (i = 0; i != n; ++i)
	{
		for (j = 2; j <= input[i]; ++j)
		{
			if (0 == input[i] % j)
				break;
		}
		if (j == input[i])
			++primeCnt;
	}

	cout << primeCnt << '\n';
}

int main()
{
	int n;

	cin >> n;
	PrimeNumCnt(n);

	return 0;
}