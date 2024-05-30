/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 1620.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-30
* 이전 버전 작성 일자:
* 버전 내용: 1620 - 나는야 포켓몬 마스터 이다솜
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;
using std::ios;

#include <string>
using std::string;
using std::stoi;

#include <vector>
using std::vector;

#include <map>
using std::map;
using std::pair;

int main()
{
	// 개억까 당한 부분
	// 그냥 string 쓰지 말거나 scanf나 prinf 쓸걸 그랬다
	cin.tie(0);
	ios::sync_with_stdio(0);

	unsigned n;
	unsigned m;
	vector<string> pokemonVec;
	map<string, unsigned> pokemonMap;
	string input;
	cin >> n >> m;

	for (unsigned i = 1; i <= n; ++i)
	{
		cin >> input;
		pokemonMap.insert(pair<string, int>(input, i));
		pokemonVec.push_back(input);
	}

	for (unsigned i = 0; i < m; ++i)
	{
		cin >> input;
		if (input[0] >= 'A' && input[0] <= 'Z')
			cout << pokemonMap[input] << '\n';
		else
			cout << pokemonVec[stoi(input) - 1] << '\n';
	}

	return 0;
}