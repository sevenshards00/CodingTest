/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10699.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 10699 - 오늘 날짜
* 이전 버전 내용:
*/

// VS 한정으로 localtime 함수는 deprecated이므로 다음 매크로를 정의
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <ctime>

int main()
{
    time_t timer;
    struct tm *t;
    timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초 -> 타임스탬프
    t = localtime(&timer); // 포맷팅을 위해 구조체에 넣기
    printf("%d-%d-%d\n", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
    return 0;
}