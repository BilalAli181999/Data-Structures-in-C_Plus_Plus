
#ifndef DEQUE_H
#define DEQUE_H
template <typename T>
class  Deque
{
public:
	int rear;
	int front;
	int capacity;
	int noOfElements;
	T *data;
	void resize(int);
public:
	Deque();
	void insertAtTail(T );
	void insertAtHead(T);
	bool isEmpty();
	bool isFull();
	int getCapacity();
	int getNoOfElements();
	T deleteAtTail();
	T deleteAtHead();
	
};



template<typename T>
inline bool Deque<T>::isEmpty()
{

	return noOfElements == 0;
}

template<typename T>
inline bool Deque<T>::isFull()
{
	return noOfElements == capacity;
}

template<typename T>
inline int Deque<T>::getCapacity()
{
	return capacity;
}

template<typename T>
inline int Deque<T>::getNoOfElements()
{
	return noOfElements;
}

template<typename T>
inline T Deque<T>::deleteAtTail()
{
	if (isEmpty())
	{
		throw "\nQueue is Empty";
	}
	T val = data[rear];
	rear = (rear - 1) % capacity;
	noOfElements--;
	if (noOfElements > 0 && noOfElements == capacity / 4)
	{
		resize(capacity / 2);
	}
	return val;
}

template<typename T>
inline T Deque<T>::deleteAtHead()
{
	if (isEmpty())
	{
		throw "\nQueue is Empty";
	}
	T val = data[front];
	if (front == capacity-1)
	{
		front = 0;
	}
	else
	{
		front = (front + 1) % capacity;
	}
	noOfElements--;
	if (noOfElements > 0 && noOfElements == capacity / 4)
	{
		resize(capacity / 2);
	}
	return val;
}


template<typename T>
inline Deque<T>::Deque()
{
	rear = front = noOfElements = 0;
	capacity = 1;
	data = new T[capacity];
}

template<typename T>
inline void Deque<T>::insertAtTail(T val)
{
	if (isFull())
	{
		resize(capacity * 2);
	}
	data[rear] = val;
	rear = (rear + 1) % capacity;
	noOfElements++;
}
template<typename T>
inline void Deque<T>::insertAtHead( T val)
{
	if (isFull())
	{
		resize(capacity * 2);
	}
	
	if (front == 0)
	{
		front = abs(capacity - 1);
	}
	else
	{
		front = front - 1;
	}
	data[front] = val;
	
	noOfElements++;
}
template<typename T>
inline void Deque<T>::resize(int nS)
{
	T *temp = new T[nS];
	for (int j = 0, i = front; j < noOfElements; j++)
	{
		temp[j] = data[i];
		i = (i + 1) % capacity;
	}
	this->~Deque();
	data = temp;
	capacity = nS;
	rear = noOfElements;
	front = 0;
}
#endif // !DEQUE_H
