/*
* Coding Test - Baekjoon (solved.ac - Class 4)
* 파일명: 5639.cpp
* 파일 버전: 0.1
* 작성자: Sevenshards
* 작성 일자: 2024-05-22
* 이전 버전 작성 일자:
* 버전 내용: 5639 - 이진 검색 트리
* 이전 버전 내용:
*/

#include <iostream>
using std::cin;
using std::cout;

struct st_Node
{
	st_Node *m_left = nullptr;
	st_Node *m_right = nullptr;
	unsigned m_key;
};

class CBSTree
{
public:
	void Insert(const unsigned &key)
	{
		st_Node *parent = nullptr;
		st_Node *currNode = m_pRoot;
		while (currNode != nullptr)
		{
			parent = currNode;
			if (key < currNode->m_key)
				currNode = currNode->m_left;
			else
				currNode = currNode->m_right;
		}

		st_Node *newNode = new st_Node;
		newNode->m_key = key;

		if (nullptr == parent)
			m_pRoot = newNode;
		else if (newNode->m_key < parent->m_key)
			parent->m_left = newNode;
		else
			parent->m_right = newNode;
	}

	void PostOrder(const st_Node *pNode)
	{
		if (nullptr == pNode)
			return;

		PostOrder(pNode->m_left);
		PostOrder(pNode->m_right);
		cout << pNode->m_key << '\n';
	}

	void Destroy(st_Node *pNode)
	{
		if (nullptr == pNode)
			return;

		Destroy(pNode->m_left);
		Destroy(pNode->m_right);
		delete pNode;
	}

	st_Node *GetRootNode()
	{
		return m_pRoot;
	}

private:
	st_Node *m_pRoot = nullptr;
};

void PostOrder(const st_Node *pNode)
{
	if (nullptr == pNode)
		return;

	PostOrder(pNode->m_left);
	PostOrder(pNode->m_right);
	cout << pNode->m_key;
}

int main()
{
	unsigned input;
	CBSTree bsTree;
	while (cin >> input)
		bsTree.Insert(input);

	st_Node *rootNode = bsTree.GetRootNode();
	bsTree.PostOrder(rootNode);
	bsTree.Destroy(rootNode);

	return 0;
}