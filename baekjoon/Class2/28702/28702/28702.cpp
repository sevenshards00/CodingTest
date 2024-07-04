/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 28702.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-07-04
* 이전 버전 작성 일자:
* 버전 내용: 28702 - FizzBuzz
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>
#include <cstdlib>

constexpr int MAX_ROW = 3;
constexpr int MAX_LEN = 9;

int main()
{
	char input[MAX_ROW][MAX_LEN];
	int result;

	for (int i = 0; i != MAX_ROW; ++i)
		scanf("%s", input[i]);

    if (input[2][0] >= '0' && input[2][0] <= '9')
    {
        result = atoi(input[2]) + 1;
        if (0 == (result % 3))
        {
            if (0 == (result % 5))
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
        }
        else if (0 == (result % 5))
            printf("Buzz\n");
        else
            printf("%d\n", result);
    }
    else if (input[1][0] >= '0' && input[1][0] <= '9')
    {
        result = atoi(input[1]) + 2;
        if (0 == (result % 3))
        {
            if (0 == (result % 5))
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
        }
        else if (0 == (result % 5))
            printf("Buzz\n");
        else
            printf("%d\n", result);
    }
    else if (input[0][0] >= '0' && input[0][0] <= '9')
    {
        result = atoi(input[0]) + 3;
        if (0 == (result % 3))
        {
            if (0 == (result % 5))
                printf("FizzBuzz\n");
            else
                printf("Fizz\n");
        }
        else if (0 == (result % 5))
            printf("Buzz\n");
        else
            printf("%d\n", result);
    }

	return 0;
}