/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 5597.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-22
* 이전 버전 작성 일자:
* 버전 내용: 5597 - 과제 안 내신 분..?
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
	int input;
	vector<int> ivec(31,0);

	for (int i = 0; i != 28; ++i)
	{
		cin >> input;
		ivec[input] = 1;
	}


	for (int i = 1; i != 31; ++i)
	{
		if (!ivec[i])
			cout << i << '\n';
	}

	return 0;
}