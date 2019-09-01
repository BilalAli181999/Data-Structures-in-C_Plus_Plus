#include<iostream>
#include"BST.h"
using namespace std;
int main()
{
	BST<int> t;
	t.insert(100, t.getRoot());
	t.insert(25, t.getRoot());
	t.insert(23, t.getRoot());
	t.insert(32, t.getRoot());
	t.insert(12, t.getRoot());
	t.insert(150, t.getRoot());
	t.insert(10, t.getRoot());
	t.insert(125, t.getRoot());
//	cout<<t.search(32, t.getRoot())->info;
//	t.preOrder(t.getRoot());
//	t.parenthesisedView(t.getRoot());
//	t.inOrder(t.getRoot());
	t.remove(100);
	cout << "\n\n";
//	t.parenthesisedView(t.getRoot());
}