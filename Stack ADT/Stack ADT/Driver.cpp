#include<iostream>
#include"Stack.h"
using namespace std;
int main()
{
	Stack <int> s;

	try {
		for (int i = 0; i <= 15; i++)
		{
			s.push(i);
		}
		while (!(s.isEmpty()))
		{
			cout << "\n" << s.pop();
		}
	}
	catch (char* c)
	{
		cout << c;
	}
	return 0;
}
