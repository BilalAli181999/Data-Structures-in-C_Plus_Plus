#include<iostream>
#include"PriorityQueue.h"
using namespace std;
int main()
{
	PriorityQueue<Node<int>,int>q(10);
	q.insert(20, 3);
	q.insert(30, 0);
	q.insert(10, 1);
	q.insert(80, 2);
	q.insert(7, 1);
	q.insert(9, 4);
	q.insert(71, 1);
	q.insert(99, 4);
//	q.displayData();

	cout<<q.giveFirstPriority()<<" ";
	cout << q.giveFirstPriority() << " ";
//	q.displayData();
	cout << q.giveFirstPriority() << " ";
	cout << q.giveFirstPriority() << " ";
	cout << q.giveFirstPriority() << " ";
	cout << q.giveFirstPriority() << " ";
	cout << q.giveFirstPriority() << " ";
	cout << q.giveFirstPriority() << " ";
}