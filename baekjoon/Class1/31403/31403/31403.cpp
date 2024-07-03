/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 31403.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-07-03
* 이전 버전 작성 일자:
* 버전 내용: 31403 - A+B-C
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;
using std::stoi;
using std::to_string;

int main()
{
	int a;
	int b;
	int c;
	string input;

	cin >> a;
	input += to_string(a);
	cin >> b;
	input += to_string(b);
	cin >> c;

	printf("%d\n%d\n", a + b - c, stoi(input) - c);

	return 0;
}