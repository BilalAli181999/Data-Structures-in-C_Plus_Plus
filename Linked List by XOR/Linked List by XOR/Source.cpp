#include<iostream>
#include"XorList.h"
using namespace std;
int main()
{
	XorList<int> l;
	l.insertAtHead(2);

   l.insertAtHead(4);
  
	l.insertAtHead(7);
	l.remove(4);
	
	l.display();
}