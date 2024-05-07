/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 9012.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-07
* 이전 버전 작성 일자:
* 버전 내용: 9012 - 괄호
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <stack>
using std::stack;

#include <string>
using std::string;

bool JudgeVPS(const string& target)
{
	stack<char> VPSStack;

	for (int j = 0; j != target.length(); ++j)
	{
		if ('(' == target[j])
			VPSStack.push(target[j]);
		else
		{
			if (VPSStack.empty())
				return false;
			
			VPSStack.pop();
		}
	}

	if (VPSStack.empty())
		return true;
	else
		return false;
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i != t; ++i)
	{
		string target;
		cin >> target;
		if (JudgeVPS(target))
			cout << "YES\n";
		else
			cout << "NO\n";
	}


	return 0;
}