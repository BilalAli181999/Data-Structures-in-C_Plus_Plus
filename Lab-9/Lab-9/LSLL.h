#ifndef LSLL_H
#define LSLL_H
#include"Node.h"
template <typename T>
class Lsll
{
public:
	Node<T>*head;
	Lsll()
	{
		head = 0;
	}
	void insertAtHead(T val)
	{
		Node<T>*p = new Node<T>(val);
		p->next = head;
		head = p;
	}
	void insertAtTail(T val)
	{
		if (head)
		{
			Node<T> *p = head;
			while (p->next!=0)
			{
				p = p->next;
			}
			p->next = new Node<T>(val);

		}
		else
			insertAtHead(val);
	}
	void display()
	{
		Node<T>*p = head;
		while (p)
		{
			cout << p->info<<" ";
			p = p->next;
		}
	}
	Node<T>* searchBefore(T key)
	{
		Node<T>* p = head;
		while (p)
		{
			if (p->next->info == key)
			{
				return p;
			}
			p = p->next;
		}
	
	}
	T getTailNode()
	{
		Node<T>*p = head;
		while (p->next != 0)
		{
			p = p->next;
		}
		return p->info;
	}
	void deleteNodeByKey(T key)
	{
		Node<T>*p = searchBefore(key);
		p->next = p->next->next;
	}
	void deleteNodeByNumber(int n)
	{
		if (n == 1)
		{
			head = head->next;
		}
		
		else
		{
			Node<T>*p = head;
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
	void insertBefore(T key, T val)
	{
		int c=0;
		Node<T> *z = head;
		while ( z!=0 && z->info!=key)
		{
			c++;
			z = z->next;
		}

		if (c>1)
		{
			Node<T> *prev = head;
			Node<T> *p = head->next;
			while (p)
			{
				if (p->info == key)
				{
					Node<T>*x = new Node<T>(val);
					x->next = p;
					prev->next = x;
					break;
				}
				prev = p;
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
			Node<T> *p = head;
			while (p)
			{
				if (p->info == key)
				{
					Node<T> *n = p->next;
					Node<T>*x = new Node<T>(val);
					x->next = n;
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
	void deleteBefore(T key)
	{
		int c = 0;
		Node<T> *z = head;
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
			Node<T> *prev = head;
			Node<T> *p = head->next->next;
			while (p != 0)
			{
				if (p->info == key)
				{
					delete prev->next;
					prev->next = p;
					break;
				}
				prev = prev->next;
				p = p->next;
			}
		}
	}
	void deleteAfter(T key)
	{
		if (head)
		{
			Node<T> *p = head;
			while (p)
			{
				if (p->info == key && p->next!=0)
				{
					Node<T> *temp = p->next->next;
					delete p->next;
					p->next = temp;
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
	void printAndDeleteAtHead()
	{
		if (head)
		{
			cout << head->info << "\n";
			head = head->next;
		}
	}
	void deleteAtTail()
	{
		
		if (head)
		{
			Node<T>*p = head;
			while (p->next!=0 &&p->next->next)
			{
				
				p = p->next;
			}
			delete p->next;
			p->next = 0;
		}
		
	}
	bool sameTeam(int a[], int size, int first)
	{
		bool s1 = 0;
		for (int i = 0; i < size && !s1; i++)
		{
			if (a[i] == first)
			{
				s1 = 1;
			}

		}
		return s1;
	}
	void sameTeamInsert( int t[],int s,int enque)
	{
		
		
	
		Node<T>*p = head;

		while(p)
		{
			
			if(sameTeam(t, s, p->info))
			{
				
				if (p->next != 0 && sameTeam(t, s, p->next->info))
				{
					p = p->next;
				}
				else
				{
					Node<T>*x = new Node<T>(enque);
					
					x->next = p->next;
					p->next = x;
					break;
				}
				
				p = p->next;
			}
			else
			{

				insertAtTail(enque);
				break;
				//p = p->next;
			}
			
		}
		display();
		cout << "\n";
	}

};

#endif 


