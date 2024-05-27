/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 16953.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-27
* 이전 버전 작성 일자:
* 버전 내용: 16953 - A -> B
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <queue>
using std::queue;
using std::pair;

int BFS(const int &start, const int &target)
{
	queue<pair<long long, int>> bfsQueue;
	bfsQueue.push(pair<long long, int>(start, 1));

	while (!bfsQueue.empty())
	{
		long long currNum = bfsQueue.front().first;
		int currCnt = bfsQueue.front().second;
		bfsQueue.pop();

		if (target == currNum)
			return currCnt;

		long long nextNum = currNum * 2;

		if (nextNum <= target)
			bfsQueue.push(pair<long long, int>(nextNum, currCnt + 1));

		nextNum = (currNum * 10) + 1;
		if(nextNum <= target)
			bfsQueue.push(pair<long long, int>(nextNum, currCnt + 1));
	}

	return -1;
}

int main()
{
	int a;
	int b;
	int result;

	cin >> a >> b;

	result = BFS(a, b);

	cout << result << '\n';

	return 0;
}