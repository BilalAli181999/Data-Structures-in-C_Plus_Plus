#include<iostream>
#include"Lsll.h"
using namespace std;
int main()
{
	
	Lsll<int> l, l1;
	l.insertAtTail(3);
	l.insertAtTail(5);
	l.insertAtTail(2);
	l.insertAtTail(4);
	l.insertAtTail(5);
	l.insertAtTail(24);

	
	cout << "\n";
//	Lsll<int>l1(l);
	l1 = l;
	l1.display();
	
	
//	//l.deleteAtTail();
////	l.deleteAtTail();
////	l.displayRam();
//	
//	l.insertAtTail(99);
////	l.displayRam();
//	l.insertBefore(24, 77);
//	l.insertAfter(77, 32);
//
////	l.displayRam();
//	l.deleteAtTail();
//	
//
//	l.insertAtHead(52);
//	//	l.displayRam();
//	l.display();
//	cout << "\n\n\n";
//	l.deleteAtHead();
//	//l.displayRam();
//	l.deleteBefore(5);
//l.deleteByKey(99);
//	
//	l.deleteAfter(77);
//	cout << "\n\n";
////l.displayRam();
//	l.display();
}