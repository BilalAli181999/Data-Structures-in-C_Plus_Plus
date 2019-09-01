#include<iostream>
#include"polynomial.h"
using namespace std;
int main()
{
	Polynomial p;
	
	p.addTerm(4,5);
	p.addTerm(7,3);
	p.addTerm(9,21);
	//p.addTerm(9,2);
	p.display();
//	cout << p.getDegree();
//	p.clear();
//	p.display();
//	cout << p.opearator(2);
	Polynomial p1;

	p1.addTerm(2, 13);
	p1.addTerm(20, 22);
	p1.addTerm(12, 5);
	p1.addTerm(12, 1);
	p1.display();
	Polynomial sum= p + p1;
	cout << "\n Sum:\n";
	sum.display();
	/*cout << "\n Derivative:";
	Polynomial der=p.derivative();
	der.display();
	der.setCoefficient(32, -1);
	der.display();
	der.addToCoefficient(32, -1);
	der.display();
	cout << p.getCoeficient(3);
	Polynomial antiDer = p.AntiDerivative();
	antiDer.display();*/
}