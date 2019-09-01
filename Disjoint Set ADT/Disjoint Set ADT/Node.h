#ifndef NODE_H
#define NODE_H
template <typename T>
class Node
{
public:
	T info;
	int parent;
	Node()
	{
	
		info = 0;
	}
	Node(T val)
	{
		
		info = val;
	}
};
#endif // !NODE_H
