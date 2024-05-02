/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2164.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-02
* 이전 버전 작성 일자:
* 버전 내용: 2164 - 카드2
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <queue>
using std::queue;

void FindLastCard(const int &cardNum)
{
	queue<int> card_queue;

	for (int i = 1; i <= cardNum; ++i)
		card_queue.push(i);

	while (card_queue.size() > 1)
	{
		card_queue.pop();
		card_queue.push(card_queue.front());
		card_queue.pop();
	}

	cout << card_queue.front() << '\n';
}

int main()
{
	int n;
	
	cin >> n;
	FindLastCard(n);

	return 0;
}