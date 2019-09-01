#include<iostream>
#include"Ndarray.h"

using namespace std;
int main()
{
	Ndarray <int> a({ 2,3 });
	cout << a.getNoOfDimensions() << "\n";
	for (int i = 0; i<2; i++)
	{

		cout << i << ":" << a.getDimensionSize(i) << ":" << a.getDimensionLowerIndex(i) << "~" << a.getDimensionHigherIndex(i) << "\n";
	}
	int val = 1;
	for (int i = a.getDimensionLowerIndex(0); i <= a.getDimensionHigherIndex(0); i++)
	{
		for (int j = a.getDimensionLowerIndex(1); j <= a.getDimensionHigherIndex(1); j++)
		{
			//a({ i,j }) = val++;
		}
	}
	a({ 1,2 });
	//cout << "index: " << a.getRowMajorIndexMapping({1,0});
	/*for (int i = a.getDimensionLowerIndex(0); i <= a.getDimensionHigherIndex(0); i++)
	{
		for (int j = a.getDimensionLowerIndex(1); j <= a.getDimensionHigherIndex(1); j++)
		{
			cout << "[" << i << ":" << j << "]=";
			cout << a({ i,j }) << "\n";
		}
	}*/
	cout << "\n =====================================================================================================\n";
	/*Ndarray<int> b({ 2,3,4 }, {});
	cout << b.getNoOfDimensions() << "\n";
	for (int i = 0; i<3; i++)
	{
		
		cout << i << ":" << b.getDimensionSize(i) << ":" << b.getDimensionLowerIndex(i) << "~" << b.getDimensionHigherIndex(i) << "\n";
	}

	for (int i = b.getDimensionLowerIndex(0); i <= b.getDimensionHigherIndex(0); i++)
	{
		for (int j = b.getDimensionLowerIndex(1); j <= b.getDimensionHigherIndex(1); j++)
		{
			for (int k = b.getDimensionLowerIndex(2); k <= b.getDimensionHigherIndex(2); k++)
			{
				b({ i,j,k }) = val++;
			}
		}
	}*/
	/*for (int i = b.getDimensionLowerIndex(0); i <= b.getDimensionHigherIndex(0); i++)
	{
		for (int j = b.getDimensionLowerIndex(1); j <= b.getDimensionHigherIndex(1); j++)
		{
			for (int k = b.getDimensionLowerIndex(2); k <= b.getDimensionHigherIndex(2); k++)
			{
				cout << "[" << i << ":" << j << ":" << k << "]=";
				cout << b({ i,j ,k }) << "\n";
			}
		}
	}*/

}


