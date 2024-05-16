/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 9019.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-16
* 이전 버전 작성 일자:
* 버전 내용: 9019 - DSLR
* 이전 버전 내용:
*/

#include <cstring>
#include <iostream>
using std::cin;
using std::cout;

#include <queue>
using std::queue;
using std::pair;

#include <string>
using std::string;

constexpr int MAX_LEN = 10000;

void DSLR(const int &ref_src, const int &ref_dest)
{
	queue<pair<int, string>> pairQueue;
	bool bVisited[MAX_LEN];
	memset(bVisited, false, sizeof(bVisited));
	
	int inst_D;
	int inst_S;
	int inst_L;
	int inst_R;

	int currNum;
	string minInstruction;

	pairQueue.push(pair<int, string>(ref_src, ""));
	bVisited[ref_src] = true;

	while (!pairQueue.empty())
	{
		currNum = pairQueue.front().first;
		minInstruction = pairQueue.front().second;
		
		if (ref_dest == currNum)
		{
			cout << minInstruction << '\n';
			return;
		}

		pairQueue.pop();

		inst_D = (currNum * 2) % MAX_LEN;
		if (!bVisited[inst_D])
		{
			bVisited[inst_D] = true;
			pairQueue.push(pair<int, string>(inst_D, minInstruction + 'D'));
		}

		inst_S = currNum - 1;
		if (inst_S < 0)
			inst_S = MAX_LEN - 1;
		if (!bVisited[inst_S])
		{
			bVisited[inst_S] = true;
			pairQueue.push(pair<int, string>(inst_S, minInstruction + 'S'));
		}

		inst_L = ((currNum % 1000) * 10) + (currNum / 1000);
		if (!bVisited[inst_L])
		{
			bVisited[inst_L] = true;
			pairQueue.push(pair<int, string>(inst_L, minInstruction + 'L'));
		}

		inst_R = ((currNum % 10) * 1000) + currNum / 10;
		if (!bVisited[inst_R])
		{
			bVisited[inst_R] = true;
			pairQueue.push(pair<int, string>(inst_R, minInstruction + 'R'));
		}
	}
}

int main()
{
	int T;
	int A;
	int B;

	cin >> T;

	for (int i = 0; i != T; ++i)
	{
		cin >> A >> B;
		DSLR(A, B);
	}

	return 0;
}