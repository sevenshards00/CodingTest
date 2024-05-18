/*
* Coding Test - Baekjoon (solved.ac - Class 3)
* 파일명: 17219.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-18
* 이전 버전 작성 일자:
* 버전 내용: 17219 - 비밀번호 찾기
* 이전 버전 내용:
*/

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <string>
using std::string;

#include <map>
using std::map;
using std::pair;

constexpr int ARR_LEN = 20;

void FindPasswd(const int &n, const int &m)
{
	map<string, string> passwdTable;
	char tempURL[ARR_LEN];
	char tempPasswd[ARR_LEN];
	string strURL;
	string strPasswd;
	
	for (int i = 0; i != n; ++i)
	{
		scanf("%s %s", tempURL, tempPasswd);
		strURL = tempURL;
		strPasswd = tempPasswd;
		passwdTable.insert(pair<string, string>(strURL, strPasswd));
	}

	for (int i = 0; i != m; ++i)
	{
		scanf("%s", tempURL);
		strURL = tempURL;
		printf("%s\n", passwdTable.find(strURL)->second.c_str());
	}
}

int main()
{
	int n;
	int m;

	scanf("%d %d", &n, &m);
	FindPasswd(n, m);

	return 0;
}