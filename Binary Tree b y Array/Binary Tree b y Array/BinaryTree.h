#ifndef BINARYTREE_H
#define BINARYTREE_H
#include"BitArray.h"
template <typename T>
class BinaryTree
{
private:
	int height;
	int arraySize;
	T *data;
	BitArray *status;
public:
	BinaryTree(int h)
	{
		height = h;
		arraySize = pow(2, height) - 1;
		data = new T[arraySize];
		status = new BitArray(arraySize);
	}
	void setRoot(T v)
	{
		data[0] = v;
		status->on(0);
	}
	T getRoot()
	{
		if (status->checkBitStatus(0))
		{
			return data[0];
		}
	}
	void setLeftChild(T parent, T child)
	{
		int index = search(parent);
	
		if (index == -1)
		{
			return;
		}
		if (2 * index + 1 < arraySize)
		{
			data[2 * index + 1] = child;
			status->on(2 * index + 1);
			
		}
	}
	void levelOrder()
	{
		for (int i = 0; i < arraySize; i++)
		{
			if (status->checkBitStatus(i))
			{
				cout << data[i] << "\t";
			}
		}
	}
	void displayExplorerView()
	{
		for (int i = 1; i <= heightOfTree(); i++)
		{
			for (int j =1 ; j<= noOfNodesInLevel(i); j++)
			{
				if(status->checkBitStatus(j))
				cout << "\t";
			}
			
			displayLevel(i);
			cout << "\n";
		}
	}
	void setRightChild(T parent, T child)
	{
		int index = search(parent);
		if (index == -1)
			return;
		
		if (2 * index + 2 < arraySize)
		{
			data[2 * index + 2] = child;
			
			status->on(2 * index + 2);
		}
	}
	int search(T key,int i=0)
	{
		static int node = -1;
		if (data[i] == key)
		{
			return i;
		}
		 if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			node=search(key,2 * i + 1);
		}
		 if(2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
		node=search(key,2 * i + 2);
		}
		return node;
	}
	T getParent(T node)
	{
		int index = search(node);
		if (index % 2 == 0)
		{
			return data[(index - 2) / 2];
		}
		else
		{
			return data[(index - 1) / 2];
		}
	}
	void remove(T node)
	{

		static int i = 0;
		i=search(node, i);
		if (i == -1)
		{
			
			return;
		}
		status->off(i);
		if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			remove(data[2 * i + 1]);
		}
		if (2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
			remove(data[2 * i + 2]);
		}
		
	}
	void displayAncestors(T node)
	{
		int i=search(node);
		if (i == 0)
		{
			
			return;
		}
		if (i % 2 == 0)
		{
			displayAncestors(data[(i - 2) / 2]);
			cout << data[(i - 2) / 2] << "\n";
		}
		if (i % 2 != 0)
		{
			displayAncestors(data[(i - 1) / 2]);
			cout << data[(i - 1) / 2] << "\n";
		}
	}
	void displayDescendants(T node)
	{
		int i = search(node);
		
		if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			displayDescendants(data[2 * i + 1]);
			cout << data[2 * i + 1] << "\n";
		}
		if (2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
			displayDescendants(data[2 * i + 2]);
			cout << data[2 * i + 2] << "\n";
		}
	}
	int heightOfTree()
	{
		int c = 0;
		for (int i = 0; i < arraySize  ; i++)
		{
			if (status->checkBitStatus(i))
			{
				c=i;
			}
		}
		
			return log2(c+1) + 1;
		
	}
	void preOrder(int i)
	{
		cout << data[i]<<"\n";
		if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			preOrder(2 * i + 1);
		}
		if (2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
			preOrder(2 * i + 2);
		}
	}
	void postOrder(int i=0)
	{
		
		if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			postOrder(2 * i + 1);
		}
		if (2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
			postOrder(2 * i + 2);
		}
		cout << data[i] << "\n";
	}
	void inOrder(int i = 0)
	{
		if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			inOrder(2 * i + 1);
		}
		cout << data[i] << "\n";
		if (2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
			inOrder(2 * i + 2);
		}
	
	}
	void displayLevel(int levelNo)
	{
		for (int i = pow(2, levelNo - 1) - 1; i < pow(2, levelNo) - 1; i++)
		{
			if(status->checkBitStatus(i))
			cout << data[i] << "\t";
		}
	}
	int noOfNodesInLevel(int levelNo)
	{
		int c = 0;
		for (int i = pow(2, levelNo - 1) - 1; i < pow(2, levelNo) - 1; i++)
		{
			c++;
		}
		return c;
	}
	int findLevelOfNode(T node)
	{
		int index = search(node);
		return log2(index + 1) + 1;
	}
	void displayParenthesisedView(int i=0)
	{
		cout << data[i] <<" ";
		if(status->checkBitStatus(2 * i + 1)|| status->checkBitStatus(2 * i + 2))
		cout << "(";
		if (2 * i + 1 < arraySize && status->checkBitStatus(2 * i + 1))
		{
			displayParenthesisedView(2 * i + 1);
		}
		if (status->checkBitStatus(2 * i + 1) || status->checkBitStatus(2 * i + 2))
		cout << ",";
		if (2 * i + 2 < arraySize && status->checkBitStatus(2 * i + 2))
		{
			displayParenthesisedView(2 * i + 2);
		}
		if (status->checkBitStatus(2 * i + 1) || status->checkBitStatus(2 * i + 2))
		cout << ")";
	}
};
#endif // !BINARYTREE_H

