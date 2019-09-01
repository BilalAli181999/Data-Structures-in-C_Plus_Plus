#include"DNode.h"
#ifndef LDLL_H
#define LDLL_H
template <typename T>
class Ldll
{
public:
	DNode<T> *head;
	Ldll()
	{
		head = 0;
	}
	void insertAtHead(T val)
	{
		if (head)
		{
			DNode<T>*p = new DNode<T>(val);
			p->next = head;
			head->prev = p;
			head = p;
		}
		else
		{
			DNode<T>*p = new DNode<T>(val);
			p->next = head;
			head = p;
		}
		
	}
	void display()
	{
		DNode<T>*p = head;
		while (p)
		{
			cout << p->info << " ";
			p = p->next;
		}
	}
	void displayReverse()
	{
		DNode<T>*p = head;
		while (p->next!=0)
		{
			
			p = p->next;
		}
		
		while (p)
		{
			cout << p->info<<" ";
			p = p->prev;
		}
	}
	void insertAtTail(T val)
	{
		if (head)
		{
			DNode<T>*p = head;
			while (p->next != 0)
			{

				p = p->next;
			}
			DNode<T>*x = new DNode<T>(val);
			x->prev = p;
			p->next = x;
		}
		else
		{
			insertAtHead(val);
		}
	}
	DNode<T>* searchBefore(T key)
	{
		DNode<T>* p = head;
		while (p)
		{
			if (p->next->info == key)
			{
				return p;
			}
			p = p->next;
		}

	}
	void deleteNodeByKey(T key)
	{
		DNode<T>*p = searchBefore(key);
		p->next = p->next->next;
	}
	void insertBefore(T key, T val)
	{
		if (head)
		{
			DNode<T>*p = head;

			while (p)
			{
				if (p->next->info == key)
				{
					DNode<T>*x = new DNode<T>(val);
					x->prev = p;
					x->next = p->next;
					p->next = x;
					break;
				}
				p = p->next;
			}
		}
		else
		{
			insertAtHead(val);
		}
	}
	void insertAfter(T key, T val)
	{
		if (head)
		{
			DNode<T>*p = head;

			while (p)
			{
				if (p && p->info == key )
				{
					DNode<T>*x = new DNode<T>(val);
					x->prev = p;
					x->next = p->next;
					p->next = x;
					break;
				}
				p = p->next;
			}
		}
		else
		{
			insertAtHead(val);
		}
	}
	void removeAfter(T key)
	{
		if (head)
		{
			DNode<T> *p = head;
			while(p)
			{
				if (p->info == key && p->next->next!=0 )
				{
					p->next = p->next->next;
					p->next->prev=p;
					break;
				}
				p=p->next;
			}
		}
	}
	void deleteNodeByNumber(int n)
	{
		if (n == 1)
		{
			head = head->next;
		}

		else
		{
			DNode<T>*p = head;
			int c = 0;
			while (p)
			{
				c++;
				if (c == n - 1)
				{
					p->next = p->next->next;
				}

				p = p->next;
			}
		}
	}
	void removeBefore(T key)
	{
		int c = 0;
		DNode<T> *z = head;
		while (z != 0 && z->info != key)
		{
			c++;
			z = z->next;
		}

		if (c <= 2)
		{
			deleteNodeByNumber(c);
		}
		else if (head)
		{
			DNode<T> *p = head;
			while (p)
			{
				if (p->next->info == key )
				{
					p->next->prev = p->prev;
					p->prev->next = p->next;
				
					break;
					
				}
				p = p->next;
			}
		}
	}
	void deleteAtHead()
	{
		if (head)
		{
			head = head->next;
		}
	}
	void deleteAtTail()
	{

		if (head)
		{
			DNode<T>*p = head;
			while (p->next != 0 && p->next->next)
			{

				p = p->next;
			}
			delete p->next;
			p->next = 0;
		}

	}
};


#endif  

