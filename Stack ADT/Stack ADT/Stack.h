#ifndef STACK_H
#define STACK_H
#include<iostream>
#include"string"
using namespace std;
template <typename T>
class Stack
{
	T*data;
	int capacity;
	int top;
	void reSize(int);
public:
	Stack();
	Stack(const Stack<T> &);
	Stack & operator=(const Stack<T> &);
	~Stack();
	void push(T);
	bool isFull();
	bool isEmpty();
	int getCapacity();
	int getNumberOfElements();
	T pop();
	T stackTop();
};
#endif // !STACK_H

