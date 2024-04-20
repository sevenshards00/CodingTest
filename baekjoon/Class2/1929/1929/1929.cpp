/*
* Coding Test - Baekjoon
* ���ϸ�: 1929.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-04-20
* ���� ���� �ۼ� ����:
* ���� ����: 1929 - �Ҽ� ���ϱ�
* ���� ���� ����:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <cmath>

constexpr unsigned ARR_LEN = 10000001;

int main()
{
	unsigned arr[ARR_LEN];
	unsigned n;
	unsigned m;
	
	cin >> n >> m;

	for (unsigned i = 2; i <= m; ++i)
		arr[i] = i;

	for (unsigned i = 2; i <= sqrt(m); ++i)
	{
		if (0 == arr[i])
			continue;

		for (unsigned j = i * i; j <= m; j += i)
			arr[j] = 0;
	}

	for (unsigned i = n; i <= m; ++i)
	{
		if (0 == arr[i])
			continue;
		
		cout << arr[i] << '\n';
	}

	return 0;
}