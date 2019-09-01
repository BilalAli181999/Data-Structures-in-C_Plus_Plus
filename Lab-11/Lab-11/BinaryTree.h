#ifndef BINARYTREE_H
#define BINARYTREE_H
#include"Node.h"
#include<stack>
template <typename T>
class BinaryTree
{
private:
	Node<T>*root;
	bool isEqual(Node<T>*p1, Node<T>*p2);
	bool ifExists(Node<T>*a[], int size, Node<T>*key);
	void removeNode(Node<T>*p);
	Node<T>* getParentNode(T node, Node<T>*p);
	void deepCopy(BinaryTree<T> & t, Node<T>*p1, Node<T>*p2);
	Node<T>* search(T key, Node<T>* p);
public:
	BinaryTree();
	void setRoot(T val);
	T getRoot();
	void setLeftChild(T parent, T child);
	void setRightChild(T parent, T child);
	void preOrder(Node<T>*p);
	void postOrder(Node<T>*p);
	void inOrder(Node<T>*p);
	T getParent(T node, Node<T>*p);
	void remove(T node);
	void displayAncestors(T node, Node<T>*p);
	void displayDescendents(T node);
	int heightOfTree(Node<T>*p);
	void levelOrder(Node<T>*p);
	void displayParenthesisedView(Node<T>*p);
	int getLevelOfNode(T node, Node<T>*p);
	void displayExplorerView(Node<T>*p);
	void displayLevel(int levelNo, Node<T>*p);
	BinaryTree<T> operator=(BinaryTree<T> & t);
	BinaryTree(BinaryTree<T> & t);
	~BinaryTree();
	bool findNode(T node);
	Node<T>* getRootAddress();
	int isInternalNode(T node);
	int isExternalNode(T node);
	T findNodeSiblings(T node);

	
	

};
#endif

