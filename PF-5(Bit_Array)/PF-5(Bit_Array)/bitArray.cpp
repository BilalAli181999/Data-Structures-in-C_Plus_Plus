#include "bitArray.h"

BitArray::BitArray(int n)
{
	{
		capacity = n;
	int s = (int)ceil((float)capacity / 8);
		data = new unsigned char[s];
		for (int i = 0; i<s; i++)
		{
			data[i] = '0';
		}
	}
}

BitArray::BitArray(const BitArray & ref)
{
	this->capacity = ref.capacity;
	int s = ((float)capacity / 8);
	this->data = new unsigned char[s];
	for (int i = 0; i < s; i++)
	{
		data[i] = ref.data[i];
	}
}

void BitArray::display()
{
	cout << "[";
	for (int i = 0; i < capacity; i++)
	{
		cout << data[i] << "  ";
	}
	cout << "]";
}

int BitArray::checkBitStatus(int bitNo)
{
	
	if (bitNo > 0 && bitNo < capacity)
	{
		return data[bitNo ];
	}
	else 
	{
		cout << "\n Bit_Array Out Of Range ";
		return -1;
	}
   
}

void BitArray::on(int bitNo)
{
	if (bitNo  > 0 && bitNo  < capacity)
	{
		data[bitNo ] = '1';
	}
	else
	{
		cout << "\n Bit_Array Out Of Range ";
	}
	
}

void BitArray::off(int bitNo)
{
	if (bitNo > 0 && bitNo < capacity)
	{
		data[bitNo] = '0';
	}
	else
	{
		cout << "\n Bit_Array Out Of Range ";
	}
}

void BitArray::invert(int bitNo)
{
	if (bitNo> 0 && bitNo < capacity)
	{
		if (data[bitNo] == '1')
		{
			
			data[bitNo] = '0';
		}
		else
		{
			
			data[bitNo] = '1';
		}
	}
	else
	{
		cout << "\n Bit_Array Out Of Range ";
	}
}

void BitArray::dump()
{
	for (int i = 0; i < capacity; i++)
	{
		data[i] = '0';
	}
}

BitArray BitArray::AND(BitArray ref)
{
	BitArray temp;
	for (int i = 0; i < capacity; i++)
	{
		if (data[i] == '1'&& ref.data[i] == '1')
		{
			temp.data[i] = '1';
		}
		else if (data[i] == '1'&& ref.data[i] == '0' || data[i] == '0'&& ref.data[i] == '1')
		{
			temp.data[i] = '0';
		}
	
	}

	return temp;
}

BitArray BitArray::OR(BitArray ref)
{
	BitArray temp;
	for (int i = 0; i < capacity; i++)
	{
		if (data[i] == '1'|| ref.data[i] == '1')
		{
			temp.data[i] = '1';
		}
		else if (data[i] == '0'&& ref.data[i] == '0' )
		{
			temp.data[i] = '0';
		}
		
	}
	return temp;
}

void BitArray::shiftLeft(int n)
{
	while (n--)
	{
		for (int i = 0; i < capacity; i++)
		{
			data[i] = data[i + 1];
		}
		data[capacity - 1] = '0';
	}
}

void BitArray::shiftRight(int n)
{
	while (n--)
	{
		for (int i = capacity - 2; i >=0 ; i--)
		{
			data[i+1] = data[i];
		}
		data[0] = '0';
	}
}

unsigned long long BitArray::getUnSignedIntegeralValue()
{
	int sum=0,inc=1;
	for (int i = capacity-1; i >=0 ; i--)
	{
		sum += (data[i]-48) * inc;
		inc = inc * 2;
	
	}
	return sum;
}

void BitArray::setItegralValue(unsigned long long integer)
{
	int i = capacity - 1;
	while(integer!=0 && i>=0)
	{
		data[i] = 48+(integer % 2);
		integer = integer / 2;
		i--;
	}
}

BitArray::~BitArray()
{
	if (data)
	{
		delete[]data;
		data = 0;
	}
}
