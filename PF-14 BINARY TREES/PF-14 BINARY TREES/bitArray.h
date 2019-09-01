#ifndef BITARRAY_H
#define BITARRAY_H
#include<iostream>
using namespace std;
class BitArray
{
public:
	int capacity;
	unsigned char * data;
	int isValidBit(int i)
	{
		return i >= 0 && i < capacity;
	}
public:
	BitArray(int n = 8)
	{
		capacity = n;
		int s = (int)ceil((float)capacity / 8);
		data = new unsigned char[s];
		for (int i = 0; i<s; i++)
		{
			data[i] = data[i] & 0;
		}
	}
	BitArray(const BitArray & ref) //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	{
		
		capacity = ref.capacity;
		int s = (int)ceil((float)capacity / 8);
		data = new unsigned char[s];
		for (int i = 0; i<s; i++)
		{
			data[i] = ref.data[i] ^ 0;
		}
	}
	int checkBitStatus(int bitNo); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void on(int bitNo); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void off(int bitNo); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void invert(int bitNo); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void dump(); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	BitArray AND(BitArray ref); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	BitArray OR(BitArray ref); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void shiftLeft(int); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void shiftRight(int); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	unsigned long long getUnSignedIntegeralValue();//. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void setItegralValue(unsigned long long); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	~BitArray(); //. . . . . . . .
	void display();
};
#endif