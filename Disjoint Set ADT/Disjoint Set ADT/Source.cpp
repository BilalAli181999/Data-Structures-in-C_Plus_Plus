#include<iostream>
#include"DisjointSet.h"
using namespace std;
int main()
{
	DisjointSet<int> s(20);
//	s.displayArray();
	cout << "\n";
	s.unionNodes(3,4);
	s.unionNodes(8, 3);
	s.unionNodes(5, 6);
	s.unionNodes(4, 9);
	s.unionNodes(1, 2);
	s.unionNodes(9, 8);
	s.unionNodes(0, 5);
//	s.unionNodes(2, 7);
//	s.unionNodes(6, 1);
	//s.unionNodes(3, 7);
	
	s.displayArray();
	cout << s.find(11, 9);
}