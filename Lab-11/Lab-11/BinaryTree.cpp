#include"BinaryTree.h"
#include<iostream>
#include<queue>
using namespace std;
template<typename T>
 bool BinaryTree<T>::isEqual(Node<T>* p1, Node<T>* p2)
{
	return false;
}

 template<typename T>
 bool BinaryTree<T>::ifExists(Node<T>* a[], int size, Node<T>* key)
 {
	 for (int i = 0; i < size; i++)
	 {
		 if (a[i] == key)
		 {
			 return true;
		 }
	 }
	 return false;
 }

 template<typename T>
 void BinaryTree<T>::removeNode(Node<T>* p)
 {

	 if (p->left)
	 {
		 removeNode(p->left);
	 }
	 if (p->right)
	 {
		 removeNode(p->right);
	 }

	 delete p;
	 p = nullptr;


 }

 template<typename T>
 Node<T>* BinaryTree<T>::getParentNode(T node, Node<T>* p)
 {
	 Node<T>* x = 0;
	 if (p->left && p->left->info == node)
	 {

		 return p;
	 }
	 if (p->right && p->right->info == node)
	 {

		 return p;
	 }
	 if (!x &&  p->left)
	 {
		 x = getParentNode(node, p->left);
	 }
	 if (!x && p->right)
	 {
		 x = getParentNode(node, p->right);
	 }
	 return x;
 }

 template<typename T>
 void BinaryTree<T>::deepCopy(BinaryTree<T>& t, Node<T>* p1, Node<T>* p2)
 {
	 if (p2->left)
	 {
		 p1->left = new Node<T>(p2->left->info);
		 deepCopy(t, p1->left, p2->left);
	 }
	 if (p2->right)
	 {
		 p1->right = new Node<T>(p2->right->info);
		 deepCopy(t, p1->right, p2->right);
	 }
 }
 template<typename T>
 BinaryTree<T>::BinaryTree()
 {
	 root = nullptr;
 }
 template<typename T>
 void BinaryTree<T>::setRoot(T val)
 {
	 if (root)
	 {
		 root->info = val;
	 }
	 else
	 {
		 root = new Node<T>(val);
	 }
 }

 template<typename T>
 T BinaryTree<T>::getRoot()
 {
	 if (root)
	 {
		 return root->info;
	 }
	 else
		 throw_exeception("No Root Exists");
 }

 template<typename T>
 Node<T>* BinaryTree<T>::search(T key, Node<T>* p)
 {
	 Node<T>*x = 0;
	 if (p->info == key)
	 {
		 return p;
	 }
	 if (!x && p->left)
	 {
		 x = search(key, p->left);
	 }
	 if (!x && p->right)
	 {
		 x = search(key, p->right);
	 }
	 return x;
 }

 template<typename T>
 void BinaryTree<T>::setLeftChild(T parent, T child)
 {
	 Node<T>*x = 0;
	 x = search(parent, root);

	 if (x)
	 {
		 x->left = new Node<T>(child);
	 }
	 else
	 {
		 throw_exeception("Parent Not Found");
	 }
 }

 template<typename T>
 void BinaryTree<T>::setRightChild(T parent, T child)
 {
	 Node<T>*x = 0;
	 x = search(parent, root);

	 if (x)
	 {
		 x->right = new Node<T>(child);
	 }
	 else
	 {
		 throw_exeception("Parent Not Found");
	 }
 }
 template<typename T>
 bool BinaryTree<T>::findNode(T node)
 {
	 Node<T>*x;
	 x = search(node, root);
	 if (x)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
 }
 template<typename T>
 void BinaryTree<T>::preOrder(Node<T>* p)
 {
	 if (p)
	 {
		 cout << p->info << "\n";
	 }
	 if (p->left)
	 {
		 preOrder(p->left);
	 }
	 if (p->right)
	 {
		 preOrder(p->right);
	 }
 }

 template<typename T>
 void BinaryTree<T>::postOrder(Node<T>* p)
 {
	 if (p->left)
	 {
		 postOrder(p->left);
	 }
	 if (p->right)
	 {
		 postOrder(p->right);
	 }
	 cout << p->info << "\n";
 }

 template<typename T>
 void BinaryTree<T>::inOrder(Node<T>* p)
 {
	 if (p->left)
	 {
		 inOrder(p->left);
	 }
	 cout << p->info << "\n";
	 if (p->right)
	 {
		 inOrder(p->right);
	 }

 }

 template<typename T>
 T BinaryTree<T>::getParent(T node, Node<T>* p)
 {
	 T x = 0;
	 if (p->left && p->left->info == node)
	 {

		 return p->info;
	 }
	 if (p->right && p->right->info == node)
	 {

		 return p->info;
	 }
	 if (!x &&  p->left)
	 {
		 x = getParent(node, p->left);
	 }
	 if (!x && p->right)
	 {
		 x = getParent(node, p->right);
	 }
	 return x;
 }

 template<typename T>
 void BinaryTree<T>::remove(T node)
 {
	 if (node == getRoot())
	 {
		 ~BinaryTree();
	 }
	 else
	 {
		 Node<T>*x = 0, *parent = 0;
		 x = search(node, root);
		 if (x != root)
		 {


			 parent = this->getParentNode(node, root);
			 if (parent->left->info == node)
			 {
				 parent->left = nullptr;
			 }
			 if (parent->right->info == node)
			 {
				 parent->right = nullptr;
			 }

			 if (x)
			 {
				 removeNode(x);
			 }
		 }
	 }

 }

 template<typename T>
 void BinaryTree<T>::displayAncestors(T node, Node<T>* p)
 {
	 static T array[100];
	 static int nA = 0;
	 if (p->info == node)
	 {
		 for (int i = 0; i < nA; i++)
		 {
			 cout << array[i] << " ";
		 }
		 return;
	 }
	 if (p->left)
	 {
		 array[nA] = p->info;
		 nA++;
		 displayAncestors(node, p->left);
		 nA--;
	 }
	 if (p->right)
	 {
		 array[nA] = p->info;
		 nA++;
		 displayAncestors(node, p->right);
		 nA--;
	 }


 }

 template<typename T>
 void BinaryTree<T>::displayDescendents(T node)
 {
	 Node<T>*x = search(node, root);
	 if (x->left)
	 {
		 cout << x->left->info << " ";
		 displayDescendents(x->left->info);
	 }
	 if (x->right)
	 {
		 cout << x->right->info << " ";
		 displayDescendents(x->right->info);
	 }
 }

 template<typename T>
 int BinaryTree<T>::heightOfTree(Node<T>* p)
 {
	 int lCount = 0, rCount = 0;
	 if (p->left)
	 {
		 lCount = heightOfTree(p->left);
	 }
	 if (p->right)
	 {
		 rCount = heightOfTree(p->right);
	 }
	 if (rCount < lCount)
	 {
		 return lCount + 1;
	 }
	 else
	 {
		 return rCount + 1;
	 }
 }

 template<typename T>
 void BinaryTree<T>::levelOrder(Node<T>* p)
 {
	 queue<Node<T>*> q;
	 q.push(p);
	 while (!q.empty())
	 {
		 p = q.front();
		 q.pop();
		 cout << p->info << "\t";
		 if (p->left)
		 {
			 q.push(p->left);
		 }
		 if (p->right)
		 {
			 q.push(p->right);
		 }
	 }
 }

 template<typename T>
 void BinaryTree<T>::displayParenthesisedView(Node<T>* p)
 {
	 if (p)
	 {
		 cout << p->info << " ";
	 }
	 if (p->left || p->right)
		 cout << "( ";
	 if (p->left)
	 {
		 displayParenthesisedView(p->left);
	 }
	 if (p->left || p->right)
		 cout << ",";
	 if (p->right)
	 {
		 displayParenthesisedView(p->right);
	 }
	 if (p->left || p->right)
		 cout << " )";
 }

 template<typename T>
 int BinaryTree<T>::getLevelOfNode(T node, Node<T>* p)
 {
	 static int c = 0;
	 if (p->info == node)
	 {
		 cout << c;
		 return c;
	 }

	 if (p->left)
	 {
		 c++;
		 getLevelOfNode(node, p->left);
		 c--;

	 }
	 if (p->right)
	 {
		 c++;
		 getLevelOfNode(node, p->right);
		 c--;
	 }
 }

 template<typename T>
 void BinaryTree<T>::displayExplorerView(Node<T>* p)
 {
	 cout << p->info << "\t";
	 if (p->left)
	 {
		 cout << "\n";
		 displayExplorerView(p->left);
	 }
	 if (p->right)
	 {
		 cout << "\n";
		 displayExplorerView(p->right);
	 }
 }

 template<typename T>
 void BinaryTree<T>::displayLevel(int levelNo, Node<T>* p)
 {
	 static int c = 0;
	 if (c == levelNo)
	 {
		 cout << p->info << " ";
	 }
	 if (p->left)
	 {
		 c++;
		 displayLevel(levelNo, p->left);
		 c--;
	 }
	 if (p->right)
	 {
		 c++;
		 displayLevel(levelNo, p->right);
		 c--;
	 }
 }

 template<typename T>
 BinaryTree<T> BinaryTree<T>::operator=(BinaryTree<T>& t)
 {
	 this->~BinaryTree();
	 this->root = new Node<T>(t.root->info);
	 deepCopy(t, this->root, t.root);
	 return (*this);
 }

 template<typename T>
 BinaryTree<T>::BinaryTree(BinaryTree<T>& t)
 {
	 this->root = new Node<T>(t.root->info);
	 deepCopy(t, this->root, t.root);
 }

 template<typename T>
 BinaryTree<T>::~BinaryTree()
 {
	 removeNode(root);
	 root = nullptr;
 }

 

 template<typename T>
 Node<T>* BinaryTree<T>::getRootAddress()
 {
	 return root;
 }

 template<typename T>
 int BinaryTree<T>::isInternalNode(T node)
 {
	 Node<T>*x = search(node, root);
	 if (x->left != 0 || x->right != 0)
	 {
		 return 1;
	 }
	 else
		 return 0;
 }

 template<typename T>
 int BinaryTree<T>::isExternalNode(T node)
 {
	 Node<T>*x = search(node, this->root);
	 if (x->left == 0 && x->right == 0)
	 {
		 return 1;
	 }
	 else
		 return 0;
 }

 template<typename T>
 T BinaryTree<T>::findNodeSiblings(T node)
 {
	 Node<T>*x = getParentNode(node, root);
	 if (x->left && x->left->info == node)
	 {
		 if (x->right)
		 {
			 return x->right->info;
		 }
	 }
	 if (x->right && x->right->info == node)
	 {
		 if (x->left)
		 {
			 return x->left->info;
		 }
	 }
	  throw_exception("No child Exists");
		
 }
