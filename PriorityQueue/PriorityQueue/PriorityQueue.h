#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include"Node.h"
template <typename T, typename I>
class PriorityQueue
{
public:
	T *data;
	int noOfNodes;
	int capacity;
	PriorityQueue(int cap)
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
		if (left <= noOfNodes && data[left].priority<data[parent].priority)
		{
			swap(parent, left);
		}
		if (right <= noOfNodes &&  data[right].priority<data[parent].priority)
		{
			swap(parent, right);
		}

	}
	void insert(I val,int pri)
	{
		if (noOfNodes == 0)
		{
			data[noOfNodes].info = val;
			data[noOfNodes].priority = pri;
			data[noOfNodes].initialIndex = noOfNodes;
			noOfNodes++;
		}
		else
		{
			data[noOfNodes].info = val;
			data[noOfNodes].priority = pri;
			data[noOfNodes].initialIndex = noOfNodes;
			int index = noOfNodes;
			noOfNodes++;
			do
			{
			   heapUp(index, noOfNodes - 1);
				index = (index - 1) / 2;
			} while (index != 0);
		}
	}
	I giveFirstPriority()
	{
		I val = data[0].info;
		data[0] = data[noOfNodes - 1];
		heapDown(0, noOfNodes - 1);
		noOfNodes--;
		return val;

	}
	void heapDown(int current, int noOfNodes)
	{

		while (current != noOfNodes)
		{
			int left, right;
			left = 2 * current + 1;
			right = 2 * current + 2;
			if (left <= noOfNodes && right <= noOfNodes && data[left].priority < data[right].priority)
			{
				swap(current, left);
				current = left;
			}
			else if (left <= noOfNodes && right <= noOfNodes && data[left].priority  > data[right].priority)
			{
				swap(current, right);
				current = right;
			}
			else if (right <= noOfNodes && left > noOfNodes&& data[right].priority  < data[current].priority)
			{
				swap(current, right);
				current = right;
			}
			else if (left <= noOfNodes &&right > noOfNodes && data[left].priority  < data[current].priority)
			{
				swap(current, left);
				current = left;
			}
			else if (left <= noOfNodes && right <= noOfNodes && data[left].priority == data[right].priority)
			{
				if (data[left].initialIndex < data[right].initialIndex)
				{
					swap(current, left);
					current = left;
				}
				else
				{
					swap(current, right);
					current = right;
				}
			}
			else if (left > noOfNodes &&right > noOfNodes)
			{
				current = noOfNodes;
			}
			else if (left <= noOfNodes)
			{
				swap(current, left);
				current = left;
			}
			else if (right <= noOfNodes)
			{
				swap(current, right);
				current = left;
			}



		}

	}
	void displayData()
	{
		for (int i = 0; i < noOfNodes; i++)
		{
			cout <<"|"<< data[i].info<<"/"<<data[i].priority <<"/"<<data[i].initialIndex<< "| ";
		}
	}
};
#endif