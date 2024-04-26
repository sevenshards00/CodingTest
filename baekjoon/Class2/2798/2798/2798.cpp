/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2798.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-26
* 이전 버전 작성 일자:
* 버전 내용: 2798 - 블랙잭
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

void BlackJack(int n, int m)
{
	int curr_max = 0;
	int result = 0;
	int input;
	vector<int> iVec;

	for (int i = 0; i != n; ++i)
	{
		cin >> input;
		iVec.push_back(input);
	}

	for (int i = 0; i != n; ++i)
	{
		for (int j = i + 1; j != n; ++j)
		{
			for (int k = j + 1; k != n; ++k)
			{
				curr_max = iVec[i] + iVec[j] + iVec[k];
				
				if (curr_max <= m && curr_max >= result)
					result = curr_max;
				else
					continue;
			}
		}
	}

	cout << result << '\n';
}

int main()
{
	int n;
	int m;

	cin >> n >> m;
	BlackJack(n, m);

	return 0;
}