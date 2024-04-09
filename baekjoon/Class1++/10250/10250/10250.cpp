/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10250.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-04-09
* 이전 버전 작성 일자:
* 버전 내용: 10250 - ACM 호텔
* 이전 버전 내용:
*/


// 개같이 풀었음 참고할 코드도 안됨
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	int t;	// Test Case 입력
	int h;	// 높이
	int w;	// 너비
	int n;	// 투숙객 수

	cin >> t;

	bool **arr = nullptr;

	for (int i = 0; i != t; ++i)
	{
		// h, w, n을 입력받음
		cin >> h >> w >> n;
		
		arr = new bool *[h];
		
		for (int j = 0; j != h; ++j)
			arr[j] = new bool[w];
		
		for (int i = 0; i != h; ++i)
			for (int j = 0; j != w; ++j)
				arr[i][j] = false;

		int floor;
		int room_num;

		for (room_num = 0; room_num != w; room_num++)
		{
			if (n == 0)
				break;

			for (floor = h - 1; floor != -1; --floor)
			{
				if (n == 0)
					break;

				arr[floor][room_num] = true;
				--n;
				
			}
		}

		int curr_floor = h - floor - 1;
		int curr_room_num = room_num;
		int result_num = (curr_floor * 100) + curr_room_num;

		cout << result_num << '\n';
	}
	return 0;
}