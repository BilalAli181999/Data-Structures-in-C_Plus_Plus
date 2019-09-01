#include<iostream>
#include"MaxHeap.h"
using namespace std;
int main()
{
	MaxHeap<int>h(10);
	h.insert(100);
	h.insert(140);
	h.insert(120);
	h.insert(60);
	h.insert(70);
	h.insert(10);
	h.insert(200);
	h.insert(100);
	h.insert(150);
	h.displayData();
	cout << "\n";

	while(h.noOfNodes-1)
	cout<<h.giveMax()<<"  ";
	//h.displayData();
	
}