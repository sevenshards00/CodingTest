/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1107.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-07
* 이전 버전 작성 일자:
* 버전 내용: 1107 - 리모컨
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;
using std::to_string;

#include <algorithm>
using std::min;

constexpr int DEFAULT_CHANNEL = 100;
constexpr int MAX_CHANNEL = 500000;
constexpr int BREAK_LEN = 10;

bool break_button[BREAK_LEN] = { false, };

bool buttonCheck(const int &channel)
{
	string str_channel = to_string(channel);

	for (int i = 0; i != str_channel.length(); ++i)
	{
		if (true == break_button[str_channel[i] - '0'])
			return false;
	}

	return true;
}

int ButtonCnt(const string &n)
{
	int manual_button_cnt = 0;
	int shortcut_button_cnt = 0;
	int min_cnt;
	int target_channel = stoi(n);
	int break_cnt;
	
	cin >> break_cnt;

	if (break_cnt != 0)
	{
		for (int i = 0; i != break_cnt; ++i)
		{
			int idx;
			cin >> idx;
			break_button[idx] = true;
		}
	}
	
	if (DEFAULT_CHANNEL == target_channel)
		return 0;

	manual_button_cnt = abs(target_channel - DEFAULT_CHANNEL);
	min_cnt = manual_button_cnt;

	for (int i = 0; i != MAX_CHANNEL * 2; ++i)
	{
		if (true == buttonCheck(i))
		{
			shortcut_button_cnt = abs(target_channel - i) + to_string(i).length();
			min_cnt = min(min_cnt, shortcut_button_cnt);
		}
			
	}

	return min_cnt;
}

int main()
{
	string n;
	int result;
	
	cin >> n;
	
	result = ButtonCnt(n);

	cout << result << '\n';

	return 0;
}