#include<iostream>
#include"Set.h"
using namespace std;
int main()
{
	Set<int> s;
	s.insert(1);
	s.insert(3);
	s.insert(1);
	s.display();
	cout<<s[1];
}