#include"Node.h"
#include<stack>
#ifndef LSLL_H
#define LSLL_H
template <typename T>
class Lsll
{
private:
	bool availCheck(T *a, int n, int key)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] == key)
				return true;
		}
		return false;
	}
public:
	Node <T> *head;
	int noOfNodes=0;

	
	void display()
	{
		Node<T>*p = head;
		while (p)
		{
			cout << p->info<<" ";
			p = p->next;
	    }
	}
	Node<T>* search( T key)
	{
		Node<T>* p = head;
		if (head->info == key)
			return head;
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
		while (p->next!=0)
		{
			p = p->next;
		}
		return p->info;
	}
	void deleteNode(T key)
	{
		Node<T>*p=search(key);
		if (p == head)
		{
			head = head->next;
		}
		else
		p->next = p->next->next;
	}
	void InsertAtTail(int key)
	{
		
		if (noOfNodes == 0)
		{
			head = new Node<T>(key);
			noOfNodes++;
			
		}
		else
		{
			Node<T> *p = head;
			while (p->next != 0)
			{
				p = p->next;
			}
			p->next = new Node<T>;
			p->next->info = key;
			p->next->next = 0;
			noOfNodes++;
		}
	}
	Lsll<T> doIntersection(Lsll<T> & list2)
	{
		Lsll<T> temp;
		Node<T>* p1;
		Node<T>* p2;
		p1 = (*this).head;
		
	
		while (p1)
		{
			p2 = list2.head;
			while (p2)
			{
				if (p1->info == p2->info)
				{
					temp.InsertAtTail (p1->info);
				}
				p2 = p2->next;
			}
			p1 = p1->next;
		}
		return temp;
	}
	Lsll<T> doUnion(Lsll<T> &list2)
	{
		Lsll <T> intersection = this->doIntersection(list2);
		Lsll<T> temp;
		Node<T>* p1;
		Node<T>* p2;
		Node<T>* p3 = intersection.head;
		p1 = (*this).head;
		p2 = list2.head;
		while (p1)
		{
			temp.InsertAtTail(p1->info);
			p1 = p1->next;
		}
		while (p2)
		{
			temp.InsertAtTail(p2->info);
			p2 = p2->next;
		}
		while (p3)
		{
			temp.deleteNode(p3->info);
			p3 = p3->next;
		}
		return temp;

	}
	bool isEqual(Lsll <T> &list2)
	{
		Node<T>* p1;
		Node<T>* p2;
		p1 = (*this).head;
		p2 = list2.head;


		while (p1 && p2)
		{
			if (p1->info != p2->info)
			{
				return false;
		    }
			p1 = p1->next;
			p2 = p2->next;
		}
		return true;
	}

	Lsll<T> createClone()
	{
		Lsll<T> temp;
		Node<T>* p1;
		p1 = (*this).head;
		while (p1)
		{
			temp.InsertAtTail(p1->info);
			p1 = p1->next;
		}
		return temp;
	}
	void delAlternate()
	{
		Node<T>* p1;
		p1 = (*this).head;
		int c = 0;
		while (p1)
		{
			if (c % 2 != 0)
			{
				deleteNode(p1->info);
			}
			p1 = p1->next;
			c++;
		}
	}
	void splitList(Lsll <T> & list1, Lsll <T> & list2)
	{
		int c1, c2;
		if (this->noOfNodes % 2 == 0)
		{
			c1 = this->noOfNodes / 2;
			c2 = this->noOfNodes - c1;
		}
		else
		{
			c2 = this->noOfNodes / 2;
			c1 = this->noOfNodes - c2;
		}

		Node<T>* p1;
		p1 = (*this).head;

		while (c1--)
		{
			list1.InsertAtTail(p1->info);
			p1 = p1->next;

		}
		while (c2--)
		{
			list2.InsertAtTail(p1->info);
			p1 = p1->next;

		}
	}

	
	void removeDuplicates()
	{
		T* a = new T[noOfNodes];
		int nA = 0;
		Node<T>* p1;
		p1 = (*this).head;

		while (p1)
		{
			if (!availCheck(a, nA, p1->info))
			{
				a[nA] = p1->info;
				nA++;
			}
			else
			{
				deleteNode(p1->info);
			}
			p1 = p1->next;

		}
	}

	Lsll<T> mergeSortedList(Lsll<T> & list2)
	{
		Lsll <T> temp;
		int c1 = 0;
		int c2 = 0;
		Node<T>* p1;
		Node<T>* p2;
		p1 = (*this).head;
		p2 = list2.head;
		while (c1 < this->noOfNodes || c2 < list2.noOfNodes)
		{
			
			if (c1 < this->noOfNodes && c2 < list2.noOfNodes && p1->info < p2->info)
			{
				
				temp.InsertAtTail(p1->info);
				c1++;
				p1 = p1->next;
			}
			else if (c2 < list2.noOfNodes &&c1 < this->noOfNodes && p1->info > p2->info)
			{
				
				temp.InsertAtTail(p2->info);
				c2++;
				p2 = p2->next;
			}
			else if (c1 < this->noOfNodes && c2 < list2.noOfNodes &&p1->info == p2->info)
			{
				temp.InsertAtTail(p1->info);
				c1++;
				p1 = p1->next;
				
				c2++;
				p2 = p2->next;
			}
			else if (c1 == noOfNodes  && c2 < list2.noOfNodes )
			{
				temp.InsertAtTail(p2->info);
				c2++;
				p2 = p2->next;
			}
			else if (c1 < noOfNodes && c2 == list2.noOfNodes)
			{
				temp.InsertAtTail(p1->info);
				c1++;
				p1 = p1->next;
			}
		}
		return temp;
	}

void reversePrint()
{
		if (head->next == 0)
		{
			return;
		}
	else
	{
			head = head->next;
			T p = head->info;
		reversePrint();
		cout << p << " ";
	}
}
void reverseList()
{
	stack<Node<T>*>s;
	Node<T>*p = this->head;
	while (p)
	{
		s.push(p);
		p = p->next;
	}
	head = s.top();
	p = s.top();
	s.pop();
	
	p->next = s.top();
	
	while (!s.empty())
	{
		p = s.top();
		s.pop();
		if (!s.empty())
			p->next = s.top();
		else
			p->next = 0;

	}
}
void swapByData(int m, int n)
{
	Node<T> *p,*p1,*p2;
	p = head;
	int c = 0;
	while (p)
	{
		c++;
		if (c == m)
		{
			p1 = p;
		}
		if (c == n)
		{
			p2 = p;
		}
		p = p->next;
	}
	
	T temp = p1->info;
	p1->info = p2->info;
	p2->info = temp;
	
}
//void reverseLink()
//{
//    Node<T>*p,*prev,*in,*on;
//	prev = head;
//	
//	
//	p = head->next;
//	
//	
//	
//	
//	while (p)
//	{
//		
//		in = p->next;
//		p->next = prev;
//		prev = p;
//		p = in;
//	}
//	head->next = 0;
//	head = prev;
//	
//
//	
//}
void swap(int m,int n)
{
	Node<T> *p, *mP, *nP, *mPr, *nPr;
	p = head;
	int c = 0;
	while (p)
	{
		
		c++;
		if (c == m )
		{
			mP = p;
		}
		if (c == m-1 && m != 1)
		{
			mPr = p;
		}
		if (c == n )
		{
			nP = p;
			
		}
		if (c == n-1 && n!= 1)
		{
			nPr = p;
			
		}
		if ( n <= 1)
		{
			nPr = head;

		}
		if ( m <= 1)
		{
			mPr = head;

		}

		p = p->next;
	
	}

	Node<T> *temp=mP->next;
	mP->next = nP->next;
	nP->next = temp;
	if (m == 1 )
	{
		head = nP;
		nPr->next = mP;
	}
	else
	{
		mPr->next = nP;
	}
	if (n== 1)
	{
		head = mP;
		mPr->next = nP;
	}
	else
	{
		nPr->next = mP;
	}
	
	
	

}
void sort()
{
	Node<T>*p, *k;
	int i = 0, j = 0;
	p = head;
	k = head;
	while (p)
	{
		i++;
		k = head;
		j = 0;
		while (k)
		{
			j++;
			
			if (p->info > k->info)
			{
				swapByData(i, j);
			}
			k = k->next;
		}
		p = p->next;
	}
}
//bool isJoining(Lsll<T> & list2)
//{
//	Node<T>*p1, *p2;
//	p1 = head;
//	
//	while (p1)
//	{
//		p2 = list2.head;
//		while (p2)
//		{
//			if (p1 == p2)
//			{
//				return true;
//			}
//			p2 = p2->next;
//		}
//		p1 = p1->next;
//	}
//	retrun false;
//}
T joiningValue(Lsll<T> & list2)
{
	Node<T>*p1, *p2;
	p1 = head;

	while (p1)
	{
		p2 = list2.head;
		while (p2)
		{
			if (p1 == p2)
			{
				return p1->info;
			}
			p2 = p2->next;
		}
		p1 = p1->next;
	}
	retrun -1;
}
int totalNodes()
{
	Node<T>*p = head;
	int c = 0;
	while(p)
	{
		c++;
		p = p->next;
	}
	return c;
}
void arrange()
{
	for (int i = 1; i <= noOfNodes / 2; i++)
	{
		
		swap(i + 1, noOfNodes);
	}
}
T middlePoint()
{
	Node<T>*p1, *p2;
	p1 = head;
	p2 = head;
	int c = 0;
	while (p1)
	{
		c++;
		p1 = p1->next;
		if (c % 2 == 0)
		{
			p2 = p2->next;
		}
	}
	return p2->info;

}

void pairs(Node<T>*p,int value, int *a, int n)
{
	if (value == 0)
	{
		cout << "(";
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << ")";
		return;
	}
	if (value < 0)
	{
		return;
	}
		Node<T>*x=head;
		while(x)
		{
			a[n] = x->info;
			n++;
			pairs(x, value - (x->info), a, n);
			n--;
			x = x->next;
		}
}
void subsetOfVal(T val)
{
Node<T> *p = head;
static	int sub[100];
	static int nS = 0;

		if (val == 0)
		{
			if (nS == 2)
			{
				for (int i = 0; i < nS; i++)
				{
					cout << sub[i] << ' ';
				}
				cout << "\n";
			}
			
			
		}
		else if (val < 0)
		{
			return;
		}
		else
		{
			while (p->next!=0)
			{
				sub[nS] = p->info;
				nS++;
				subsetOfVal(val - p->info);
				nS--;
				p = p->next;
			}
		}

}
void deleteIfRightGreat()
{
	bool status = 1;
	
	Node<T>*p = head;
	while (p->next)
	{
		
		if (p->next->info > p->info)
		{
			
			deleteNode(p->info);
		}
		p = p->next;
	}
}
void joinLists(Lsll<T>& l2)
{
	Node<T>*p1, *p2;
	p1 = head;
	p2 = l2.head;
	while (p2->next)
	{
		p2 = p2->next;
	}
	int n = 0;
	while (p1)
	{
		n++;
		p1 = p1->next;
	}
	
	p1 = head;
	int c = 0;
	while (c<n/2)
	{
		p1 = p1->next;
		c++;
	}
	p2->next = p1;
}
bool joiningPoint(Lsll<T>& l2)
{
	Node<T>*p1, *p2;
	p1 = head;
	p2 = l2.head;
	
	while (p1->next)
	{
		p1 = p1->next;
		
	}
	while (p2->next)
	{
		p2 = p2->next;
	}
	if (p1 == p2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void giveJoiningPoint(Lsll<T> & l2)
{
	Node<T>*p1, *p2;
	p1 = head;
	p2 = l2.head;
	while (p1 && p2)
	{
	
		if (p1 == p2->next)
		{
			cout << "***Match Found***";
			cout << " at "<<p1;
			return ;
		}
		p1 = p1->next;
		p2 = p2->next;
	}
	
}
void cycleist()
{
	Node<T>*p1,*t;
	p1 = head;
	int n=0;
	while (p1->next)
	{
		n++;
		if (n % 2 == 0)
		{
			t = p1;
		}
		p1 = p1->next;
	}
	p1->next = t;
}
bool isCyclic()
{
	Node<T>*p1, *p2;
	p1 = head;
	p2 = head;
	int c = 1;
	while (p1)
	{
		if (c % 2== 0)
		{
			p2 = p2->next;
		}
		c++;
		p1 = p1->next;
		
		if (p1 == p2)
			return true;
	}
	return false;
}
void removeLargerRight()
{
	Node<T>*prev=head,*p = head;

	while (p)
	{
		if (p->next && p->info < p->next->info)
		{
			prev->next = prev->next -> next;
		}
		prev = p;
		p = p->next;
	}
}
};



#endif
