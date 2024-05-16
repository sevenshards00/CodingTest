/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1676.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-16
* 이전 버전 작성 일자:
* 버전 내용: 1676 - 팩토리얼 0의 개수
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int MULTIPLE = 5;

int main()
{
	// 실제 Factorial을 구해서 0의 갯수를 카운팅하는 것이 아님
	// 찾아야 하는 것은 10의 배수가 만들어지는 꼴을 찾는 것.
	// 그 중에서도 짝수와 5가 곱해지면 무조건 10의 배수가 되므로 결국 5^n 케이스를 찾는 것이 목표
	// n * 5^k (n = 2, 4, 6, 8 ... / k = 1, 2, 3, 4 ...) 의 꼴일 때 10의 배수가 된다.
	// 만약 k가 1이라면 단순 10의 배수이므로 0의 갯수는 1개
	// k가 2라면 100 단위가 되므로 0의 갯수는 2개씩 나오는 꼴
	// 그래서 0의 갯수가 1개가 나오는 케이스인 5의 배수, 2개가 나오는 케이스인 25의 배수, 그리고 3개가 나오는 125의 배수를 찾아서 누적한다.

	int n;
	int multi_5_Cnt;
	int multi_25_Cnt;
	int multi_125_Cnt;

	cin >> n;

	multi_5_Cnt = n / MULTIPLE;
	multi_25_Cnt = n / (MULTIPLE * MULTIPLE);
	multi_125_Cnt = n / (MULTIPLE * MULTIPLE * MULTIPLE);

	cout << multi_5_Cnt + multi_25_Cnt + multi_125_Cnt << '\n';

	return 0;
}