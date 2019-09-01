#include"AVL.h"
template<typename T>
AVL<T>::AVL()
{
	root = 0;
}

template<typename T>
void AVL<T>::setRoot(int v)
{
	root = new Node<T>(v);

}
template<typename T>
 int AVL<T>::balanceFactor(Node<T>* p)
{
	 int l, r;
	 l = heightOfTree(p->left);
	 r = heightOfTree(p->right);
	 return l - r;
}

 template<typename T>
 int AVL<T>::heightOfTree(Node<T>* p)
 {
	 int hL=0,hR=0;
	 if (p->left == 0 && p->right == 0)
	 {
		 return 1;
	 }
	 if (p->left)
	 {
		 hL += heightOfTree(p->left);
	 }
	 if (p->right)
	 {
		 hR += heightOfTree(p->right);
	 }
	 if(hL>hR)
	 {
		 return hL;
	 }
	 else
	 {
		 return hR;
	 }
 }
