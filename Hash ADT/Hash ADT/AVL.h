#ifndef AVL_H
#define AVL_H

#include<iostream>
#include<stack>
#include"AVLNode.h"

using namespace std;

template<typename T>
class AVL
{

private:

	AVLNode<T> * root;

	void inOrder(AVLNode<T> * ref);

	int calcDifference(AVLNode<T> * ref);

	void correctHeight(AVLNode<T>*ref);

	int checkRotationType(AVLNode<T> * ref);

	void modifyHeight(AVLNode<T> * ref);

	void rotateClockwise(AVLNode<T> * parent, AVLNode<T> * pivot);

	void rotateAntiClockwise(AVLNode<T> * parent, AVLNode<T> * pivot);


public:

	AVL();

	void insertNode(T val);

	bool search(T key);

	void inOrder();

	void removeNode(T val);

	~AVL();

};

#endif
