/*
* Coding Test - Baekjoon
* 파일명: 11050.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-18
* 이전 버전 작성 일자:
* 버전 내용: 11050 - 이항 계수 1
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int factorial(int input)
{
	static vector<long long> iVec(input + 1, 0);
	
	iVec[0] = 1;
	iVec[1] = 1;

	if (input <= 1)
		return 1;

	for (long long i = 2; i <= input; ++i)
	{
		if (0 == iVec[i])
			iVec[i] = i * iVec[i - 1];
	}

	return iVec[input];
}

int main()
{
	int n;
	int k;

	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));

	return 0;
}