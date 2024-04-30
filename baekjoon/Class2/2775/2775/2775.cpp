/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2775.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-29
* 이전 버전 작성 일자:
* 버전 내용: 2775 - 부녀회장이 될테야
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int ARR_LEN = 15;

int arr[ARR_LEN][ARR_LEN] = {
	{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14},
};

void CalcArr()
{
	for (int i = 0; i != ARR_LEN; ++i)
		arr[i][0] = 0;

	for (int i = 1; i != ARR_LEN; ++i)
	{
		for (int j = 1; j != ARR_LEN; ++j)	
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
	}
}

int main()
{
	int t;
	int k;
	int n;

	CalcArr();

	cin >> t;

	for (int i = 0; i != t; ++i)
	{
		cin >> k;
		cin >> n;

		cout << arr[k][n] << '\n';
	}

	return 0;
}