/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 2231.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-25
* 이전 버전 작성 일자:
* 버전 내용: 2231 - 분해합
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n;
	int sum;
	int digits;
	int constructor;

	cin >> n;

	for (constructor = 1; constructor != n; ++constructor)
	{		
		sum = constructor;
		digits = constructor;

		while (digits > 0)
		{
			sum += digits % 10;
			digits /= 10;
		}

		if (sum == n)
		{
			cout << constructor << '\n';
			break;
		}
	}

	if(constructor == n)
		cout << 0 << '\n';

	return 0;
}