#include<iostream>
#include"MinHeap.h"
using namespace std;
int main()
{
	MinHeap<int>h(10);
	h.insert(100);
	h.insert(50);
	h.insert(120);
	h.insert(60);
	h.insert(70);
	h.insert(10);
	h.insert(200);
	h.insert(150);
	h.insert(100);
	h.displayData();
	cout << "\n";

	for (int i = 0; i < 9; i++)
		cout<<h.giveMin()<<"   ";
	

	
	


}