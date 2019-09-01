#ifndef NODE_H
#define NODE_H
template <typename T>
class Node
{
public:
	T info;
	Node<T>*left;
	Node<T>*right;

	Node()
	{
		left = nullptr;
		right = nullptr;
	
	}
	Node(T val)
	{
		info = val;
		left = nullptr;
		right = nullptr;
	}

};
#endif // !NODE_H

