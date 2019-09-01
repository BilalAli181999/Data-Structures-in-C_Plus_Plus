#ifndef CDLL_H
#define CDLL_H
#include"Node.h"
template <typename T>
class Cdll
{
public:
	DNode<T>*head;
	Cdll()
	{
		head = 0;
	}
	void insertAtHead(T val)
	{
		if (head)
		{
			DNode<T>*p = new DNode<T>(val);
			p->next = head;
			p->prev = head->prev;
			head->prev->next = p;
			head->prev = p;
			head = p;
		}
		else
		{
			DNode<T>*p = new DNode<T>(val);
			p->next = p;
			p->prev = p;
			head = p;
			
		}
	}
	void display()
	{
		DNode<T>*p = head;
		do
		{
			cout << p->info<<" ";
			p = p->next;
		} while (p != head);
	}
	void insertAtTail(T val)
	{
		if (head)
		{
			DNode<T>*x = new DNode<T>(val);
			x->next = head;
			DNode<T>*p = head;
			do
			{
				
				p = p->next;
			} while (p->next != head);
			x->prev = p;
			p->next = x;
			head->prev = x;
				
		}
		else
		{
			insertAtHead(val);
		}
	}
	void deleteAtTail()
	{
		DNode<T>*pr,*p = head;
		do
		{
			pr = p;
			p = p->next;
		} while (p->next != head);
		pr->next = p->next;
	}
	void deleteAtHead()
	{
		head->next->prev = head->prev;
		DNode<T> *p = head;
		do
		{
			
			p = p->next;
		} while (p->next != head);
		p->next = head->next;
		head = head->next;
	}
	void displayReverse()
	{
		DNode<T>*t,*pr,*p = head;
		do
		{
			pr = p;
			p = p->next;
		} while (p != head);
		t = p;
		do
		{
			cout << pr->info << " ";
			pr = pr->prev;
		} while (pr != t);
		cout << head->info;

	}
	void insertAfter(T key, T val)
	{
		DNode<T> *p = head;
		do
		{
			p = p->next;
		} while (p->prev->info != key);
		DNode<T>*x = new DNode<T>(val);
		if (p == head)
		{
			head = x;
		}
		x->next = p;
		x->prev = p->prev;
		p->prev->next = x;
		p->prev = x;
	}
	void insertBefore(T key, T val)
	{
		DNode<T> *p = head;
		do
		{
			p = p->next;
		} while (p->prev->info != key);
		DNode<T>*x = new DNode<T>(val);
		x->next = p->prev;
		x->prev = p->prev->prev;
		p->prev->prev->next = x;
		p->prev->prev = x;
		
	}
	void deleteBefore(T key)
	{
		DNode<T> *pr=head,*p = head;
		while (p->info != key)
		{
			pr = p;
			p = p->next;
		}
		if (p == head)
		{
			head->prev->prev->next = head;
			head->prev = head->prev->prev;
	    }
		else
		{
			pr->prev->next = p;
			p->prev = pr->prev;
			delete pr;
		}
		

	}
	void deleteAfter(T key)
	{
		DNode<T> *t, *p = head;
		while (p->info != key)
		{
			p = p->next;
		}
		if (p->next == head)
		{
			head = head->next;
		}
		t = p->next;
		p->next = p->next->next;
		p->next->next->prev = p;
		delete t;

	}
};
#endif 
