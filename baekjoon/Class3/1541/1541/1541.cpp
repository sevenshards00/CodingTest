/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1541.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-18
* 이전 버전 작성 일자:
* 버전 내용: 1541 - 잃어버린 괄호
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
using std::vector;

constexpr int MAX_LEN = 51;

int CalcMin(const char *str)
{
	char str_operand[6];
	vector<int> operandVec;
	vector<char> operatorVec;
	int expr_len = strlen(str);
	int idx = 0;
	int result = 0;

	for (int i = 0; i <= expr_len; ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
			str_operand[idx++] = str[i];
		else
		{
			if (str[i] != '\0')
				operatorVec.push_back(str[i]);
			str_operand[5] = '\0';
			operandVec.push_back(atoi(str_operand));
			memset(str_operand, 0, sizeof(str_operand));
			idx = 0;
		}
	}

	result += operandVec[0];
		
	for (int i = 0; i != operatorVec.size(); ++i)
	{
		if (operatorVec[i] == '-')
		{
			for (int j = i + 1; j != operandVec.size(); ++j)
				result -= operandVec[j];

			return result;
		}

		result += operandVec[i + 1];
	}

	return result;
}

int main()
{
	char expr_arr[MAX_LEN];
	scanf("%s", expr_arr);
	printf("%d\n", CalcMin(expr_arr));
	return 0;
}