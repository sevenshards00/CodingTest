/*
* Coding Test - Baekjoon
* 파일명: 10866.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-19
* 이전 버전 작성 일자:
* 버전 내용: 10866 - 덱
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <deque>
using std::deque;

#include <string>
using std::string;

constexpr int CMD_LEN = 6;

int main()
{
	string cmd;
	int n;
	int input;
	deque<int> iDeque;

	cin >> n;

	for (int i = 0; i != n; ++i)
	{
		cin >> cmd;

		if (cmd == "push_front")
		{
			cin >> input;
			iDeque.push_front(input);
		}
		else if (cmd == "push_back")
		{
			cin >> input;
			iDeque.push_back(input);
		}
		else if (cmd == "pop_front")
		{
			if (iDeque.empty())
				cout << "-1" << '\n';
			else
			{
				cout << iDeque.front() << '\n';
				iDeque.pop_front();
			}
		}
		else if (cmd == "pop_back")
		{
			if (iDeque.empty())
				cout << "-1" << '\n';
			else
			{
				cout << iDeque.back() << '\n';
				iDeque.pop_back();
			}
		}
		else if (cmd == "size")
			cout << iDeque.size() << '\n';
		else if (cmd == "empty")
		{
			if (iDeque.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
		else if (cmd == "front")
		{
			if (iDeque.empty())
				cout << "-1" << '\n';
			else
				cout << iDeque.front() << '\n';
		}
		else if (cmd == "back")
		{
			if (iDeque.empty())
				cout << "-1" << '\n';
			else
				cout << iDeque.back() << '\n';
		}
		else
			break;
	}
	return 0;
}