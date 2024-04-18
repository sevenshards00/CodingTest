/*
* Coding Test - Baekjoon
* 파일명: 1654.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-18
* 이전 버전 작성 일자:
* 버전 내용: 1654 - 랜선 자르기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
	int k;
	int n;
	long long input;
	long long max;
	long long upper_bound;
	long long lower_bound;
	long long mid;
	long long sum;
	long long result = 0;
	vector<int> ivec;

	cin >> k >> n;

	for (int i = 0; i != k; ++i)
	{
		cin >> input;
		ivec.push_back(input);
		if (input > max)
			max = input;
	}

	upper_bound = max;
	lower_bound = 1;

	while(lower_bound <= upper_bound)
	{
		mid = (lower_bound + upper_bound) / 2;
		sum = 0;

		for (int i = 0; i != ivec.size(); ++i)
			sum += ivec[i] / mid;
		
		if (sum >= n)
		{
			result = mid;
			lower_bound = mid + 1;
		}
			
		else
			upper_bound = mid - 1;
	}

	cout << result;
	return 0;
}