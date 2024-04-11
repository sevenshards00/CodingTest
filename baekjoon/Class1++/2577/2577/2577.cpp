/*
* Coding Test - Baekjoon
* 파일명: 2577.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-11
* 이전 버전 작성 일자: 
* 버전 내용: 2577 - 숫자의 개수
* 이전 버전 내용: 
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	// 입력 받을 수
	unsigned a;
	unsigned b;
	unsigned c;

	// 계산 결과
	unsigned total;

	// 자릿수 기록
	unsigned num_cnt[10] = { 0, };

	cin >> a;
	cin >> b;
	cin >> c;

	total = a * b * c;

	while (0 != total)
	{
		++num_cnt[total % 10];
		total /= 10;
	}

	for (int i = 0; i != sizeof(num_cnt) / sizeof(unsigned); ++i)
		cout << num_cnt[i] << '\n';

	return 0;
}