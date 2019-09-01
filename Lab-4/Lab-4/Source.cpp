#include<iostream>
#include"bitArray.h"
using namespace std;
int main()
{
	BitArray b;
	b.setItegralValue(73);
	BitArray t = b;
	b.display();
	b.shiftLeft(4);
	t.shiftRight(4);
	b.display();
	t.display();
	BitArray c = b.OR(t);
	c.display();

	
}

//int main()
//{
//	cout << "Enter an Integer ";
//	int n;
//	cin >> n;
//	bool *A = new bool[n] ;
//	for (int i = 2; i <n; i++)
//	{
//		 A[i]=1;
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (A[i] == 1)
//		{
//			for (int j = pow(i, 2); j < n; j = j + i)
//			{
//				A[j] = 0;
//			}
//		}
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if(A[i]==1)
//		cout<<i<<" ";
//	}
//
//}



//int main()
//{
//	cout << "Enter an Integer ";
//	long long int n;
//	cin >> n;
//	bool *A = new bool[n];
//	for (int i = 2; i <n; i++)
//	{
//		A[i] = 1;
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (A[i] == 1)
//		{
//			for (int j = pow(i,2); j < n; j = j + i)
//			{
//				A[j] = 0;
//			}
//		}
//	}
//	for (int i = 2; i < n; i++)
//	{
//		if (A[i] == 1)
//			cout << i << " ";
//	}
//
//}

//#include<ctime>
//int main()
//{
//	srand(time(0));
//	
//	int n;
//	cout << "Enter N ";
//	cin >> n;
//	int* a = new int[n];
//	
//	for (int i = 0; i < n; i++)
//	{
//		int x = rand() % 32+1;
//		a[i] = x;
//		cout << a[i] << " ";
//	}
//	cout << "\n Duplicate:";
//	BitArray b(32000);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < 32000; j++)
//		{
//			
//			if (a[i] == j )
//			{
//				
//				if (b.checkBitStatus(j)==1)
//				{
//					cout <<j<<" ";
//					b.off(j);
//				}
//				else
//				{
//					b.on(j);
//				}
//			}
//		}
//	}
//
//	
//	
//	
//}