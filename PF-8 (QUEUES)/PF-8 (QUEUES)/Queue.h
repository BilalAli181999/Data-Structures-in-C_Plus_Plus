#ifndef QUEUE_H
#define QUEUE_H
template <typename T>
class Queue
{

	int front;
	int rear;
	int capacity;
	T*data;
public:
	void display()
	{
		
		for (int i = front; i < rear; i++)
		{
			data[i].display();
		}

	}
	T& operator[](int f)
	{
		return data[front];
	}
	Queue(int size)
	{
		data = new T[size];
		capacity = size;
		front = 0;
		rear = 0;
	}
	bool isEmpty()
	{
		if (rear == 0)
		{
			return true;
		}
		return false;
	}
	bool isFull()
	{
		if (rear == capacity - 1)
		{
			return true;
		}
		else
			return false;
	}
	void enqueue(T p)
	{
		if (!isFull())
		{
			data[rear] = p;
			rear++;
		}
		else
			cout << "\nQUEUE IS FULL";
	}
	T dequeue()
	{
		T val = data[front];
		
		
		front++;
		return val;
	}
	/*void remove()
	{
		if (!isEmpty())
		{
			for (int i = front; i < rear; i++)
			{
				data[i] = data[i + 1];
			}
			rear--;
		}
		else
			cout << "\n Empty";
	}*/
	void rotate()
	{
		T temp;
		temp = data[front];
		
		for (int i = front; i < rear; i++)
		{
		
			data[i] = data[i + 1];
		}
		
		data[rear] = temp;
		
	}
};

#endif // !QUEUE_H

