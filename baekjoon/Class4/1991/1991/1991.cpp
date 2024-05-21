/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 1991.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-21
* 이전 버전 작성 일자:
* 버전 내용: 1991 - 트리 순회
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

constexpr int NODE_MAX = 26;

struct st_Node
{
	char m_data;
	st_Node *m_left = nullptr;
	st_Node *m_right = nullptr;
};

void PreOrder(const st_Node *pNode)
{
	if (nullptr == pNode)
		return;

	cout << pNode->m_data;
	PreOrder(pNode->m_left);
	PreOrder(pNode->m_right);
}

void InOrder(const st_Node *pNode)
{
	if (nullptr == pNode)
		return;

	InOrder(pNode->m_left);
	cout << pNode->m_data;
	InOrder(pNode->m_right);
}

void PostOrder(const st_Node *pNode)
{
	if (nullptr == pNode)
		return;

	PostOrder(pNode->m_left);
	PostOrder(pNode->m_right);
	cout << pNode->m_data;
}

void MakeConnection(st_Node *pNode, st_Node *newNode)
{
	if (nullptr != pNode->m_left)
	{
		if (pNode->m_left->m_data == newNode->m_data)
		{
			delete pNode->m_left;
			pNode->m_left = newNode;
		}
		else
			MakeConnection(pNode->m_left, newNode);
	}

	if (nullptr != pNode->m_right)
	{
		if (pNode->m_right->m_data == newNode->m_data)
		{
			delete pNode->m_right;
			pNode->m_right = newNode;
		}
		else
			MakeConnection(pNode->m_right, newNode);
	}
}

void DestroyTree(st_Node *pNode)
{
	if (nullptr == pNode)
		return;

	DestroyTree(pNode->m_left);
	DestroyTree(pNode->m_right);
	delete pNode;
}

int main() {
	int N;
	cin >> N;

	char root, left, right;

	cin >> root >> left >> right;
	st_Node *rootNode = new st_Node;
	rootNode->m_data = root;

	if ('.' != left)
	{
		rootNode->m_left = new st_Node;
		rootNode->m_left->m_data = left;
	}

	if ('.' != right)
	{
		rootNode->m_right = new st_Node;
		rootNode->m_right->m_data = right;
	}

	for (int i = 1; i != N; ++i)
	{
		cin >> root >> left >> right;
		st_Node *newNode = new st_Node;
		newNode->m_data = root;
		MakeConnection(rootNode, newNode);
		if ('.' == left)
			newNode->m_left = nullptr;
		else
		{
			newNode->m_left = new st_Node;
			newNode->m_left->m_data = left;
		}

		if ('.' == right)
			newNode->m_right = nullptr;
		else
		{
			newNode->m_right = new st_Node;
			newNode->m_right->m_data = right;
		}
	}

	PreOrder(rootNode);
	cout << '\n';

	InOrder(rootNode);
	cout << '\n';

	PostOrder(rootNode);
	cout << '\n';

	DestroyTree(rootNode);

	return 0;
}