/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* ���ϸ�: 4949.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-05-12
* ���� ���� �ۼ� ����:
* ���� ����: 4949 - �������� ����
* ���� ���� ����:
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