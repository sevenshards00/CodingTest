/*
* Coding Test - Baekjoon (새싹 난이도)
* 파일명: 10872.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-01-21
* 이전 버전 작성 일자:
* 버전 내용: 10872 - 팩토리얼
* 이전 버전 내용:
*/

#include <iostream>
using std::cout;
using std::cin;

int factorial(int n)
{
    int result = 1;

    while (n >= 0)
    {
        if (n == 0 || n == 1)
            return result;

        result = result * (n--);
    }

    return result;
}

int main()
{
    unsigned int input;
    cin >> input;
    cout << factorial(input);

    return 0;
}