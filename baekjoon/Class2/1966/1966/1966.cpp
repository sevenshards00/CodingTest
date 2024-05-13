/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1966.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-13
* 이전 버전 작성 일자:
* 버전 내용: 1966 - 프린터 큐
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <queue>
using std::queue;
using std::priority_queue;
using std::pair;

void PrintOutOrder(const int &ref_testCnt)
{
	queue<pair<int, int>> printQueue;
	priority_queue<int> priorQueue;
	
	int m;
	int n;
	int target_order;
	int target_idx;
	int priority;
	int curr_idx;
	int curr_priority;

	for (int i = 0; i != ref_testCnt; ++i)
	{
		cin >> n >> m;
		target_idx = m;
		target_order = 0;
		
		for (int j = 0; j != n; ++j)
		{
			cin >> priority;
			printQueue.push(pair<int, int>(j, priority));
			priorQueue.push(priority);
		}

		while (!printQueue.empty())
		{
			curr_idx = printQueue.front().first;
			curr_priority = printQueue.front().second;
			printQueue.pop();

			if (curr_priority == priorQueue.top())
			{
				priorQueue.pop();
				++target_order;

				if (target_idx == curr_idx)
				{
					cout << target_order << '\n';
					while (!printQueue.empty())
						printQueue.pop();
					while (!priorQueue.empty())
						priorQueue.pop();
					break;
				}
			}
			else
				printQueue.push(pair<int, int>(curr_idx, curr_priority));
		}
	}
}

int main()
{
	int testCnt;

	cin >> testCnt;

	PrintOutOrder(testCnt);

	return 0;
}