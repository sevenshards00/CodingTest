/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 10773.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-17
* 이전 버전 작성 일자:
* 버전 내용: 10773 - 제로
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <stack>
using std::stack;

void Summation(const int &k)
{
	stack<int> iStack;
	int sum = 0;
	for (int i = 0; i != k; ++i)
	{
		int input;
		cin >> input;

		if (input != 0)
			iStack.push(input);
		else
		{
			if (!iStack.empty())
				iStack.pop();
		}
	}

	while (!iStack.empty())
	{
		sum += iStack.top();
		iStack.pop();
	}

	cout << sum << '\n';
}

int main()
{
	int K;
	cin >> K;

	Summation(K);

	return 0;
}