#include<iostream>
#include"BinaryTree.h"
using namespace std;
int main()
{
	BinaryTree<int> t;
	t.setRoot(1);

	t.setRoot(1);
	t.setLeftChild(1, 2);
	t.setRightChild(1, 3);
		t.setLeftChild(2, 4);
	t.setRightChild(2, 5);
	t.setLeftChild(3, 6);
	t.setRightChild(3, 7);
	t.setRightChild(7, 8);
	cout << "\ninOreder\n";
	t.inOrder(t.getRootAddress());
	cout << "\npreOreder\n";
	t.preOrder(t.getRootAddress());
	cout << "\npostOreder\n";
	t.postOrder(t.getRootAddress());
	cout << "\nParent Node of 8 : ";
	cout<<t.getParent(8,t.getRootAddress());
	cout << "\n";
	//cout << "\n After Remove: \n";
	//t.remove(2);
	//t.postOrder(t.getRootAddress());
	cout << "\n DisplayDescendents of 3: ";
	
	
	t.displayDescendents(3);
	cout << "\n Height of Tree: ";
	cout<<t.heightOfTree(t.getRootAddress());
	cout << "\n Level Order\n";
		t.levelOrder(t.getRootAddress());
		cout << "\n Parenthesised View\n";
		t.displayParenthesisedView(t.getRootAddress());
	
	
		cout << "\n";
		BinaryTree<int> t1 = t;
		t1.levelOrder(t.getRootAddress());
		
		
	
}