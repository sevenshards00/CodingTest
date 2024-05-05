/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 11399.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-05
* 이전 버전 작성 일자:
* 버전 내용: 11399 - ATM
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <algorithm>
using std::sort;

constexpr int ARR_LEN = 1000;

void MinSum(const int &n)
{
	int arr[ARR_LEN] = { 0, };
	int partial_sum = 0;
	int result = 0;

	for (int i = 0; i != n; ++i)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i != n; ++i)
	{
		partial_sum += arr[i];
		result += partial_sum;
	}
		
	cout << result << '\n';
}

int main()
{
	int n;
	cin >> n;

	MinSum(n);

	return 0;
}