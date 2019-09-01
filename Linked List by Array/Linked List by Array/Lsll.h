#ifndef LSLL_H
#define LSLL_H
#include"Node.h"

template <typename T>
class Lsll
{
public:
	Node<T> *data=new Node<T>[100];
	int head;
	int avail;
	Lsll()
	{
		head = -1;
		avail = 0;
		for (int i = 1; i < 100; i++)
		{
			data[i - 1].next = i;

		}
	}
	void displayRam()
	{
		for (int i = 0; i < 100; i++)
		{
			cout<<data[i].info<<"|"<< data[i].next<<"\t";

		}
	}
	void insertAtTail(T val)
	{
		if (head == -1)
		{
			head = getFreeNode();
			data[head].info = val;
			data[head].next = -1;
			
		}
		else
		{
			int p;
			p = head;
			while (data[p].next != -1)
			{
				
				p = data[p].next;
			}
			
			int x = getFreeNode();
			data[x].info = val;
			data[x].next = -1;
			data[p].next = x;
		}
	}
	int getFreeNode()
	{
		if (avail == -1)
		{
			cout << "\n No Free Available";
			return -1;
		}

		int x = avail;
		avail = data[avail].next;
		return x;
	}
	void returnFreeNode(int x)
	{
		data[x].next = avail;
		avail = x;
		
	}
	void display()
	{
		int p = head;
		while (p != -1)
		{
			cout << data[p].info<<" ";
			p = data[p].next;
		}
	}
void insertAfter( T key,T val)
	{
		int p = head;
		while (p != -1)
		{
			if (data[p].info == key)
			{
				int x = getFreeNode();
				if (x >= 0)
				{
					data[x].info = val;
					data[x].next = data[p].next;
					data[p].next = x;
				}
				else
				{
					cout << "\n No Free Space";
				}
			}
			p = data[p].next;
		}
	}
void insertAtHead(T val)
{
	int x = getFreeNode();
	data[x].info = val;
	data[x].next = head;
	head = x;
}
void deleteAtTail()
{
	int p = head;
	
	while (data[data[p].next].next != -1)
	{
		
		p = data[p].next;

	}
	
	returnFreeNode(data[p].next);
	data[p].next = -1;
	
}
void insertBefore(T key,T val)
{
	int p = head;
	while (p != -1)
	{
		
		if (data[data[p].next].info == key)
		{
			
			int x = getFreeNode();
			if (x != head)
			{
				data[x].info = val;
				data[x].next = data[p].next;
				data[p].next = x;
			}
			break;
		}
		p = data[p].next;
	}
}
void deleteAtHead()
{
	int x=head;
	
	head = data[head].next;
	returnFreeNode(x);
	
}
void deleteBefore(T key)
{
	if (head>=0)
	{
		int p = head;
		int prev = p;
		while (p != -1)
		{
			if (data[data[p].next].info == key)
			{
				int z = data[prev].next;
				data[prev].next = data[data[prev].next].next;
				returnFreeNode(z);
				break;
			}
			prev = p;
			p = data[p].next;
		}
	}
}
void deleteByKey(T key)
{
	int p = head;

	while (p != -1)
	{
		if (data[data[p].next].info == key)
		{
			int z = data[p].next;
			data[p].next = data[data[p].next].next;
			returnFreeNode(z);
			break;
		}
		
		p = data[p].next;
	}
}
void deleteAfter(T key)
{
	int p = head;

	while (p != -1)
	{
		if (data[p].info == key)
		{
			int z = data[p].next;
		
			data[p].next = data[data[p].next].next;
			returnFreeNode(z);
			
			break;
		}
		
		p = data[p].next;
	}
}
Lsll<T>& operator=(Lsll<T> & l)
{
	(*this).~Lsll();
	head = l.head;
	avail = l.avail;
	for (int i = 0; i < 100; i++)
	{
		this->data[i] = l.data[i];
	}
	return *this;
}
Lsll(Lsll<T> & l)
{
	head = l.head;
	avail = l.avail;
	for (int i = 0; i < 100; i++)
	{
		this->data[i] = l.data[i];
	}

}
~Lsll()
{
	if (head!=-1)
	{
		delete []data;
		data = 0;
		
	}
}

};

#endif // !LSLL_H

