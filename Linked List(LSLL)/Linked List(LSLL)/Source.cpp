#include<iostream>
#include"LSLL.H"
using namespace std;
//int main()
//{
//	Lsll<int> list,list1;
//	list.InsertAtTail(2);
//	list.InsertAtTail(3);
//	list.InsertAtTail(4);
//	list.InsertAtTail(5);
//	list.InsertAtTail(7);
//	list.InsertAtTail(9);
//	list.InsertAtTail(11);
//	list.InsertAtTail(7);
//	list.InsertAtTail(9);
//	
//	list1.InsertAtTail(99);
//	list1.InsertAtTail( 20);
//	list1.InsertAtTail( 30);
//
//	//Lsll <int> unionList = list.doUnion(list1);    ////             1- UNION
//	//unionList.display();
//
//	/*if (list.isEqual(list1))         // 2- IS EQUAL
//		cout << "\n Equal";
//	else
//		cout << "\n Not Equal";*/
//
//	/*Lsll<int> clone = list.createClone();  // 3-  CREATE CLONE
//	clone.display();*/
//
//	/*list.display();
//	cout << "\n";
//	list.delAlternate();           //4-  DELETE ALTERNATE
//	list.display();*/
//
//	/*Lsll<int> l1, l2;
//	list.splitList(l1, l2);      //5- SPLIT LIST
//	l1.display();
//	cout << "\n";
//	l2.display();*/
//
//	/*list.display();
//	list.removeDuplicates();     //6- REMOVE DUPLICATES
//	cout << "\n";
//	list.display();*/
//
//	//Lsll<int> l1, l2,sort;
//	//l1.InsertAtTail(1);
//	//l1.InsertAtTail(2);
//	//l1.InsertAtTail(3);
//	//l1.InsertAtTail(40);
//	//l1.InsertAtTail(50);                  //7- MERGE SORTED LIST
//	//l2.InsertAtTail(10);
//	//l2.InsertAtTail(40);
//	//l2.InsertAtTail(60);
//	//sort = l1.mergeSortedList(l2);
//	//sort.display();
//
//
//	//list.reversePrint();
//
//	//list.display();
//	
//	//cout << "\n";
//	//list.display();
//
//	/*list.display();
//	list.reverseLink();*/
//	
//	/*list.display();
//    list.swap(3, 7);
//	cout << "\n";
//	list.display();*/
//
//	/*list.display();
//	list.sort();
//	cout << "\n";
//	list.display();
//*/
//}


int main()
{
	Lsll<int> l1, l2,l3;
	l1.InsertAtTail(2);
	l1.InsertAtTail(1);
	l1.InsertAtTail(5);
	l1.InsertAtTail(4);
	l1.InsertAtTail(8);
	l2.InsertAtTail(6);
	l2.InsertAtTail(9);
	l2.InsertAtTail(3);
	l3.InsertAtTail(55);
	l3.InsertAtTail(9);
	l3.InsertAtTail(75);
	l1.display();
	cout << "\n";
	/*int a[10];
	l1.pairs(l1.head, 9, a, 0);*/
//	l1.reverseList();
	l1.removeLargerRight();
	l1.display();
////	l1.display();
//	//l1.sort();
//	//l1.swap(1, 3);
//	/*l1.arrange();
//	cout << "\n";*/
//	/*l1.display();
//	cout << "\n Middle: " << l1.middlePoint();*/
//
//
//	//l1.subsetOfVal(7);
//	/*l1.display();
//	l1.deleteIfRightGreat();
//	cout << "\n";*/
//	//l1.display();
//
//	/*cout<<"\nMiddle Point:"<<l1.middlePoint();*/
//
//	//l2.display();
//	
//	l1.joinLists(l3);
//	/*if (l1.joiningPoint(l2))
//	{
//		cout << "\nList Is Joined";
//	}
//	else
//		cout << "\n Not Joining";*/
////	l1.giveJoiningPoint(l3);
//
//	l1.cycleist();
//cout<<l1.isCyclic();


}