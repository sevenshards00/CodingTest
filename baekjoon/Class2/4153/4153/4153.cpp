/*
* Coding Test - Baekjoon
* ���ϸ�: 4153.cpp
* ���� ����: 0.1
* �ۼ���: Sevenshards
* �ۼ� ����: 2024-04-21
* ���� ���� �ۼ� ����:
* ���� ����: 4153 - �����ﰢ��
* ���� ���� ����:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	while (true)
	{
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		unsigned pow_a = a * a;
		unsigned pow_b = b * b;
		unsigned pow_c = c * c;

		if (pow_a + pow_b == pow_c || pow_a + pow_c == pow_b || pow_b + pow_c == pow_a)
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';

		
	}

	return 0;
}