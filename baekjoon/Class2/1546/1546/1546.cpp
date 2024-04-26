/*
* Coding Test - Baekjoon (solved.ac - Class 2)
* 파일명: 1546.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-26
* 이전 버전 작성 일자:
* 버전 내용: 1546 - 평균
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

#include <algorithm>
using std::max_element;

void CalcAverage(int n)
{
	vector<double> dVec;
	double grade;
	double max_grade;
	double average = 0;

	for (int i = 0; i != n; ++i)
	{
		cin >> grade;
		dVec.push_back(grade);
	}

	max_grade = *max_element(dVec.begin(), dVec.end());

	for (int i = 0; i != n; ++i)
	{
		dVec[i] = dVec[i] / max_grade * 100;
		average += dVec[i];
	}

	average /= n;

	printf("%lf\n", average);
}

int main()
{
	int n;

	cin >> n;
	CalcAverage(n);

	return 0;
}