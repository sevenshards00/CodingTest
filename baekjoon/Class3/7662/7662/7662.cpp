/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 7662.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-06-19
* 이전 버전 작성 일자:
* 버전 내용: 7662 - 이중 우선순위 큐
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <algorithm>
using std::greater;
using std::less;

#include <vector>
using std::vector;

#include <queue>
using std::priority_queue;

#include <map>
using std::map;

int main()
{
	int t;
	int k;

	cin >> t;

	for (int i = 0; i != t; ++i)
	{
		cin >> k;

		// 최소 Heap과 최대 Heap
		priority_queue<int, vector<int>, greater<int>> minHeap;
		priority_queue<int, vector<int>, less<int>> maxHeap;
		
		// 입력받은 수의 갯수를 카운팅할 map
		map<int, int> inputCnt;
		
		for (int j = 0; j != k; ++j)
		{
			char input;
			int n;
			cin >> input >> n;

			// I -> Queue에 Push
			if ('I' == input)
			{
				maxHeap.push(n);
				minHeap.push(n);
				// map의 특성상 인덱스로 접근해서 증감연산을 하면 0부터 증가.
				++inputCnt[n];
			}
			else
			{
				// 1일 경우 최대 Heap에서 꺼낸다.
				if (n == 1)
				{
					// 비어있다면 꺼내지 않음
					if (!maxHeap.empty())
					{
						// 입력받은 수의 cnt를 감소 후 pop
						--inputCnt[maxHeap.top()];
						maxHeap.pop();
					}						
				}
				// 아닐 경우 최소 Heap에서 꺼낸다.
				else
				{
					// 비어있다면 꺼내지 않음
					if (!minHeap.empty())
					{
						// 입력받은 수의 cnt를 감소 후 pop
						--inputCnt[minHeap.top()];
						minHeap.pop();
					}
				}

				// 이후 입력받은 수의 갯수를 유지하기 위해 pop을 수행
				// 예를 들어 정수 1만 넣고 최대 또는 최소 Heap에서 pop을 했을 경우 양쪽 다 비어있어야 함.
				while (!maxHeap.empty() && (0 == inputCnt[maxHeap.top()]))
					maxHeap.pop();

				while (!minHeap.empty() && (0 == inputCnt[minHeap.top()]))
					minHeap.pop();
			}
		}

		// 둘 중 하나만 비었으면 EMPTY
		if (maxHeap.empty() || minHeap.empty())
			cout << "EMPTY\n";
		// 비어있지 않다면 결과를 출력
		else
			cout << maxHeap.top() << ' ' << minHeap.top() << '\n';
	}

	return 0;
}