#include<iostream>
#include"Lsll.h"
#include"LsllIterator.h"
using namespace std;
int main()
{
	Lsll<int> l,l2,intersection;
	l.insertAtHead(23);
	l.insertAtHead(2);
	l.insertAtHead(3);
	l2.insertAtHead(13);
	l2.insertAtHead(2);
	l2.insertAtHead(3);
	LsllIterator<int> i,j;
	i.setList(l);
	j.setList(l2);
	while (!!i)
	{
		cout << *i << " ";
		i.next();
	}
	i.begin();
	/*i.display();*/
	intersection = i.intersection(j);
	intersection.display();
}
