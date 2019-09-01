#include<iostream>
#include<initializer_list>
using namespace std;
#include"Set.h"


int main()
{


	Set <double> a(10);


	a.insert(1.5);
	a.insert(1);
	a.insert(56);
	a.insert(8);
	a.insert(8.1);
	cout << "\nSet a:";
	a.display();
	cout << "\n";
	try
	{
		a.remove(3);
		cout << "\nSet a:";
		 a.display();
	}
	catch (exception a)
	{
		cout << a.what();
	}
	a.resize(5);

	Set <double> b(10);

b.insert(1);
	b.insert(8.1);
	b.insert(3);
	cout << "\nSet b:";
	b.display();

	cout <<"\n Cardinality:"<< a.getCardinallity();
	cout << "\nUnion:";
	Set <double> uni = a.calcUnion(b);
	uni.display();


	Set <int> c(10), d(10);
	
	c.insert(2);
	c.insert(1);
	c.insert(6);
	c.insert(7);
	
	d.insert(92);
	d.insert(19);
	d.insert(60);
	d.insert(79);
	cout << "\n Set c: ";
	c.display();
	cout << "\n Set d :";
	d.display();
	if (c.isSubSet(d) == 1)
	{
		cout << "\nProper Subset";
	}
	else if (c.isSubSet(d) == 2)
	{
		cout << "\nImproper Subset";
	}
	else
	{
		cout << "\nNO RELATION";
	}

}
	

