/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 11718.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-31
* 이전 버전 작성 일자:
* 버전 내용: 11718 - 그대로 출력하기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int inputLen = 101;

int main()
{
	char input[inputLen];
	int cnt = 0;

	while (cnt < 100)
	{
		cin.getline(input, inputLen);
		cout << input << '\n';
		++cnt;
	}
}