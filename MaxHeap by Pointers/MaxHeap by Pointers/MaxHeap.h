#ifndef MAXHEAP_H
#define MAXHEAP_H
#include<iostream>
using namespace std;
#include"Node.h"
#include<stack>
template <typename T>
class MaxHeap
{
	void deleteNode(int noOfNodes)
	{
		stack<int> s = binaryConverter(noOfNodes);
		Node<T>*p = root, *prev;
		while (s.size())
		{
			int id = s.top();
			if (id == 1)
			{
				prev = p;
				p = p->right;
			}

			else
			{
				prev = p;
				p = p->left;
			}
			s.pop();
		}
		root->info = p->info;
		if (prev->right && prev->right->info == p->info)
		{
			delete p;
			prev->right = nullptr;
			noOfNodes--;
		}
		if (prev->left &&prev->left->info == p->info)
		{

			delete p;
			prev->left = nullptr;
			noOfNodes--;
		}
		heapDown();
	}
	stack<T> binaryConverter(int n)
	{
		stack<int>s;
		while (n)
		{
			s.push(n % 2);
			n = n / 2;
		}
			s.pop();
		return s;

	}
	void swap(Node<T>*a, Node<T>*b)
	{
		T c = a->info;
		a->info = b->info;
		b->info = c;
	}
	void heapUp(stack<Node<T>*>s)
	{
		while (!s.empty())
		{
			Node<T>*p = s.top();
			s.pop();
			if (p->left && p->right && p->info < p->left->info)
			{
				swap(p, p->left);
			}
			if (p->left && p->right && p->info < p->right->info)  //check with else if
			{
				swap(p, p->right);
			}
			if (p->left && !p->right && p->info < p->left->info)  //check with else if
			{
				swap(p, p->left);
			}
			if (!p->left && p->right && p->info < p->right->info)  //check with else if
			{
				swap(p, p->right);
			}
			
		}
		
	}
	void heapDown()
	{
		Node<T>*p = root;
		bool status = 1;
		while (status)
		{
			if (p->right && p->left && p->left->info > p->right->info)
			{
				swap(p, p->left);
				p = p->left;
			}
			else if (p->right && p->left && p->left->info < p->right->info)
			{
				swap(p, p->right);
				p = p->right;
			}
			else if (p->right && !p->left && p->right->info > p->info)
			{
				swap(p, p->right);
				p = p->right;
			}
			else if (!p->right && p->left && p->left->info > p->info)
			{
				swap(p, p->left);
				p = p->left;
			}
			else if (p->right && p->left && p->left->info == p->right->info)
			{
				swap(p, p->left);
				p = p->left;
			}
			else
			{
				status = 0;
			}

		}
	}
public:
	Node<T>*root;
	int noOfNodes;
	MaxHeap()
	{
		root = nullptr;
		noOfNodes = 0;
	}
	
	void displayParenthesized(Node<T>*p)
	{
		cout << p->info;
		cout<< "(";
		if (p->left)
		{
			displayParenthesized(p->left);
		}
		cout << ",";
		if (p->right)
		{
			displayParenthesized(p->right);
		}
		cout << ")";
	}
	
	T getMax()
	{
		T val = root->info;
		deleteNode(noOfNodes);
		noOfNodes--;
		return val;
	}
	void insert(T val)
	{
		if (noOfNodes == 0)
		{
			if (root == nullptr)
			{
				root = new Node<T>(val);
				noOfNodes++;
			}
		}
		else
		{
			stack<int>s=binaryConverter(noOfNodes+1);
			stack<Node<T>*>sP;
			
		
			Node<T>*p=root;
			do
			{
				int dir = s.top();
				sP.push(p);
				if (dir == 1 && s.size() == 1)
				{
					p->right = new Node<T>(val);
					heapUp(sP);
					noOfNodes++;
				}
				else if (dir == 0 && s.size() == 1)
				{
					p->left = new Node<T>(val);
					heapUp(sP);
					noOfNodes++;
				}
				else
				{
					if (dir == 1)
						p = p->right;
					else
						p = p->left;
				}
				s.pop();
				
			}while (s.size());
		}
	}

};
#endif // !MAXHEAP_H
