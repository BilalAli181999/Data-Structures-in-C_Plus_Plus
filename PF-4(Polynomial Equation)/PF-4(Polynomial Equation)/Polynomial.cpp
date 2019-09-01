#include "Polynomial.h"


Polynomial::Polynomial()
{
	cout << "\n Enter the Capacity ";
	cin >> capacity;
	poly = new Factor[capacity];
	noOfFactors = 0;
}

Polynomial::Polynomial(int c)
{
	capacity = c;
	poly = new Factor[c];
	noOfFactors = 0;
}

void Polynomial::addTerm(int cofecient, int pow)
{
	
	
	if (noOfFactors == 0)
	{
		poly[noOfFactors].setCof(cofecient);
		poly[noOfFactors].setPower(pow);
	}
		bool status = true;
	if (noOfFactors > 0)
	{
		for (int i = noOfFactors - 1; i >= 0 && status; i--)
		{

			if (pow > poly[i].getPower())
			{
				
				poly[i + 1] = poly[i];
				poly[i].setCof(cofecient);
				poly[i].setPower(pow);
			}
			else
			{
		
				poly[i + 1].setCof(cofecient);
				poly[i + 1].setPower(pow);
				status = false;
			}
		}
	}
	
	noOfFactors++;
}

void Polynomial::display()
{
	for (int i = 0; i < noOfFactors; i++)
	{
		cout <<"("<< poly[i].getCof() << "X^" << poly[i].getPower()<<") ";
	}
}

int Polynomial::getDegree()
{
	return poly[0].getPower();
}

void Polynomial::clear()
{
	cout << "\n Cleared Successfuly";
	noOfFactors = 0;
}

long long int Polynomial::opearator(int value)
{
	long long int sum = 0;
	int p = pow(value,poly[noOfFactors-1].getPower());
	for(int i= noOfFactors-1;i>=0;i--)
	{
		sum += (poly[i].getCof()) * (p);
		
		if(i>0)
		{	
			
		for (int j = 0; j <((poly[i - 1].getPower()) - (poly[i].getPower())); j++)
		{
			p = p*value;
			
		}
		}
	}

	return sum;
}

Polynomial Polynomial::operator+(Polynomial & ref)
{
	Polynomial temp(this->capacity + ref.capacity);

	int i=0, j = 0;
	while (i < this->noOfFactors || j < ref.noOfFactors)
	{
		if (poly[i].getPower() > ref.poly[j].getPower())
		{
			temp.poly[temp.noOfFactors] = poly[i];
			i++;
			temp.noOfFactors++;
		}
		else if(poly[i].getPower() < ref.poly[j].getPower())
		{
			temp.poly[temp.noOfFactors] = ref.poly[j];
			j++;
			temp.noOfFactors++;
		}
		else if (poly[i].getPower() == ref.poly[j].getPower())
		{
			temp.poly[temp.noOfFactors].setCof(ref.poly[j].getCof() + poly[i].getCof())  ;
			temp.poly[temp.noOfFactors].setPower(ref.poly[j].getPower());
			j++;
			i++;
			temp.noOfFactors++;
		}
		else if (i == this->noOfFactors-1  && j != ref.noOfFactors-1)
		{
			temp.poly[temp.noOfFactors] = ref.poly[j];
			j++;
			temp.noOfFactors++;
		}
		else
		{
			temp.poly[temp.noOfFactors] = this->poly[i];
			i++;
			temp.noOfFactors++;
		}
	}
	
	
	return temp;
}

void Polynomial::remove(int i)
{
	cout << "removed";
		for(int j=0;j<noOfFactors;j++)
		{
			if (poly[j].getPower() == i)
			{
				for (int x = j; x < noOfFactors; x++)
				{
					poly[x] = poly[x + 1];
				}
			}
		}
		noOfFactors--;

}

Polynomial Polynomial::derivative()
{
	Polynomial temp(this->capacity);
	for(int i=0;i<noOfFactors;i++)
	{
		temp.poly[temp.noOfFactors].setCof(poly[i].getCof()*poly[i].getPower());
		temp.poly[temp.noOfFactors].setPower(poly[i].getPower() - 1);
		temp.noOfFactors++;
	}


	return temp;
}

void Polynomial::setCoefficient(int newC, int pow)
{
	for(int i=0;i<noOfFactors;i++)
	{
		if(poly[i].getPower()==pow)
		{
			cout << "\nSet Successfully\n";
			poly[i].setCof(newC);
		}
	
	}
}

void Polynomial::addToCoefficient(int cof, int pow)
{
	for (int i = 0; i<noOfFactors; i++)
	{
		if (poly[i].getPower() == pow)
		{
			cout << "\nSet Successfully\n";
			poly[i].setCof(poly[i].getCof()+cof);
		}

	}
}

int Polynomial::getCoeficient(int pow)
{
	for (int i = 0; i<noOfFactors; i++)
	{
		if (poly[i].getPower() == pow)
		{
			return poly[i].getCof();
		}

	}
}

Polynomial Polynomial::AntiDerivative()
{
	Polynomial temp(this->capacity);
	
	for (int i = 0; i<noOfFactors; i++)
	{
		temp.poly[temp.noOfFactors].setPower(poly[i].getPower() + 1);
		temp.poly[temp.noOfFactors].setCof((poly[i].getCof())/(temp.poly[i].getPower()));
		
		temp.noOfFactors++;
		
	}

	
	return temp;
}

