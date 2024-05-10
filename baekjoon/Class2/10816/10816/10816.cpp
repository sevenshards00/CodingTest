/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 10816.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-10
* 이전 버전 작성 일자:
* 버전 내용: 10816 - 숫자 카드 2
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
using std::vector;

#include <map>
using std::map;
using std::pair;

void CardCnt(const int &n)
{
	int input_num;
	int m;
	int *cntArr = nullptr;
	map<int, int> imap;

	for (int i = 0; i != n; ++i)
	{
		scanf("%d", &input_num);
		if (imap.cend() == imap.find(input_num))
			imap.insert(pair<int, int>(input_num, 1));
		else
			imap.find(input_num)->second++;
	}

	scanf("%d", &m);
	cntArr = new int[m];
	for (int i = 0; i != m; ++i)
	{
		scanf("%d", &input_num);
		if (imap.cend() == imap.find(input_num))
			cntArr[i] = 0;
		else
			cntArr[i] = imap.find(input_num)->second;
	}

	for (int i = 0; i != m; ++i)
		printf("%d ", cntArr[i]);

	delete[] cntArr;
}

int main()
{
	int n;

	scanf("%d", &n);
	CardCnt(n);

	return 0;
}