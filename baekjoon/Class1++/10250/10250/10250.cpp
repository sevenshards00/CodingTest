/*
* Coding Test - Baekjoon
* 파일명: 10250.cpp
* 파일 버전: 0.11
* 작성자: Sevenshards
* 작성 일자: 2024-04-09
* 이전 버전 작성 일자: 2024-04-09
* 버전 내용: 로직 수정
* 이전 버전 내용: 10250 - ACM 호텔
*/


// 개같이 풀었음 참고할 코드도 안됨
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int t;	// Test Case 입력
	int h;	// 높이
	int w;	// 너비
	int n;	// 투숙객 수

	cin >> t;

	for (int i = 0; i != t; ++i)
	{
		// h, w, n을 입력받음
		cin >> h >> w >> n;
		int floor = n % h;
		int room_num = n / h + 1;
		cout << floor * 100 + room_num << '\n';
	}
	return 0;
}