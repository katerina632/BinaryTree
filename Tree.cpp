#include "Tree.h"

Tree::Node* Tree::Copy(const Node* other)
{
	if (other == nullptr)
		return nullptr;
	Node* copy = new Node(other->key, other->data);
	copy->left = Copy(other->left);
	copy->right = Copy(other->right);
	return copy;
}

void Tree::Add(int key, int data, Node*& root)
{
	if (root == nullptr)
	{
		root = new Node(key, data);
		return;
	}

	if (key > root->key)
		Add(key, data, root->right);
	else
		Add(key, data, root->left);
}

void Tree::PrintKLP(Node* elem) const
{
	if (elem != nullptr)
	{
		cout << elem->key << ":" << elem->data << " ";

		PrintKLP(elem->left);

		PrintKLP(elem->right);
	}
}

void Tree::PrintLKP(Node* elem) const
{
	if (elem != nullptr)
	{
		PrintLKP(elem->left);

		cout << elem->key << ":" << elem->data << " ";

		PrintLKP(elem->right);
	}
}

void Tree::PrintPKL(Node* elem) const
{
	if (elem != nullptr)
	{
		PrintPKL(elem->right);

		cout << elem->key << ":" << elem->data << " ";

		PrintPKL(elem->left);
	}
}

int Tree::Search(int key, Node* root) const
{
	if (root == nullptr) return 0;

	if (key > root->key)
		Search(key, root->right);
	else if (key < root->key)
		Search(key, root->left);
	else
		return root->data;
}

Tree::Tree() : root(nullptr) {}

Tree::Tree(const Tree& other)
{
	root = Copy(other.root);
}

Tree::~Tree()
{
	delete root;
	root->left = root->right = nullptr;
	root = nullptr;
}

void Tree::Add(int key, int data)
{
	Add(key, data, root);
}

int Tree::Search(int key) const
{
	return Search(key, root);
}

void Tree::PrintKLP() const
{
	PrintKLP(root);
}

void Tree::PrintLKP() const
{
	PrintLKP(root);
}

void Tree::PrintPKL() const
{
	PrintPKL(root);
}


