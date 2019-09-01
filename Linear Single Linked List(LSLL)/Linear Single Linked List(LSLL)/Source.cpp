#include<iostream>
#include"LSLL.h"
using namespace std;
//int main()
//{
//	Lsll<int> l1;
// // l1.insertAtHead(23);
//  // l1.insertAtHead(30);
////	l1.insertAtTail(12);
//	
// //   l1.deleteNodeByKey(12);
////l1.insertBefore(30, 40);
//	l1.insertAfter(12, 9);
//	l1.display();
//	//l1.deleteBefore(9);
////	l1.deleteAfter(9);
//	//l1.deleteNodeByNumber(1);
//	//l1.deleteAtHead();
//	l1.deleteAtTail();
//    l1.deleteAtTail();
//	cout << "\n";
//	l1.display();
//}

int main()
{
	Lsll<int> l ;// l2;
	l.insertAtTail(1);
	l.insertAtTail(2);
	l.insertAtTail(3);
	l.insertAtHead(5);
	l.insertAtTail(6);
	l.insertAtTail(8);
	l.display();
//	l.absoluteArrange();
	Lsll<int> l2=l;
	cout << "\n";
	//l2 = l;
	l2.display();
}