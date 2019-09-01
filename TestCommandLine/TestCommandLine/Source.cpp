#include<iostream>
using namespace std;


int addIntegers(int a, int b)
{
	
	return a + b;
}
int main(int argc , char* argv[])
{
	cout << argv[0];
	cout << addIntegers(atoi(argv[1]), atoi(argv[2])) << "\n";

	/*for (int i = 0; i < argc; i++)
	{
		cout << "\n" << argv[i];
	}*/
	return 0;
}