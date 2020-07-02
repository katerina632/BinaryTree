#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	Tree tree;

	tree.Add(50, 200);
	tree.Add(17, 100);
	tree.Add(12, 12);
	tree.Add(23, 5474);
	tree.Add(19, 54);
	tree.Add(14, 44);
	tree.Add(9, 10);
	tree.Add(72, 30);
	tree.Add(76, 33);
	tree.Add(54, 45);
	tree.Add(67, 11);
	tree.Add(52, 233);
	tree.Add(100, 0);

	tree.PrintKLP(); cout << endl;
	tree.PrintLKP(); cout << endl;
	tree.PrintPKL(); cout << endl;

	cout << tree.Search(67) << endl;

	system("pause");
	return 0;
}