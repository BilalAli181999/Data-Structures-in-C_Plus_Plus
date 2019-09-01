#ifndef NODE_H
#define NODE_H
template<typename T>
class Node
{
public:
	T info;
	Node *next;
	Node()
	{
		next = 0;
	}
	Node(T val)
	{
		info = val;
		next = 0;
	}

};


#endif

