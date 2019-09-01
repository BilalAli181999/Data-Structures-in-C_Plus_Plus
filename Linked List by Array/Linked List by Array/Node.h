#ifndef NODE_H
#define NODE_H
template<typename T>
class Node
{
public:
	T info;
	int next;
	Node()
	{
		next = -1;
	}
	Node(T val)
	{
		info = val;
		next = -1;
	}
	
};
#endif 

