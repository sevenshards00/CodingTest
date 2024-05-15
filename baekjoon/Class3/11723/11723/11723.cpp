/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 11723.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-15
* 이전 버전 작성 일자:
* 버전 내용: 11723 - 집합
* 이전 버전 내용:
*/
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

void SetInstruction(const int &m)
{
	char instruction[7];
	int x;
	int iSet = 0;

	for (int i = 0; i != m; ++i)
	{
		scanf("%s", instruction);

		do
		{
			if (0 == strcmp("add", instruction))
			{
				scanf("%d", &x);
				if (1 == (iSet >> (x - 1)))
					break;
				iSet = iSet | 1 << (x - 1);
				break;
			}

			if (0 == strcmp("remove", instruction))
			{
				scanf("%d", &x);
				if (0 == (iSet >> (x - 1)))
					break;
				iSet = iSet & ~(1 << (x - 1));
				break;
			}

			if (0 == strcmp("check", instruction))
			{
				scanf("%d", &x);
				if ((iSet >> (x - 1)) & 1)
					printf("1\n");
				else
					printf("0\n");
				break;
			}

			if (0 == strcmp("toggle", instruction))
			{
				scanf("%d", &x);
				iSet = iSet ^ (1 << (x - 1));
				break;
			}

			if (0 == strcmp("all", instruction))
			{
				iSet |= 0b00000000000011111111111111111111;
				break;
			}

			if (0 == strcmp("empty", instruction))
			{
				iSet &= 0;
				break;
			}
		} while (0);
	}
}

int main()
{
	int m;
	scanf("%d", &m);
	SetInstruction(m);

	return 0;
}