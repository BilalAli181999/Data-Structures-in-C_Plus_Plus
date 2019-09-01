#ifndef LINKEDBINARYTREE_H
#define LINKEDBINARYTREE_H
#include"Node.h"
#include<stack>
template <typename T>
class BinaryTree
{
private:
	void reflect(BinaryTree &t,Node<T>*p1, Node<T>*p2)
	{
		
		if (p2->right)
		{
			p1->left = new Node<T>(p2->right->info);
		}
		if (p2->left)
		{
			p1->right = new Node<T>(val);
		}
	

		if (p2->left)
		{
			reflect(t,p1->right, p2->left);
		}
		if (p1->right && p2->left)
		{
			reflect(t,p1->left, p2->right);
		}
	}
public:
	int findNodeLevel(Node<T>*p,T node)
	{
		int h = 0;
		if (p->info == node)
		{
			return 1;
		}
		if (p->left)
		{
			if (findNodeLevel(p->left, node))
			{
				h += findNodeLevel(p->left, node);
			}
		}
		if (p->right)
		{
			if (findNodeLevel(p->right, node))
			{
				h += findNodeLevel(p->right, node);
			}
		}
		return h;
	}
	void createCopy(Node<T>*p1, Node<T>*p2)
	{
		
		if(p2)
		{
			p1 = new Node<T>(p2->info);
		}
		if (p2->left )
		{
			createCopy(p1->left, p2->left);
		}
		if (p2->right)
		{
			createCopy(p1->right, p2->right);
		}
	}
	/*bool isEqual(Node<T>*p1, Node<T>*p2)
	{
		bool s1 = 1, s2 = 1;

		if (p1->info != p2->info)
		{
			return 0;
		}
		if (p1->left && p2->left)
		{
			s1 = isEqual(p1->left, p2->left);
		}
		if (p1->right && p2->right)
		{
			s2 = isEqual(p1->right, p2->right);
		}
		return s1&&s2;
	}*/
	bool ifExists(Node<T>*a[], int size, Node<T>*key)
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
	void removeNode(Node<T>*p)
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
	Node<T>* getParentNode(T node, Node<T>*p)
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

	/*void deepCopy(Node<T>*p1, Node<T>*p2)
	{
		if (p2->left)
		{
			p1->left = new Node<T>(p2->left->info);
			deepCopy(p1->left, p2->left);
		}
		if (p2->right)
		{
			p1->right = new Node<T>(p2->right->info);
			deepCopy(p1->right, p2->right);

		}
	}*/
	public:
		T findNodeSiblings(T node)
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
			cout << "\n Sibling Not Found";
		}
		Node<T>*root;
		BinaryTree()
		{
			root = nullptr;
		}
		void setRoot(T val)
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
		T getRoot()
		{
			if (root)
			{
				return root->info;
			}
		}
		Node<T>* search(T key, Node<T>* p)
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
		void setLeftChild(T parent, T child)
		{
			Node<T>*x = 0;
			x = search(parent, root);

			if (x)
			{
				x->left = new Node<T>(child);
			}
			else
			{
				cout << "\n Parent Not Found";
			}
		}
		void setRightChild(T parent, T child)
		{
			Node<T>*x = 0;
			x = search(parent, root);

			if (x)
			{
				x->right = new Node<T>(child);
			}
			else
			{
				cout << "\n Parent Not Found";
			}
		}

		void preOrder(Node<T>*p)
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
		void postOrder(Node<T>*p)
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
		void inOrder(Node<T>*p)
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
		/*T getParent(T node, Node<T>*p)
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
		}*/
		T getParent(T node, Node<T>*p)
		{
			
			T x=0;
			if (p->left && p->left->info == node)
			{

				return p->info;
			}
			if (p->right && p->right->info == node)
			{

				return p->info;
			}
			if ( p->left)
			{
				x+=getParent(node, p->left);
			}
			if ( p->right)
			{
			    x+=getParent(node, p->right);
			}
			return x;
		}


		void remove(T node)
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
		/*void displayAncestors(T node, Node<T>*p)
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


		}*/
		void displayAncestors(T node, Node<T>*p)
		{
			if (p->info == node)
			{
				return;
		    }
			if (p->left)
			{
				displayAncestors(node, p->left);
				cout << p->info;
			}
			if (p->right)
			{
				displayAncestors(node, p->right);
				cout << p->info;
			}
		}
		void displayDescendents(T node)
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
		int heightOfTree(Node<T>*p)
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
		/*int heightOfTree(Node<T>*p)
		{
			int lCount = 0, rCount = 0;
			if (p->left == 0 && p->right == 0)
			{
				return 0;
			}
			if (p->left)
			{
				lCount =1+heightOfTree(p->left);
			}
			if (p->right)
			{
				rCount =1+heightOfTree(p->right);
			}
			if (lCount > rCount)
				return lCount;
			else
				return rCount;
			
		}*/
		/*void levelOrder(Node<T>*p)
		{
			static	queue<Node<T>*> q;
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
		}*/
		void levelOrder(Node<T>*p)
		{
				queue<Node<T>*> q;
			q.push(p);
			while (!q.empty())
			{
				p = q.front();
				q.pop();
				cout << p->info<<" ";
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
		void parenthesised(Node<T>*p)
		{
			if (p)
			{
				cout << p->info << " ";
			}
			if (p->left || p->right)
				cout << "( ";
			if (p->left)
			{
				parenthesised(p->left);
			}
			if (p->left || p->right)
				cout << ",";
			if (p->right)
			{
				parenthesised(p->right);
			}
			if (p->left || p->right)
				cout << " )";
		}
		
		void displayExplorerView(Node<T>*p)
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
		void displayLevel(int levelNo, Node<T>*p)
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
		BinaryTree<T> operator=(BinaryTree<T> & t)
		{

			root = new Node<T>(t.root->info);
			deepCopy(this->root, t.root);
			return (*this);
		}
		void deepCopy(Node<T>*x,Node<T>*p)
		{
			if (p)
			{
				x = new Node<T>(p->info);
			}
			if (p->left)
			{
				deepCopy(x->left, p->left);
			}
			if (p->right)
			{
				deepCopy(x->right, p->right);
			}
		}
		BinaryTree(BinaryTree<T> & t)
		{
			root = new Node<T>(t.root->info);
			deepCopy(this->root, t.root);
		}
		~BinaryTree()
		{
		//	removeNode(root);
		//	root = nullptr;
		}
	/*	int countNodes(Node<T>*p)
		{
			int count = 0;
			if (p->left)
			{
				count += 1 + countNodes(p->left);
			}
			if (p->right)
			{
				count += 1 + countNodes(p->right);
			}
			return count;
		}*/
		int countNodes(Node<T>*p)
		{
			int count = 0;
			if (p->left)
			{
				count += countNodes(p->left);
			}
			if (p->right)
			{
				count += countNodes(p->right);
			}
			return count+1;
		}
		/*T maxValue(Node<T>*p,int max)
		{
			if (p->info > max)
			{
				max = p->info;
			}
			if (p->left)
			{
				max=maxValue(p->left, max);
			}
			if (p->right)
			{
				max=maxValue(p->right, max);
			}
			return max;

		}*/
		T maxValue(Node<T>*p)
		{
			int max = 0;
			if (p->info > max)
			{
				max = p->info;
			}
			if (p->left)
			{
				max = maxValue(p->left);
			}
			if (p->right)
			{
				max = maxValue(p->right);
			}
			return max;

		}
		T minValue(Node<T>*p)
		{
			static int min = p->info;
			if (p->left)
			{
				if (p->left->info < min)
				{
					min = p->left->info;
				}
				minValue(p->left);
			}
			if (p->right)
			{
				if (p->right->info < min)
				{
					min = p->right->info;
				}
				minValue(p->right);
			}
			return min;
		}
		int countLeafNodes(Node<T>*p)
		{
			/*int count = 0;
			if (p->right == 0 && p->left == 0)
			{
				return 1;
			}
			if (p->left)
			{
				count += countLeafNodes(p->left);
			}
			if (p->right)
			{
				count += countLeafNodes(p->right);
			}
			return count*/
			int count = 0;
			if (p->left==0 && p->right == 0)
			{
				return 1;
			}
			if (p->left)
			{
				count += countLeafNodes(p->left);
			}
			if (p->right)
			{
				count += countLeafNodes(p->right);
			}
			return count;
		}

		/*void nonRecPreOrder()
		{
			Node<T>*address[100];
			int nA=0;
			Node<T>*p=root, *j;
			cout << p->info << "\n";
			bool st = 1;
			while (st)
			{
				j = p;

				if (j->left && !ifExists(address,nA,j->left))
				{
					j = j->left;
					address[nA] = j;
					nA++;
					cout << j->info << "\n";
				}
				else if (j->right && !ifExists(address, nA, j->right))
				{
					j = j->right;
					address[nA] = j;
					nA++;
					cout << j->info << "\n";
				}
				else
				{

					j = getParentNode(j->info, root);

				}
				p = j;
			}

		}*/
		/*void nonRecPreOrder()
		{
			stack<Node<T>*>s;
			Node<T>*p = root;
			if (p->right)
			{

				s.push(p->right);
			}
			int i = 0;
			int c = countNodes(root) + 1;
			while (i < c)
			{
				bool status = 1;
				i++;
				cout << p->info;
				if (p->right)
				{
					s.push(p->right);
					status = 0;
				}

				if (p->left)
				{
					p = p->left;
				}
				if (status)
				{
					p = s.top();
					s.pop();
				}

			}

		}*/
		void nonRecPreOrder()
		{
			stack<Node<T>*>s;
			Node<T>*p = root;
			cout << p->info<<" ";
			bool status = 1;
			do
			{
			
				if (p->left && status)
				{
					s.push(p);
					p = p->left;
					cout << p->info << " ";
				}
				else if (p->right)
				{
					p = p->right;
					cout << p->info << " ";
				}
				else
				{
					p = p.top();
					p.pop();
					status = 0;
				}
				

			}while (!s.empty());
		}
		/*bool isComplete(Node<T>*p)
		{
			bool s1 = 0, s2 = 0;
			if (p->left)
			{
				s1 = isComplete(p->left);
			}
			if (p->right)
			{
				s2 = isComplete(p->right);
			}
			if (p->right != 0 || p->left != 0 && (p->left == 0 || p->right == 0))
			{

				return s1&&s2;
			}
			else

				return !(s1&&s2);

		}*/
	/*	bool isComplete(Node<T>*p)
		{
			int height = heightOfTree(p);
			int countOfNodes = countNodes(p);
		
			if (countOfNodes != pow(2,height)- 1)
				return false;
			else
				return true;

		}*/
		bool isComplete(Node<T>*p)
		{
			bool s1=1,s2=1;
			if (p->right && !p->left)
			{
				return false;
			}
			if (s1 && p->left)
			{
				s1 = isComplete(p->left);
			}
			if (s2 && p->right)
			{
				s2 = isComplete(p->right);
			}
			return s1&&s2;

		}


	

		int balancedFactor(T node)
		{
			Node<T>*x = search(node, root);
			int lH, rH;
			lH = heightOfTree(x->left);
			rH = heightOfTree(x->right);
			return abs(rH - lH);
		}
		/*bool isIsomorphic(BinaryTree<T>& t)
		{
			return isEqual(this->root, t.root);
		}*/
	/*	bool isIsoMorphic(BinaryTree<T> &t1, BinaryTree<T> &t2)
		{
			return isEqual(t1.root, t2.root);
		}*/
		bool isEqual(Node<T>*p1, Node<T>*p2)
		{
			bool s1 = 0;
			if (p1->info != p2->info)
			{
				return 1;
			}
			if (p1->left && p2->left)
			{
				s1+=isEqual(p1->left, p2->left);
			}
			if (p1->right && p2->right)
			{
				s1 += isEqual(p1->right, p2->right);
			}
			return s1;

		}
		bool isIsomorphic(BinaryTree<T>&s)
		{
			return isEqual(this->root, s.root);
		}
		void copy(Node<T>*p1, Node<T>*p2)
		{
			if (p2)
			{
				p1 = new Node<T>(p2->info);
			}
			if (p2->left)
			{
				copy(p1->left, p2->left);
			}
			if ( p2->right)
			{
				copy(p1->right, p2->right);
			}
		}
		BinaryTree<T>&  createClone()
		{
			BinaryTree<T>clone;
			copy(clone.root, this->root);
			return clone;
		}
		BinaryTree<T>  mirrorImage()
		{
			BinaryTree<T> clone = *this;
			clone.setRoot(this->root->info);
			reflect(clone,clone.root, this->root);
			return clone;
		}
		bool isMirror(Node<T>*p1, Node<T>*p2 )
		{
			bool s1 = 1, s2 = 1;
			if (p1->left&& p2->right &&p1->left != p2->right)
			{
				return 0;
		    }
			if (p1->right&& p2->left && p1->right != p2->left)
			{
				return 0;
			}
			if (p1->left && p2->left)
			{
				s1 = isMirror(p1->left, p2->left);
			}
			if (p1->right && p2->right)
			{
				s2 = isMirror(p1->right, p2->right);
			}
			return s1&&s2;

		}
		void displayLongestPath(Node<T>*p,T a[],int s)
		{
			
			if (s == heightOfTree(this->root)-1)
			{
				
				for (int i = 0; i < s; i++)
				{
					cout << a[i] << " ";
				}
				cout << "\n";
					
				return;
				
			}
			if (p->left)
			{
				a[s] = p->left->info;
				s++;
				displayLongestPath(p->left, a, s);
				s--;
			}
			if (p->right)
			{
				a[s] = p->right->info;
				s++;
				displayLongestPath(p->right, a, s);
				s--;
			}
		}
		void displayAllPaths(Node<T>*p, T a[], int s)
		{
			if (p->left==0 && p->right==0)
			{
				for (int i = 0; i < s; i++)
				{
					cout << a[i] << " ";
				}
				cout << p->info;
				cout << "\n";
			
			}
			if (p->left)
			{
				a[s] = p->info;
				s++;
				displayAllPaths(p->left, a, s);
				s--;
			}
			if (p->right)
			{
				a[s] = p->info;
				s++;
				displayAllPaths(p->right, a, s);
				s--;
			}
	    }
		void displayAllPathsLength(Node<T>*p, T a[], int s)
		{
			if (p->left == 0 && p->right == 0)
			{
				for (int i = 0; i < s; i++)
				{
					cout << a[i] << " ";
				}
				cout << p->info;
				cout <<"Length: "<< s+1;
				cout << "\n";

			}
			if (p->left)
			{
				a[s] = p->info;
				s++;
				displayAllPathsLength(p->left, a, s);
				s--;
			}
			if (p->right)
			{
				a[s] = p->info;
				s++;
				displayAllPathsLength(p->right, a, s);
				s--;
			}
		}
		void displayAllLengths(Node<T>*p, int l)
		{
			
			if (!p->left && !p->right)
			{
				
				cout << "length: " << l << "\n";
			}
			if (p->left)
			{
				l++;
				displayAllLengths(p->left,l);
				l--;
			}
			if (p->right)
			{
				l++;
				displayAllLengths(p->right,l);
				l--;
			}
		}
		bool isFound(T val,Node<T>*p)
		{
			Node<T>* x = search(val, p);
			if (x)
				return true;
			else
				return false;
		}
		T lowestCommonAncestor(T a,T b,Node<T>*p)
		{
			int lca=0;
			if (isFound(a,p) && isFound(b,p))
			{
				lca = p->info;
				
			}
			if (p->left)
			{
				if(lowestCommonAncestor(a, b, p->left))
				lca=lowestCommonAncestor(a, b, p->left);
			}
			if (p->right)
			{
				if (lowestCommonAncestor(a, b, p->right))
				lca=lowestCommonAncestor(a, b, p->right);
			}
			return lca;
		}
		int levelOfNode(T node,Node<T>*p)
		{
			int count = 0;
			if (p->info == node)
			{
				return 1;
			}
			if (p->left)
			{
				count+=levelOfNode(node, p->left);
			}
			if (p->right)
			{
				count +=levelOfNode(node, p->right);
			}
			if (count)
				return count + 1;
			else
				return count;
		}
		int findDistance(T a, T b)
		{
			int x = lowestCommonAncestor(a, b, root);
			int aD, bD;
			aD = levelOfNode(a, root);
			bD = levelOfNode(b, root);
			return (aD + bD) - (2*x);
		}
		int countTrees(int num)
		{
			if (num == 1)
				return 1;
			else
				return (countTrees(num-1)* countTrees(num - 1))+num;
		}
		void doubleTree(Node<T>*p)
		{
			if (p->left)
			{
				T temp = p->left->info;
				p->left->info = p->info;
				p->left->left = new Node<T>(temp);
				doubleTree(p->left->left);
			}
			else
			{
			
				p->left = new Node<T>(p->info);
			}

			if (p->right)
			{
				doubleTree(root->right);
			}
		}
		bool treeChecking(Node<T>*p)
		{
			bool s1 = 1,s2=1;
			if (p->left && p->left->info > p->info)
			{
				return false;
			}
			if (p->right && p->right->info < p->info)
			{
				return false;
			}
			if (p->left)
			{
				s1 = treeChecking(p->left);
			}
			if (p->right)
			{
				s2 = treeChecking(p->right);
			}
			return s1&&s2;
		}
		bool isBst(Node<T>*p)
		{
			bool status=1 ;
			 T min = minValue(p);
			 T max = maxValue(p, p->info);
			if (p->left)
			{
				if (!(p->left->info >= min && p->left->info<max)) 
				{
					return false;
				}
				
			}
			if (p->right)
			{
				if (!(p->right->info<=max && p->right->info>min) )
				{
					return false;
				}

			}
			if (p->left)
			{
				status=isBst(p->left);
			}
			if (p->right)
			{
				status = isBst(p->right);
			}
			return status;
		}
		int giveLength(Node<T>*p,int key)
		{
			int length = 0;
			if (p->info == key)
			{
				return 1;
			}
			if (p->left)
			{
				if(giveLength(p->left, key))
				length = 1+giveLength(p->left,key);
				
			}
			if (p->right)
			{
				if (giveLength(p->right, key))
					length = 1 + giveLength(p->right, key);
				
			}
			return length;
		}
};

#endif // !LINKEDBINARYTREE_H

