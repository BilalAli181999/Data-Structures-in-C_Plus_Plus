#include"Node.h"

template<typename T>
 Node<T>::Node()
 {
	 info = 0;
	 height = 1;
	 left = nullptr;
	 right = nullptr;
 }

 template<typename T>
 Node<T>::Node(T val)
 {
	 info = val;
	 height = 1;
	 left = nullptr;
	 right = nullptr;
 }
