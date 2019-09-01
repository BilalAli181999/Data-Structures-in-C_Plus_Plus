#ifndef HASH_H
#define HASH_H
#include"AVL.h"
#include<utility>
template <typename T>
class Hash
{
public:
	AVL<T>table;
	AVLNode<T> * current;
	int noOfEnities;

	Hash(int s) :table(s)
	{
		current = table->root;
	}



	void insertEntities(T key, T value)
	{
		current = search(key, table.root);
		if (current)
		{
			cin >> current->arr[current->noOEntities];
		}
		else
			cout << "\n ***Node Not Found***";
	}

	
	AVLNode<T>*  search(T key, AVLNode<T>* p)
	{
		AVLNode<T>*temp = nullptr;
		if (p->info == key)
		{
			return p;
		}
		if (p->left && !temp && key<p->info)
		{
			temp = search(key, p->left);
		}
		if (p->right && !temp && key>p->info)
		{
			temp = search(key, p->right);
		}
		return temp;
	}

	
	void insertNodes(T val)
	{
		table.insertNode(val);
	}

	
	void displayRecord()
	{
		cout << "RollNO: " << "Name: " << "Section: " << "Grade "\n;
		table.inOrder();

	}

};
#endif // !HASH_H


