/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2609.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-26
* 이전 버전 작성 일자:
* 버전 내용: 2609 - 최대공약수와 최소공배수
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

unsigned GCD(unsigned x, unsigned y)
{
	unsigned a;
	unsigned b;
	unsigned r;

	if (x <= y)
	{
		a = x;
		b = y;
	}
	else
	{
		a = y;
		b = x;
	}

	r = a % b;

	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}

	return b;

}

unsigned LCM(unsigned x, unsigned y)
{
	return x * y / GCD(x, y);
}

int main()
{
	unsigned x;
	unsigned y;
	
	cin >> x >> y;
	cout << GCD(x, y) << '\n';
	cout << LCM(x, y) << '\n';

	return 0;
}