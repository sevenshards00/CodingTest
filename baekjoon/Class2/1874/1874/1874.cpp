/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1874.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-14
* 이전 버전 작성 일자:
* 버전 내용: 1874 - 스택 수열
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <stack>
using std::stack;

void JudgeStackSequence(const int &n)
{
	stack<int> iStack;
	vector<char> cVec;
	bool flag = false;
	int input;
	int idx = 1;

	for (int i = 0; i != n; ++i)
	{
		cin >> input;

		while (idx <= input)
		{
			iStack.push(idx);
			idx++;
			cVec.push_back('+');
		}
		if (input == iStack.top())
		{
			iStack.pop();
			cVec.push_back('-');
		}
		else
			flag = true;
	}

	if (!flag)
	{
		for (auto &iter : cVec)
			cout << iter << '\n';
	}
	else
		cout << "NO\n";
	
}

int main()
{
	int n;

	cin >> n;
	JudgeStackSequence(n);

	return 0;
}