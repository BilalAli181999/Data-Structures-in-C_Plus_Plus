#include<iostream>
#include"MinHeap.h"
using namespace std;
int main()
{
	MinHeap<int>h;
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
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	cout << h.getMin();
	h.displayParenthesized(h.root);

}