/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 1918.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-29
* 이전 버전 작성 일자:
* 버전 내용: 1918 - 후위 표기식
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <cstring>

#include <stack>
using std::stack;

void PostFix(const string &expression)
{
	string output;
	stack<char> operatorStack;
	char topOperator;

	for (int i = 0; i != expression.length(); ++i)
	{
		if (expression[i] >= 'A' && expression[i] <= 'Z')
			output.push_back(expression[i]);
		else
		{
            switch (expression[i])
            {
            case '(':
                operatorStack.push(expression[i]);
                break;
            case '*':
            case '/':
                while (!operatorStack.empty() && ('*' == operatorStack.top() || '/' == operatorStack.top()))
                {
                    output.push_back(operatorStack.top());
                    operatorStack.pop();
                }
                operatorStack.push(expression[i]);
                break;
            case '+':
            case '-':
                while (!operatorStack.empty() && ('(' != operatorStack.top()))
                {
                    output.push_back(operatorStack.top());
                    operatorStack.pop();
                }
                operatorStack.push(expression[i]);
                break;
            case ')':
                while (!operatorStack.empty() && ('(' != operatorStack.top()))
                {
                    output.push_back(operatorStack.top());
                    operatorStack.pop();
                }
                operatorStack.pop();
                break;
            }
		}
	}

    while (!operatorStack.empty())
    {
        output.push_back(operatorStack.top());
        operatorStack.pop();
    }

	cout << output << '\n';
}

int main()
{
	string input;
	cin >> input;
	PostFix(input);

	return 0;
}