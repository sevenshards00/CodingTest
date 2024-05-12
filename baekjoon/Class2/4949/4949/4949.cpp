/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 4949.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-12
* 이전 버전 작성 일자:
* 버전 내용: 4949 - 균형잡힌 세상
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <stack>
using std::stack;

#include <string>
using std::string;
using std::getline;

bool JudgeBalanced(const string &target)
{
	stack<char> cStack;

	for (int i = 0; i != target.length(); ++i)
	{
		if ('(' == target[i] || '[' == target[i])
			cStack.push(target[i]);
		
		if (')' == target[i])
		{
			if (!cStack.empty() && cStack.top() == '(')
				cStack.pop();
			else
				return false;
		}

		if (']' == target[i])
		{
			if (!cStack.empty() && cStack.top() == '[')
				cStack.pop();
			else
				return false;
		}
	}

	if (cStack.empty())
		return true;
	else
		return false;
}

int main()
{
	while (true)
	{
		string target;
		getline(cin, target);

		if ('.' == target[0])
			break;

		if (JudgeBalanced(target))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}