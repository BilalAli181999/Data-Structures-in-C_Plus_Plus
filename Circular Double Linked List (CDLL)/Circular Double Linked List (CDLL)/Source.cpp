#include<iostream>
#include"CDLL.h"
using namespace std;
int main()
{
	Cdll<int> l;
	l.insertAtHead(12);
	l.insertAtHead(32);
	l.insertAtHead(3);
	l.insertAtTail(13);
	l.insertAtTail(44);
	l.insertAtTail(4);
	//l.deleteAtTail();
	//l.deleteAtHead();
	//l.deleteAtHead();
	l.display();
	cout << "\n";
	/*l.displayReverse();*/
	//l.insertAfter(13, 31);
	//l.insertBefore(3, 21);
	/*l.deleteBefore(4);*/
	l.deleteAfter(3);
	l.display();

}