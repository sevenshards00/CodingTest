/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2475.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-02
* 이전 버전 작성 일자:
* 버전 내용: 2475 - 검증수
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

unsigned inputNum()
{
	unsigned a, b, c, d, e;
	unsigned result;

	cin >> a >> b >> c >> d >> e;
	result = ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;

	return result;

}

int main()
{
	cout << inputNum();
	return 0;
}