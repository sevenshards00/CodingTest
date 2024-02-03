/*
* Coding Test - Baekjoon (solved.ac - Class1)
* 파일명: 10818.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-03
* 이전 버전 작성 일자:
* 버전 내용: 10818 - 최소, 최대
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <algorithm>
using std::sort;

int main()
{
	unsigned cnt{ 0 };
	unsigned input{ 0 };
	vector<int> ivec;

	cin >> cnt;

	for (int i = 0; i != cnt; ++i)
	{
		cin >> input;
		ivec.push_back(input);
	}
		

	sort(ivec.begin(), ivec.end());

	cout << *ivec.begin() << " " << *ivec.rbegin();

	return 0;
}