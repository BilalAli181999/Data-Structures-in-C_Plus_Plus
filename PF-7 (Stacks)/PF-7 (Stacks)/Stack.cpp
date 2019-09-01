#include"Stack.h"

template<typename T>
void Stack<T>::reSize(int nS)
{
	T* temp = new T[nS];
	for (int i = 0; i < top; i++)
	{
		temp[i] = data[i];
	}
	this->~Stack();
	data = temp;
	capacity = nS;
}



template<typename T>
void Stack<T>::display()
{
	for (int i = 0; i < top; i++)
	{
		cout << data[i];
	}
}

template<typename T>
 Stack<T>::Stack()
{
	 capacity = 1;
	 data = new T[capacity];
	 top = 0;
}

 template<typename T>
 Stack<T>::Stack(const Stack<T>& ref)
 {
	 this->capacity = ref.capacity;
	 this->top = ref.top;
	 for (int i = 0; i < capacity; i++)
	 {
		 this->data[i] = ref.data[i];
	 }
 }

 template<typename T>
 Stack<T> & Stack<T>::operator=(const Stack<T>& ref)
 {
	 this->~Stack();
	 this->capacity = ref.capacity;
	 this->top = ref.top;
	 for (int i = 0; i < capacity; i++)
	 {
		 this->data[i] = ref.data[i];
	 }
	 return (*this);
 }

 template<typename T>
 Stack<T>::~Stack()
 {
	 if(!data)
	 {
		 return;
	 }
	 delete[]data;
 }

 template<typename T>
 void Stack<T>::push(T val)
 {
	 if (isFull())
	 {
		 reSize(capacity * 2);
	 }
	 data[top++] = val;
 }

 template<typename T>
 bool Stack<T>::isFull()
 {
	 return top==capacity;
 }

 template<typename T>
 bool Stack<T>::isEmpty()
 {
	 return top==0;
 }

 template<typename T>
 int Stack<T>::getCapacity()
 {
	 return capacity;
 }

 template<typename T>
 int Stack<T>::getNumberOfElements()
 {
	 return top;
 }

 template<typename T>
 T Stack<T>::pop()
 {
	 if (isEmpty())
	 {
		 string s= "Empty String";
		 throw s;
	 }
	 T val = data[--top];
	 if (top > 0 && top == capacity / 4)
	 {
		 reSize(capacity / 2);
	 }
	 return val;
 }

 template<typename T>
 T Stack<T>::stackTop()
 {
	 if (isEmpty())
	 {
		 string s = "Empty String";
		 throw s;
	 }
	 else
		 return data[top - 1];
	
 }
