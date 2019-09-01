#include"Node.h"
template<typename T>
class XorList
{
public:
	Node<T>*head;
	XorList()
	{
		head = 0;
	}
	Node<T>* Xor(Node<T>*a, Node<T>*b)
	{
		return (Node<T>*)((unsigned int)a^(unsigned int)b);
	}
	void insertAtHead(T val)
	{
		if (head)
		{
			Node<T>*x = new Node<T>(val);
			
			x->nextPrev = Xor(0, head);
			head->nextPrev = Xor(x, head->nextPrev);
			
			head = x;
		}
		else 
		{
			Node<T>*x = new Node<T>(val);
			
			x->nextPrev = Xor(0, 0);
			head = x;
		}
		
	}
	void display()
	{
		
		Node<T>*prev=nullptr,*next,*cur = head;
			while (cur != 0) {
				cout << cur ->info << " ";
				next = Xor(prev, cur->nextPrev);
				prev = cur;
				cur = next;
			}
	}
	void remove(T key)
	{
		Node<T>*p = head, *prev = nullptr, *next, *cur = head;
		while(cur) 
		{
			if (cur->info == key)
			{
				cur->nextPrev->nextPrev = p;
				p->nextPrev = cur->nextPrev;
				break;
			}
			p = cur;
			next = Xor(prev, cur->nextPrev);
			prev = cur;
			cur = next;
			
		}
	}
};
