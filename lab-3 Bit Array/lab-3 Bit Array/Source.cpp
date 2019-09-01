#include<iostream>
#include"bitArray.h"
using namespace std;
int main()
{
	BitArray ba(17);
	ba.on(6);
	ba.on(7);
	ba.on(5);
	ba.on(4);
	ba.on(12);
	//ba.off(12);
//	//ba.invert(12);
////	cout<<ba.checkBitStatus(12);
////	cout << ba.getUnSignedIntegeralValue();
//	BitArray b(17);
//	b.on(1);
//	b.on(2);
//	b.on(4);
//	b.on(3);
//	BitArray and=ba.AND(b);
////	cout<<and.getUnSignedIntegeralValue();
//	
////	cout << b.getUnSignedIntegeralValue();
//
//	BitArray c(17);
//	
//	c.setItegralValue(16);
//
//	c.shiftLeft(1);
//	
//	c.setItegralValue(73);
//	c.display();
//	c.shiftRight(1);
//	cout<<c.getUnSignedIntegeralValue();
//	c.display();
//	//cout << c.getUnSignedIntegeralValue();
//	/*c.setItegralValue(100);
//	c.display();
//	c.shiftLeft(2);
//	c.display();
//	c.shiftRight(3);
//	c.display();*/

//	cout << c.getUnSignedIntegeralValue();
	ba.setItegralValue(108);

	ba.display();
//	ba.shiftLeft(4);
	ba.display();
	ba.shiftRight(4);
	ba.display();
		
}