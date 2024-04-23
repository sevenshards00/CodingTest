/*
* Coding Test - Baekjoon
* 파일명: 2920.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-17
* 이전 버전 작성 일자:
* 버전 내용: 2920 - 음계
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

constexpr int MAX_INPUT = 8;

int main()
{
	vector<int> ivec(8);
	vector<int> ascending_vec = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> descending_vec = { 8, 7, 6, 5, 4, 3, 2, 1 };
	
	for (int i = 0; i != MAX_INPUT; ++i)
		cin >> ivec[i];

	if (ivec == ascending_vec)
		cout << "ascending\n";
	else if (ivec == descending_vec)
		cout << "descending\n";
	else
		cout << "mixed\n";

	return 0;
}