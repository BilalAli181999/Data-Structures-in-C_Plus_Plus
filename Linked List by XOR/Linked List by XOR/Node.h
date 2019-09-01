template <typename T>
class Node
{
public:
	T info;
	Node<T>* nextPrev;
	Node()
	{
		nextPrev = 0;
	}
	Node(T val)
	{
		info = val;
		nextPrev = 0;
	}

};
