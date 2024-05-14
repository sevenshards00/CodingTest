/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 5430.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-14
* 이전 버전 작성 일자:
* 버전 내용: 5430 - AC
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;
using std::stoi;

#include <queue>
using std::deque;

void AC()
{
	string instruction;
	string input_arr;
	string token = "";
	int arr_len;
	deque<int> iDeque;
	bool reverseFlag = false;
	bool errorFlag = false;

	cin >> instruction;
	cin >> arr_len;
	cin >> input_arr;

	for (int i = 0; i != input_arr.length(); ++i)
	{
		if (!isdigit(input_arr[i]))
		{
			if (!token.empty())
			{
				iDeque.push_back(stoi(token));
				token = "";
			}
		}
			
		else
			token += input_arr[i];
	}

	for (int i = 0; i != instruction.length(); ++i)
	{
		switch (instruction[i])
		{
			case 'R':
				reverseFlag = !reverseFlag;
				break;
			case 'D':
				if (!reverseFlag)
				{
					if (iDeque.empty())
						errorFlag = true;					
					else
						iDeque.pop_front();
				}
				else
				{
					if (iDeque.empty())
						errorFlag = true;
					else
						iDeque.pop_back();
				}
				break;
		}
	}

	if (!errorFlag)
	{
		if (!reverseFlag)
		{
			cout << '[';
			if (!iDeque.empty())
			{
				while (1 != iDeque.size())
				{
					cout << iDeque.front() << ',';
					iDeque.pop_front();
				}
				cout << iDeque.front();
				iDeque.pop_front();
			}
			cout << "]\n";
		}
		else
		{
			cout << '[';
			if (!iDeque.empty())
			{
				while (1 != iDeque.size())
				{
					cout << iDeque.back() << ',';
					iDeque.pop_back();
				}
				cout << iDeque.back();
				iDeque.pop_back();
			}
			cout << "]\n";
		}
	}
	else
		cout << "error\n";
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i != T; ++i)
		AC();

	return 0;
}