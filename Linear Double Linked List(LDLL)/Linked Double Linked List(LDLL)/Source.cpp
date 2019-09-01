#include<iostream>
#include"Ldll.h"
using namespace std;
int main()
{
	Ldll<int> l,l2;// , l1;
	l.insertAtHead(23);
	l.insertAtHead(3);
	l.insertAtHead(35);
	l.insertAtTail(25);
	l.insertAtTail(6);
    //l.deleteNodeByKey(3);
	l.insertBefore(6,90);
	l.insertAfter(23, 70);
//	l.display();
//	l.deleteAtHead();
//	l.deleteAtTail();
	//l.removeAfter(90);
//	l.removeBefore(23);
//	l.removeBefore(35);
	l.insertAfter(35,22);
	l.display();
	cout << "\n";
	
	Ldll<int>l1 = l;
	l2 = l1;
	l2.display();
//	l.displayReverse();
}