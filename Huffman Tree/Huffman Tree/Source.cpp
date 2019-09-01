#include<iostream>
#include"MaxHeap.h"
#include"MinHeap.h"
#include<fstream>
#include<utility>
#include<stack>
using namespace std;
void binary(int n)
{
	stack<int>s;
	while (n)
	{
		s.push(n % 2);
		n = n / 2;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}
int main()
{
	pair<int,char> size[26] = {};
	ifstream inp;
	int sizeOfFile = 0;
	inp.open("string.txt");
	if (inp.is_open())
	{
		char ch;
		while (inp >> ch)
		{
			size[(int)ch - 97].first++;
			size[(int)ch - 97].second = ch;
			sizeOfFile++;
		}
		
	}
	else
		cout << "\n File not Opened";

	MaxHeap<pair<int,char>>maxH(100000);
	MinHeap<pair<int, char>>minH(100000);

	int chSize[26] = {};
	for (int i = 0; i < 26; i++)
	{
		if (size[i].first > 0)
		{
			minH.insert(size[i]);
		}
	}
	
	
	while (!(minH.noOfNodes<2))
	{
	
		pair<int, char>t = minH.giveMin();
		maxH.insert(t);
		int a = t.first;
		t = minH.giveMin();
		maxH.insert(t);
		int b = t.first;
		t.first = a + b;
		t.second = '*';
		minH.insert(t);
	}
	maxH.displayData();
	for (int i = 0; i < maxH.noOfNodes; i++)
	{
		if (maxH.data[i].second != '*')
		{
			cout << maxH.data[i].second << "=";
			binary(i);
			cout << "\n";
		}
	}
	
	



	
	


}