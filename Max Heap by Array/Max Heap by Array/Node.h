#ifndef NODE_H
#define NODE_H
template <typename T>
class Node
{
public:
	T info;
	
	Node();
	Node(T val);

};
#endif // !NODE_H

template<typename T>
inline Node<T>::Node()
{
	info = 0;
}

template<typename T>
inline Node<T>::Node(T val)
{
	info = 0;
	
}
