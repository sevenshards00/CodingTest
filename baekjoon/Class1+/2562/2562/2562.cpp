/*
* Coding Test - Baekjoon (solved.ac - Class1)
* 파일명: 2562.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-03
* 이전 버전 작성 일자:
* 버전 내용: 2562 - 최댓값
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
	vector<unsigned> uvec;
	unsigned input = 0;
	unsigned max = 0;
	unsigned max_idx = 0;

	for (int i = 0; i != 9; ++i)
	{
		cin >> input;
		uvec.push_back(input);
	}

	max = uvec[0];

	for (int i = 0; i != 9; ++i)
	{
		if (max < uvec[i])
		{
			max = uvec[i];
			max_idx = i;
		}
	}

	cout << max << '\n';
	cout << max_idx + 1 << '\n';

	return 0;
}