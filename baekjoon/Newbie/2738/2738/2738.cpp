/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 2738.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-22
* 이전 버전 작성 일자:
* 버전 내용: 2738 - 행렬 덧셈
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
using std::vector;

int main()
{
	int n;
	int m;
	cin >> n >> m;
	vector<vector<int>> ivec_matrix1(n, vector<int>(m, 0));
	vector<vector<int>> ivec_matrix2(n, vector<int>(m, 0));

	for (int i = 0; i != n; ++i)
		for (int j = 0; j != m; ++j)
			cin >> ivec_matrix1[i][j];

	for (int i = 0; i != n; ++i)
		for (int j = 0; j != m; ++j)
			cin >> ivec_matrix2[i][j];

	for (int i = 0; i != n; ++i)
	{
		for (int j = 0; j != m; ++j)
			cout << ivec_matrix1[i][j] + ivec_matrix2[i][j] << " ";
		cout << '\n';
	}
	return 0;
}