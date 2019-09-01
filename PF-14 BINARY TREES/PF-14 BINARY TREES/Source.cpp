#include<iostream>
#include"BinaryTree.h"
using namespace std;
int main()
{
	BinaryTree<char> t(4);
	t.setRoot('a');
	t.setLeftChild('a', 'b');
	t.setRightChild('a','c');
	t.setLeftChild('c', 'f');
//	t.setRightChild('c', 'g');
	t.setLeftChild('b', 'd');
	t.setRightChild('b', 'e');
	
	t.displayExplorerView();
 //   cout<<t.countNodes();
//	cout << t.minValue();
//	cout << t.countLeafNodes();
	t.nonRecPreOrder();
	

}