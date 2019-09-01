#include<iostream>
#include"bitArray.h"
using namespace std;
int main()
{
	BitArray ba;
	ba.on(5);
	ba.on(1);
	ba.on(2);
	ba.on(3);
	ba.on(7);
	
	//ba.dump();
	ba.display();
	BitArray ba2;
	ba2.invert(2);
	ba2.invert(4);
	ba2.invert(1);
		ba2.display();
	cout << endl;
	//ba.dump();
	cout << endl;
	
	
	BitArray  a = ba.AND(ba2);
	a.display();
	BitArray o = ba.OR(ba2);
	o.display();

	ba2.dump();
	cout<<ba.getUnSignedIntegeralValue();
	cout << endl;
	BitArray integer(10);
	integer.setItegralValue(412);
	integer.display();
	ba.shiftLeft(3);
ba.display();
	ba.shiftRight(3);
	ba.display();
//	return 0;
}