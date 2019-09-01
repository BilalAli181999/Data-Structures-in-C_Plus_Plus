#ifndef CSLL_H
#define CSLL_H
#include"Node.h"
template<typename T>
class Csll
{
public:
	Node<T>*head;
	Csll()
	{
		head = 0;
	}
	void insertAtHead(T val)
	{
	
		if (head == 0)
		{
			Node<T>*x = new Node<T>(val);
			head = x;
			x->next = head;
	
		}
		else
		{
			Node<T>*x = new Node<T>(val);
			x->next = head;
		
			Node<T>*p = head;
			do
			{
				p = p->next;
			} while (p->next != head);
			p->next = x;
	
				head = x;
			
		}
	}
	void display()
	{
		Node<T>*p = head;
		
		do
		{
			
			cout << p->info<< " ";
			p = p->next;
			
		} 
		while (p != head);
	}
	void insertAtTail(T val)
	{
		if (!head)
		{
			insertAtHead(val);
		}
		else
		{
			Node<T>*x = new Node<T>(val);
			Node<T>*p = head;
			do
			{
				p = p->next;
			} while (p->next != head);
			x->next = p->next;
			p->next = x;
		}
	}
	void deleteAtTail()
	{
		Node<T>*prev,*p = head;
		do
		{
			prev = p;
			p = p->next;
		} while (p->next != head);
		prev->next = p->next;

	}
	void deleteAtHead()
	{
		
		Node<T> *p = head;
		do
		{
			p = p->next;
		} while (p->next != head);
		p->next = head->next;
		head = head->next;
	}
	void insertAfter(T key,T val)
	{
		Node<T>*p=head;
		while (p->info != key)
		{
			p = p->next;
		}
		Node<T>*x = new Node<T>(val);
		
		x->next = p->next;
		p->next = x;
	}
	void insertBefore(T key, T val)
	{
		Node<T>*p = head;
		while (p->next->info != key)
		{
			p = p->next;
		}
		Node<T>*x = new Node<T>(val);

		x->next = p->next;
		p->next = x;
	}
	void deleteBefore(T key)
	{
		if (head->next->info == key)
		{
			head = head->next;
		}
		else if (head)
		{
			Node<T>*t,*p = head;
			while (p->next->next->info != key)
			{
				p = p->next;
			}
			t = p->next;
			p->next = p->next->next;
			delete t;
		}
	}
	void deleteAfter(T key)
	{
		
			Node<T>*t, *p = head;
			while (p->info != key)
			{
				p = p->next;
			}
			t = p->next;
			p->next = p->next->next;
			delete t;
		
	}
};

#endif // !NODE_H

