#ifndef MAXHEAP_H
#define MAXHEAP_H

template<typename T>
class MaxHeap
{
public:
	T *data;
	int noOfNodes;
	int capacity;
	MaxHeap(int cap)
	{
		capacity = cap;
		noOfNodes = 0;
		data = new T[capacity];
	}
	void swap(int a, int b)
	{
		T c = data[a];
		data[a]= data[b];
		data[b] = c;
	}
	void heapUp(int current,int noOfNodes)
	{
		
		int parent, left, right;
		parent = (current - 1) / 2;
		left = 2 * parent + 1;
		right = 2 * parent + 2;
		if (left<=noOfNodes && data[left]>data[parent])
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
				heapUp(index, noOfNodes-1);
				index = (index - 1) / 2;
			} while (index != 0);
		}
	}
	void displayData()
	{
		for (int i = 0; i < noOfNodes; i++)
		{
			if (data[i].second!='*')
			{
				cout << data[i].first << " | " << data[i].second << " \n";
			}
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
		
	}
	void deleteNode()
	{
		int current = 0;
		int noOfNodes = this->noOfNodes-1;
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
		data[0] = data[noOfNodes-1];
		heapDown(0, noOfNodes-1);
		noOfNodes--;
		return val;

	}
};

#endif // !MAXHEAP_H
