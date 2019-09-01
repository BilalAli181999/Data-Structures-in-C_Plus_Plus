#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H
#include"Factor.h"
#include<iostream>
using namespace std;
class Polynomial
{
	Factor* poly;
	int noOfFactors;
	int capacity;
public:
	Polynomial();
	Polynomial(int c);
	void addTerm(int cofecient, int pow);
	void display();
	int getDegree();
	void clear();
	long long int opearator(int value);
	Polynomial operator+(Polynomial & ref);
	void remove(int i);
	Polynomial derivative();
	void setCoefficient(int newC, int pow);
	void addToCoefficient(int cof, int pow);
	int getCoeficient(int pow);
	Polynomial AntiDerivative();
};

#endif 
