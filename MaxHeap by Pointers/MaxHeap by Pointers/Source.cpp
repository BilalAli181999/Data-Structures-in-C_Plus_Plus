#include<iostream>
#include"MaxHeap.h"
using namespace std;
int main()
{
	MaxHeap<int>h;
	h.insert(100);
	h.insert(10);
	h.insert(130);
	h.insert(30);
	h.insert(60);
	h.insert(10);
	h.insert(120);
	h.insert(100);
	h.insert(80);
	h.insert(70);
	h.displayParenthesized(h.root);

	cout << "\n";
	cout<<h.getMax();
	cout << h.getMax();
	cout << h.getMax();
	cout << h.getMax();
	cout << h.getMax();
	cout << h.getMax();
	cout << h.getMax();
	cout << h.getMax();
	h.displayParenthesized(h.root);

}