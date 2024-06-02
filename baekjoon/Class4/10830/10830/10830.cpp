/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 10830.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-06-03
* 이전 버전 작성 일자:
* 버전 내용: 10830 - 행렬 제곱
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

constexpr int MATRIX_LEN = 5;
constexpr unsigned long long MODULAR = 1000;

class CMatrix
{
public:
	CMatrix()
		:m_MatrixSize(MATRIX_LEN)
	{
		memset(m_Matrix, 0, sizeof(m_Matrix));
		for (int i = 0; i != m_MatrixSize; ++i)
					m_Matrix[i][i] = 1;
	}

	CMatrix(const int &n)
		:m_MatrixSize(n)
	{
		memset(m_Matrix, 0, sizeof(m_Matrix));
		for (int i = 0; i != m_MatrixSize; ++i)
		{
			for (int j = 0; j != m_MatrixSize; ++j)
				scanf("%llu", &m_Matrix[i][j]);
		}
	}

	CMatrix operator*(const CMatrix &ref)
	{
		CMatrix temp;
		memset(temp.m_Matrix, 0, sizeof(temp.m_Matrix));
		for (int i = 0; i != m_MatrixSize; ++i)
		{
			for (int j = 0; j != m_MatrixSize; ++j)
			{
				for (int k = 0; k != m_MatrixSize; ++k)
				{
					temp.m_Matrix[i][j] += (m_Matrix[i][k] * ref.m_Matrix[k][j]);
				}
				temp.m_Matrix[i][j] %= MODULAR;
			}
		}
		for (int i = 0; i != m_MatrixSize; ++i)
		{
			for (int j = 0; j != m_MatrixSize; ++j)
			{
				m_Matrix[i][j] = temp.m_Matrix[i][j];
			}
		}

		return *this;
	}

	void GetResult(const int &ref)
	{
		for (int i = 0; i != ref; ++i)
		{
			for (int j = 0; j != ref; ++j)
				printf("%llu ", m_Matrix[i][j]);
			printf("\n");
		}
	}
private:
	unsigned long long m_Matrix[MATRIX_LEN][MATRIX_LEN];
	unsigned long long m_MatrixSize;
};

int main()
{
	int n;
	unsigned long long b;
	scanf("%d %llu", &n, &b);

	CMatrix c_ResultMatrix;
	CMatrix c_InputMatrix(n);

	while (b > 0)
	{
		if (b % 2 != 0)
			c_ResultMatrix = c_ResultMatrix * c_InputMatrix;
		
		c_InputMatrix = c_InputMatrix * c_InputMatrix;
		b /= 2;
	}

	c_ResultMatrix.GetResult(n);
	return 0;
}