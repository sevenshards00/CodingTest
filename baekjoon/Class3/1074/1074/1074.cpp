/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1074.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-24
* 이전 버전 작성 일자:
* 버전 내용: 1074 - Z
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>

unsigned SearchZ(unsigned n, unsigned r, unsigned c)
{
    if (n < 1)
        return 0;

    unsigned median = (unsigned)pow(2, n - 1);

    if (r < median && c < median)
        return SearchZ(n - 1, r, c);
    else if (r < median && c >= median)
        return (median * median) + SearchZ(n - 1, r, c - median);
    else if (r >= median && c < median)
        return ((median * median) * 2) + SearchZ(n - 1, r - median, c);
    else
        return ((median * median) * 3) + SearchZ(n - 1, r - median, c - median);
}

int main()
{
    unsigned n;
    unsigned r;
    unsigned c;

    scanf("%d %d %d", &n, &r, &c);

    unsigned result = SearchZ(n, r, c);
    printf("%d\n", result);

    return 0;
}