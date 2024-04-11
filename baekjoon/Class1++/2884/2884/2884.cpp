/*
* Coding Test - Baekjoon
* 파일명: 2884.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-11
* 이전 버전 작성 일자:
* 버전 내용: 2884 - 알람 시계
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int HOUR = 60;

int main()
{
	int hour;
	int min;

	// 시, 분을 입력
	cin >> hour >> min;

	// 현재 시간에서 입력받은 시간이 음수라면
	if (min - 45 < 0)
	{
		// 시간에서 1을 뺀다
		--hour;

		// 시간이 음수가 되는 경우 -> 23시로 변경
		if (hour < 0)
			hour = 23;

		// 60분에서 뺀다.
		min = HOUR + (min - 45);

	}
	else
		// 그게 아닐 경우 45분을 빼면 끝
		min -= 45;

	cout << hour << ' ' << min << '\n';

	return 0;
}