#include<iostream>
#include"Deque.h"
using namespace std;
int main()
{
	Deque<int> d;
	d.insertAtTail(3);
	d.insertAtTail(6);
	d.insertAtTail(5);
	d.insertAtTail(13);
	d.insertAtTail(31);

	d.insertAtHead(99);

	d.deleteAtTail();
	cout << "\n";

}
