/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* ���ϸ�: 15650.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-05-23
* ���� ���� �ۼ� ����:
* ���� ����: 15650 - N�� M (2)
* ���� ���� ����:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
using std::vector;

vector<int> seqVec;

void MakeSequence(const int &n, const int &m, const int &start)
{
	if (seqVec.size() == m)
	{
		for (int i = 0; i != m; ++i)
			printf("%d ", seqVec[i]);
		printf("\n");
		return;
	}

	for (int i = start + 1; i <= n; ++i)
	{
		seqVec.push_back(i);
		MakeSequence(n, m, i);
		seqVec.pop_back();
	}
}

int main()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);
	MakeSequence(n, m, 0);
	return 0;
}