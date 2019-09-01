#ifndef QUEUE_H
#define QUEUE_H
template <typename T>
class Queue
{
	int rear;
	int front;
	int capacity;
	int noOfElements;
	T *data;
	void resize(int);
	
public:
	Queue();
	T getElementAtFront();
	~Queue();
	void enQueue(T);
	bool isEmpty();
	bool isFull();
	int getCapacity();
	int getNoOfElements();
	T deQueue();
	

};


#endif

template<typename T>
inline void Queue<T>::resize(int nS)
{
	T *temp = new T[nS];
	for (int j = 0, i = front; j < noOfElements; j++)
	{
		temp[j] = data[i];
		i = (i + 1) % capacity;
	}
	this->~Queue();
	data = temp;
	capacity = nS;
	rear = noOfElements;
	front = 0;
}

template<typename T>
inline T Queue<T>::getElementAtFront()
{
	if (isEmpty())
	{
		throw "\nQueue is Empty";
	}
	return data[front];
	
}

template<typename T>
inline Queue<T>::Queue()
{
	rear = front = noOfElements = 0;
	capacity = 1;
	data = new T[capacity];
}

template<typename T>
inline Queue<T>::~Queue()
{
	if (!data)
	{
		return;
	}
	delete[]data;
	data = 0;
}

template<typename T>
inline void Queue<T>::enQueue(T val)
{
	if(isFull())
	{ 
		resize(capacity * 2);
	}
	data[rear] = val;
	rear = (rear + 1) % capacity;
	noOfElements++;
}

template<typename T>
inline bool Queue<T>::isEmpty()
{

	return noOfElements==0;
}

template<typename T>
inline bool Queue<T>::isFull()
{
	return noOfElements==capacity;
}

template<typename T>
inline int Queue<T>::getCapacity()
{
	return capacity;
}

template<typename T>
inline int Queue<T>::getNoOfElements()
{
	return noOfElements;
}

template<typename T>
inline T Queue<T>::deQueue()
{
	if (isEmpty())
	{
		throw "\nQueue is Empty";
	}
	T val = data[front];
	front = (front + 1) % capacity;
	noOfElements--;
	if (noOfElements > 0 && noOfElements == capacity / 4)
	{
		resize(capacity / 2);
	}
	return val;
}
