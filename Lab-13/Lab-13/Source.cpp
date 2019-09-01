//#include<iostream>
//#include"MaxHeap.h"
//using namespace std;
//int main()
//{
//	MaxHeap<int>h;
//	int M, N;
//	cin >> M >> N;
//
//	for (int i = 0; i < M; i++)
//	{
//		int x;
//		cin >> x;
//		h.insert(x);
//
//	}
//	
//	int cost=0;
//	for (int i = 0; i < N; i++)
//	{
//		
//		int high = h.getMax();
//
//		
//		cout << "   \n\n";
//		cost += high;
//		
//		high = high - 1;
//		h.insert(high);
//
//	}
//	cout  << cost;
//
//}


#ifndef MAXHEAP_H
#define MAXHEAP_H

template<typename T>
class MaxHeap
{
public:
	T *data;
	int noOfNodes;
	int capacity;
	void display()
	{
		for (int i = 0; i < noOfNodes; i++)
		{
			cout << data[i] << " ";
		}
	}
	MaxHeap(int cap)
	{
		capacity = cap;
		noOfNodes = 0;
		data = new T[capacity];
	}
	void swap(int a, int b)
	{
		T c = data[a];
		data[a] = data[b];
		data[b] = c;
	}
	void heapUp(int current, int noOfNodes)
	{

		int parent, left, right;
		parent = (current - 1) / 2;
		left = 2 * parent + 1;
		right = 2 * parent + 2;
		if (left <= noOfNodes && data[left]>data[parent])
		{
			swap(parent, left);
		}
		if (right <= noOfNodes && data[right]>data[parent])
		{
			swap(parent, right);
		}

	}
	void insert(T val)
	{
		if (noOfNodes == 0)
		{
			data[noOfNodes] = val;
			noOfNodes++;
		}
		else
		{
			data[noOfNodes] = val;
			int index = noOfNodes;
			noOfNodes++;
			do
			{
				heapUp(index, noOfNodes - 1);
				index = (index - 1) / 2;
			} while (index != 0);
		}
	}

	void heapDown(int current, int noOfNodes)
	{
		while (current != noOfNodes)
		{
			int left, right;
			left = 2 * current + 1;
			right = 2 * current + 2;
			if (left <= noOfNodes && right <= noOfNodes && data[left] > data[right])
			{
				swap(current, left);
				current = left;
			}
			else if (left <= noOfNodes && right <= noOfNodes && data[left] < data[right])
			{
				swap(current, right);
				current = right;
			}
			else if (right <= noOfNodes && left > noOfNodes )
			{
				swap(current, right);
				current = right;
			}
			else if (left <= noOfNodes &&right > noOfNodes)
			{
				swap(current, left);
				current = left;
			}
			else if (left <= noOfNodes && right <= noOfNodes && data[left] == data[right])
			{
				swap(current, left);
				current = left;
			}
			else if (left > noOfNodes &&right > noOfNodes)
			{
				current = noOfNodes;
			}

		}

	}
	void deleteNode()
	{
		int current = 0;
		int noOfNodes = this->noOfNodes - 1;
		while (current != noOfNodes)
		{
			int left, right;
			left = 2 * current + 1;
			right = 2 * current + 2;
			if (left <= noOfNodes && right <= noOfNodes && data[left] > data[right])
			{
				swap(current, left);
				current = left;
			}
			else if (left <= noOfNodes && right <= noOfNodes && data[left] < data[right])
			{
				swap(current, right);
				current = right;
			}
			else if (right <= noOfNodes && left > noOfNodes)
			{
				swap(current, right);
				current = right;
			}
			else if (left <= noOfNodes &&right > noOfNodes)
			{
				swap(current, left);
				current = left;
			}
			else if (left <= noOfNodes && right <= noOfNodes && data[left] == data[right])
			{
				swap(current, left);
				current = left;
			}
			else if (left > noOfNodes &&right > noOfNodes)
			{
				current = noOfNodes;
			}

		}
		noOfNodes--;
	}

	T giveMax()
	{
		int val = data[0];
		data[0] = data[noOfNodes - 1];
		heapDown(0, noOfNodes - 1);
		noOfNodes--;
		return val;

	}
};

#endif // !MAXHEAP_H

#include<iostream>

using namespace std;
//int main()
//{
//	MaxHeap<int>h(1000000);
//	int M, N;
//	cin >> M >> N;
//
//	for (int i = 0; i < M; i++)
//	{
//		int x;
//		cin >> x;
//		h.insert(x);
//
//	}
//
//	int cost = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int high = h.giveMax();
//		cost += high;
//		h.insert(high - 1);
//	}
//	
//	cout << cost;
//
//}
int giveMax(int *a, int n, int &index)
{
	int max = a[0];
	index = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}
	}
	return max;
}
int main()
{
	
	int M, N;
	cin >> M >> N;
	int *x = new int[M];
	for (int i = 0; i < M; i++)
	{
		
		cin >> x[i];
		

	}

	int cost = 0;
	int index = 0;
	for (int i = 0; i < N; i++)
	{
		int high = giveMax(x, M, index);
		cost += high;
		x[index] = high - 1;
		
	}

	cout << cost;

}
