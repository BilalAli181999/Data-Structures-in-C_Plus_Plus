#include<iostream>
#include"CSLL.h"
using namespace std;
int main()
{
	Csll<int> l;
	l.insertAtHead(23);
	l.insertAtHead(2);
    l.insertAtHead(3);
	l.insertAtHead(4);
	l.insertAtHead(5);
	l.insertAtTail(22);
	l.insertAtTail(77);
//	l.deleteAtTail();
	l.display();
	/*cout << "\n";
	l.deleteAtHead();*/
	cout << "\n";
	//l.insertAfter(77, 7);
	//l.insertBefore(7, 9);

//	l.deleteBefore(22);
	l.deleteAfter(22);
	l.display();
}