/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 14681.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 14681 - 사분면 고르기
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int x;
    int y;

    cin >> x >> y;
    do
    {
        if (x > 0 && y > 0)
        {
            cout << 1;
            break;
        }
        if (x < 0 && y > 0)
        {
            cout << 2;
            break;
        }
        if (x < 0 && y < 0)
        {
            cout << 3;
            break;
        }
        if (x > 0 && y < 0)
        {
            cout << 4;
            break;
        }

    } while (0);
    return 0;
}