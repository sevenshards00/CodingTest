/*
* Coding Test - Baekjoon
* 파일명: 10828.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-19
* 이전 버전 작성 일자:
* 버전 내용: 10828 - 스택
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <stack>
using std::stack;

#include <string>
using std::string;

constexpr int CMD_LEN = 6;

int main()
{
	string cmd;
	int n;
	int input;
	stack<int> iStack;

	cin >> n;

	for (int i = 0; i != n; ++i)
	{
		cin >> cmd;

		if (cmd == "push")
		{
			cin >> input;
			iStack.push(input);
		}
		else if (cmd == "pop")
		{
			if (iStack.empty())
				cout << "-1" << '\n';
			else
			{
				cout << iStack.top() << '\n';
				iStack.pop();
			}
				
		}
		else if (cmd == "size")
			cout << iStack.size() << '\n';
		else if (cmd == "empty")
		{
			if (iStack.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (cmd == "top")
		{
			if (iStack.empty())
				cout << "-1" << '\n';
			else
				cout << iStack.top() << '\n';
		}
		else
			break;
	}
	return 0;
}