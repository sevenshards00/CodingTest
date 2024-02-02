/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2754.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-02-02
* 이전 버전 작성 일자:
* 버전 내용: 2754 - 학점 계산
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

int main()
{
	string grade;
	double result;
	
	do
	{
		cin >> grade;
		if (grade.compare("A+") == 0)
		{
			result = 4.3;
			break;
		}
		if (grade.compare("A0") == 0)
		{
			result = 4.0;
			break;
		}
		if (grade.compare("A-") == 0)
		{
			result = 3.7;
			break;
		}
		if (grade.compare("B+") == 0)
		{
			result = 3.3;
			break;
		}
		if (grade.compare("B0") == 0)
		{
			result = 3.0;
			break;
		}
		if (grade.compare("B-") == 0)
		{
			result = 2.7;
			break;
		}
		if (grade.compare("C+") == 0)
		{
			result = 2.3;
			break;
		}
		if (grade.compare("C0") == 0)
		{
			result = 2.0;
			break;
		}
		if (grade.compare("C-") == 0)
		{
			result = 1.7;
			break;
		}
		if (grade.compare("D+") == 0)
		{
			result = 1.3;
			break;
		}
		if (grade.compare("D0") == 0)
		{
			result = 1.0;
			break;
		}
		if (grade.compare("D-") == 0)
		{
			result = 0.7;
			break;
		}
		if (grade.compare("F") == 0)
		{
			result = 0.0;
			break;
		}
	} while (0);
	
	printf("%.1lf", result);
	return 0;
}