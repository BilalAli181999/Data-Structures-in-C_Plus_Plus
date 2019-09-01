#ifndef AVLNode_H
#define AVLNode_H

template <typename T>
class AVLNode
{

public:

	T info;
	T *arr;
	int height;
	int noOfEnities;
	AVLNode<T> * left;
	AVLNode<T> * right;

	AVLNode(int s=0,T val = 0)
	{

		info = val;
		left = nullptr;
		right = nullptr;
		arr = new T[s];
		height = 1;
		noOfEnities = 0;
	}

	~AVLNode()
	{
		left = nullptr;
		right = nullptr;
	}

};

#endif
