/*
* Coding Test - Baekjoon
* 파일명: 10845.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-19
* 이전 버전 작성 일자:
* 버전 내용: 10845 - 큐
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <queue>
using std::queue;

#include <string>
using std::string;

constexpr int CMD_LEN = 6;

int main()
{
	string cmd;
	int n;
	int input;
	queue<int> iQueue;

	cin >> n;

	for (int i = 0; i != n; ++i)
	{
		cin >> cmd;

		if (cmd == "push")
		{
			cin >> input;
			iQueue.push(input);
		}
		else if (cmd == "pop")
		{
			if (iQueue.empty())
				cout << "-1" << '\n';
			else
			{
				cout << iQueue.front() << '\n';
				iQueue.pop();
			}

		}
		else if (cmd == "size")
			cout << iQueue.size() << '\n';
		else if (cmd == "empty")
		{
			if (iQueue.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (cmd == "front")
		{
			if (iQueue.empty())
				cout << "-1" << '\n';
			else
				cout << iQueue.front() << '\n';
		}
		else if (cmd == "back")
		{
			if (iQueue.empty())
				cout << "-1" << '\n';
			else
				cout << iQueue.back() << '\n';
		}
		else
			break;
	}
	return 0;
}