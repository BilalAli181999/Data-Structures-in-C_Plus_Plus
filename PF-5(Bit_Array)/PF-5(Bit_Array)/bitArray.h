
#include<iostream>
using namespace std;
class BitArray
{
private:
	int capacity;
	unsigned char * data;
	int isValidBit(int i)
	{
		return i >= 0 && i < capacity;
	}
public:
	BitArray(int n = 8);
	BitArray(const BitArray & ref); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
	void display();
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
	~BitArray(); //. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . (0)
};
