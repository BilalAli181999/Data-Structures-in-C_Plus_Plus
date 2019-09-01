//#include"DisjointSet.h"
//#include<iostream>
//using namespace std;
//template<typename T>
// DisjointSet<T>::DisjointSet(int size)
// {
//	 arraySize = size;
//	 id = new Node<T>[arraySize];
// }
//
// template<typename T>
// void DisjointSet<T>::displayArray()
// {
//	 for (int i = 0; i < arraySize; i++)
//	 {
//		 cout << id[i].parent << " ";
//	 }
// }
//
// template<typename T>
// void DisjointSet<T>::unionNodes(int a, int b)
// {
//	 if (b < arraySize && a < arraySize)
//	 {
//		 id[b].parent = a;
//	 }
//	 else
//		 cout << "\n Index Out Of Bound";
// }
//
// template<typename T>
// bool DisjointSet<T>::find(int first, int second)
// {
//	 int a, b;
//	 a = first;
//	 b = second;
//	 while (a != -1 && b != -1)
//	 {
//		 if (id[a].parent = id[b].parent)
//		 {
//			 return true;
//		 }
//		 a = id[a].parent;
//		 b = id[b].parent;
//	 }
//	 return false;
// }
//
// 