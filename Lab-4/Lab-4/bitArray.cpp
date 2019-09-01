#include "bitArray.h"

int BitArray::checkBitStatus(int bitNo)
{

	unsigned char test=1, temp;

	int s = bitNo / 8;
	int c = bitNo;
	if (bitNo >= 8)
	{
		c = abs(bitNo - s * 8);
	}

	for (int i = 0; i < c; i++)
	{
		test *= 2;
		
	}
	
	temp = test & this->data[s];
	if (temp == 0)
		return 0;
	else
		return 1;
}

void BitArray::on(int bitNo)
{
	unsigned char test = 1;
	int s = bitNo/8;
	int c = bitNo;
	if (bitNo >= 8)
	{
		c = abs(bitNo - s * 8);
}
	
	for (int i = 0; i < c; i++)
	{
		test *=2;
		
	}
	
	
	this -> data[s] =this->data[s]| test;
	
}

void BitArray::off(int bitNo)
{
	unsigned char test = 1;
	int s = bitNo / 8;
	int c = bitNo;
	if (bitNo >= 8)
	{
		c = abs(bitNo - s * 8);
	}

	for (int i = 0; i < c; i++)
	{
		test *= 2;

	}

	test = 255 - test;
	this->data[s] = this->data[s] & test;
}

void BitArray::invert(int bitNo)
{
	unsigned char test = 1;
	int s = bitNo / 8;
	int c = bitNo;
	if (bitNo >= 8)
	{
		c = abs(bitNo - s * 7);
	}

	for (int i = 0; i < c; i++)
	{
		test *= 2;

	}


	this->data[s] = this->data[s] ^ test;
}

void BitArray::dump()
{
	for (int i = 0; i < capacity; i++)
	{
		off(i);
	}
}

BitArray BitArray::AND(BitArray ref)
{
	BitArray temp;
	for (int i = 0; i < capacity; i++)
	{
		if (checkBitStatus(i) == 1 && ref.checkBitStatus(i) == 1)
		{
			temp.on(i);
		}
		else if (checkBitStatus(i)==1 && ref.checkBitStatus(i) == 0 || checkBitStatus(i) == 0 && ref.checkBitStatus(i) ==1)
		{
			temp.off(i);
		}

	}

	return temp;
}

BitArray BitArray::OR(BitArray ref)
{
	BitArray temp;
	for (int i = 0; i < capacity; i++)
	{
		
		if (checkBitStatus(i)==0 && ref.checkBitStatus(i) == 0 )
		{
		temp.off(i);
		}
		else if((checkBitStatus(i) == 0 || ref.checkBitStatus(i) == 1 )|| (checkBitStatus(i) == 1 || ref.checkBitStatus(i) == 0))
		{
			temp.on(i);
		}

	}
	
	return temp;
}

void BitArray::shiftLeft(int n)
{
	
	int next=1, previous=1;
	for(int i=0;i<n;i++)
	{
		 previous = this->getUnSignedIntegeralValue();
		
		 next = previous * 2;
		
		if (next >= 256)
		{
			next = next - 256;
		}
		
		this->setItegralValue(next);
	}
	
	this->setItegralValue(next);
}

void BitArray::shiftRight(int n)
{
	
		
	while (n--)
	{
		
	for (int i = 0; i < capacity-1; i++)
		{
			if (this->checkBitStatus(i + 1) == 1)
			{
				
				this->on(i);
			}
			else if (i == capacity - 1)
			{
				this->off(i);
			}
			else
			{
				this->off(i);
			}
		}
	}

	
}

unsigned long long BitArray::getUnSignedIntegeralValue()
{
	
	int sum=0;
	int c = 1;
	for (int i = 0; i < capacity; i++)
	{
		sum = sum + checkBitStatus(i)*c;
		c = c * 2;
	}
	return sum;
}

void BitArray::setItegralValue(unsigned long long integer)
{
	
	int i = 0;
	while (integer != 0 && i <capacity)
	{
	 if(  (integer % 2)==0)
	 {
		 off(i);
	 }
	 else
	 {
		 on(i);
	 }
		integer = integer / 2;
		i++;
		
	}
}

BitArray::~BitArray()
{
	delete[]data;
	data = 0;
}

void BitArray::display()
{
	cout << "\n";
	for (int i = capacity - 1; i >= 0; i--)
	{
		cout<<checkBitStatus(i)<<" ";
	}
	cout << "\n";
}
