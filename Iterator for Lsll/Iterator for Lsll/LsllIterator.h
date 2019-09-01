#ifndef LSLLITERATOR_H
#define LSLLITERATOR_H
#include"Lsll.h"
template<typename T>
class LsllIterator
{
private:
	Lsll<T> *list;
	Node<T> *cur;
public:
	LsllIterator()
	{
		list = 0;
		cur = 0;
	}
	LsllIterator(Lsll<T> & l)
	{
		list = l;
		cur = l->head;
	}
	bool operator !()
	{
		return cur == 0;
	}
	void next()
	{
		if (cur)
		{
			cur = cur->next;
		}
	}
	T & operator *()
	{
		if (cur)
		{
			return cur->info;
		}
	}
	void setList(Lsll<T> & l)
	{
		list = &l;
		cur = l.head;
	}
	void begin()
	{
		cur = list->head;
	}
	void display()
	{
		while (!!(*this))
		{
			cout << cur->info << " ";
			next();
		}
	}
	Lsll<T> intersection(LsllIterator<T> &l2)
	{
		Lsll<T> temp;
		while (!!(*this))
		{
			l2.begin();
			while (!!l2)
			{
				if (*(*this) == *l2)
				{
					temp.insertAtHead(*l2);
				}
				l2.next();
			}
			next();
		}
		return temp;
	}
};

#endif