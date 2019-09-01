#include<iostream>
#include"Queue.h"
using namespace std;
int main()
{
	Queue<int> q;
	q.enQueue(99);
	q.enQueue(13);
	q.enQueue(14);
	q.enQueue(15);
	q.enQueue(16);
	cout << q.deQueue();
	cout << q.deQueue();


}