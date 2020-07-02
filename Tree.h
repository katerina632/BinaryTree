#pragma once
#include <iostream>
using namespace std;

class Tree
{
	struct Node
	{
		int key;
		int data;
		Node* left;
		Node* right;

		Node(int key, int data, Node* left = nullptr, Node* right = nullptr)
			: key(key), data(data), left(left), right(right)
		{ }

		~Node() {
			delete left;
			delete right;
			right = left = nullptr;
		}
	};

	Node* root;

	Node* Copy(const Node* other);

	void Add(int key, int data, Node*& root);	

	void PrintKLP(Node* elem) const;	

	void PrintLKP(Node* elem) const;	

	void PrintPKL(Node* elem) const;	

	int Search(int key, Node* root) const;		

public:

	Tree();

	Tree(const Tree& other);

	~Tree();

	void Add(int key, int data);	

	int Search(int key) const;	

	void PrintKLP() const;
	
	void PrintLKP() const;
	
	void PrintPKL() const;
	
};

