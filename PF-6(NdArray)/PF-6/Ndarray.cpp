#include"Ndarray.h"
#include<iostream>
using namespace std;



template<typename T>
int Ndarray<T>::getRowMajorIndexMapping(intitailizer_list<int>list)
{
	int n = list.size();
	int prod = 1;
	int sum=0;
	auto x = list.begin();
	for (int i = 0; i < n-1; i++)
	{
		prod = prod*this->getDimensionSize();
	}
	
	for (int i = 0; i < n; i++)
	{
		sum=sum+(*(x+i)*(prod))
			prod = prod / getDimensionSize();
	}
	
	return sum;
}

template<typename T>
inline Ndarray<T>::Ndarray(initializer_list<int> list, initializer_list<int> stIndex)
{

	noOfDimensions = list.size();
	sizeOfDimensions = new int[noOfDimensions];
	startingIndex = new int[noOfDimensions];
	int j = 0;
	int arraySize = 1;
	for (auto i : list)
	{
		
		sizeOfDimensions[j] = i;
		arraySize = arraySize*i;
		startingIndex[j] = 0;
		j++;
	}
	if (stIndex.size() != 0)
	{
		j = 0;
		for (auto i : stIndex)
		{
		
			startingIndex[j] = i;
		}
	}
	data = new T[arraySize];
}

template<typename T>
int Ndarray<T>::getNoOfDimensions()
{

	return noOfDimensions;
}

template<typename T>
int Ndarray<T>::getDimensionSize(int dNo)
{

	return sizeOfDimensions[dNo];
}

template<typename T>
int Ndarray<T>::getDimensionLowerIndex(int dNo)
{
	return startingIndex[dNo];
}

template<typename T>
int Ndarray<T>::getDimensionHigherIndex(int dNo)
{

	int high = (getDimensionLowerIndex(dNo) + getDimensionSize(dNo)) - 1;
	return high;
}

template<typename T>
T & Ndarray<T>::operator()(initializer_list<int> indexSet)
{

	int *sum = new int[indexSet.size()];
	for (int i = 0; i < indexSet.size(); i++)
	{
		sum[i] = 0;
	}

	auto x = indexSet.begin();

	int c = 0;
	for (int i = 0; i < indexSet.size(); i++)
	{
		sum[i] += *(x + i);

		for (int j = i + 1; j < indexSet.size(); j++)
		{
			sum[i] *= getDimensionSize(j);

		}
	}
	int s = 0;
	for (int i = 0; i < indexSet.size(); i++)
	{
		s += sum[i];

	}

	return data[s];

}
//#include<iostream>
//using namespace std;
//void formula(int n)
//{
//	for (int p = 1; p <= n; p++)
//	{
//		cout << " I" << p;
//		int q = p + 1;
//		while (q <= n)
//		{
//			cout << " D" << q;
//			q++;
//		}
//		if(p!=n)
//		cout<< " +";
//	}
//}
//int main()
//{
//	formula(4);
//}