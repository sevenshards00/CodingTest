/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 15552.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 15552 - 빠른 A + B
* 이전 버전 내용:
*/

#include <cstdio>

int main()
{
    int count;
    int a;
    int b;
    // 문제의 전제 조건을 이해하면 cin, cout을 쓰는 것보다 scanf나 printf로 해결하면 됨.
    scanf("%d", &count);
    for (int i = 0; i != count; ++i)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}