#ifndef NODE_H
#define NODE_H
#include"Node.h"
template <typename T>
class Node
{
public:
	T info;
	int priority;
	int initialIndex;
	Node()
	{
		this->info = 0;
		this->priority = 0;
		initialIndex = 0;
	}
	Node(T val, int pri)
	{
		this->info = val;
		this->priority = pri;
	}
};
#endif // !NODE_H
