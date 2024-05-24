/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 11444.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-24
* 이전 버전 작성 일자:
* 버전 내용: 11444 - 피보나치 수 6
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

constexpr int MATRIX_LEN = 2;
constexpr unsigned long long MODULAR = 1000000007;

class CMatrix
{
public:
	CMatrix(const int &a, const int &b, const int &c, const int &d)
	{
		m_Matrix[0][0] = a;
		m_Matrix[0][1] = b;
		m_Matrix[1][0] = c;
		m_Matrix[1][1] = d;
	}

	CMatrix operator*(const CMatrix &ref)
	{
		CMatrix temp(1, 1, 1, 0);
		temp.m_Matrix[0][0] = m_Matrix[0][0] * ref.m_Matrix[0][0] + m_Matrix[0][1] * ref.m_Matrix[1][0];
		temp.m_Matrix[0][1] = m_Matrix[0][0] * ref.m_Matrix[1][0] + m_Matrix[0][1] * ref.m_Matrix[1][1];
		temp.m_Matrix[1][0] = m_Matrix[1][0] * ref.m_Matrix[0][0] + m_Matrix[1][1] * ref.m_Matrix[1][0];
		temp.m_Matrix[1][1] = m_Matrix[1][0] * ref.m_Matrix[1][0] + m_Matrix[1][1] * ref.m_Matrix[1][1];

		m_Matrix[0][0] = temp.m_Matrix[0][0] % MODULAR;
		m_Matrix[0][1] = temp.m_Matrix[0][1] % MODULAR;
		m_Matrix[1][0] = temp.m_Matrix[1][0] % MODULAR;
		m_Matrix[1][1] = temp.m_Matrix[1][1] % MODULAR;

		return *this;
	}

	unsigned long long GetResult()
	{
		return m_Matrix[0][1];
	}
private:
	unsigned long long m_Matrix[MATRIX_LEN][MATRIX_LEN];
};

int main()
{
	unsigned long long n;

	scanf("%llu", &n);

	CMatrix c_ResultMatrix(1, 0, 0, 1);
	CMatrix c_FiboMatrix(1, 1, 1, 0);

	while (n > 0)
	{
		if (n % 2 != 0)
			c_ResultMatrix = c_ResultMatrix * c_FiboMatrix;

		c_FiboMatrix = c_FiboMatrix * c_FiboMatrix;
		n /= 2;
	}

	printf("%llu\n", c_ResultMatrix.GetResult());

	return 0;
}