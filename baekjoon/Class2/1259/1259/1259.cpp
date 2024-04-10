/*
* Coding Test - Baekjoon
* 파일명: 1259.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-10
* 이전 버전 작성 일자: 
* 버전 내용: 1259 - 팰린드롬수
* 이전 버전 내용: 
*/

#include <cstdio>
#include <cstring>

int main()
{
	char arr[6] = { 0, };
	bool isFalindrome;
	
	scanf_s("%s", arr, sizeof(arr));

	while (arr[0] != '0')
	{
		int len = strlen(arr);
		isFalindrome = true;

		for (int i = 0; i != len / 2; ++i)
		{
			if (arr[i] == arr[len - i - 1])
				continue;
			else
			{
				isFalindrome = false;
				break;
			}
		}

		if (isFalindrome)
			printf("yes\n");
		else
			printf("no\n");

		scanf_s("%s", arr, sizeof(arr));
	}
	

	return 0;
}