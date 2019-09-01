#include"Node.h"
template <typename T>
class BST
{
	Node<T>*root;
public:
	BST()
	{
		root = nullptr;
	}
	void remove(T val)
	{
		Node<T>*org, *temp;
		org = search(val, root);
		temp = org;

		if (org->right == 0 && org->left == 0)
		{
			
			
			
			Node<T>*parent = getParent(val, root);

			
			if (parent->left && parent->left->info == val)
			{
				
				delete parent->left;
				parent->left = nullptr;
			}
			if (parent->right && parent->right->info == val)
			{
				
				delete parent->right;
				parent->right = nullptr;
			}

			
			
			
		}
		/*else if (org->right != 0 || org->left != 0)
		{
			if (org->left != 0)
			{
				org->info = org->left->info;
				delete org->left;
				org->left = nullptr;
			}
			else if (org->right != 0)
			{
				org->info = org->right->info;
				delete org->right;
				org->right = nullptr;
			}
		}*/
		else
		{
			
			if (temp->right)
			{
				temp = temp->right;
			}
			
			while (temp->left)
			{
				temp = temp->left;
				
			}
			
			
			Node<T>*x = getParent(temp->info,root);
			T v = temp->info;
			if (x->left && x->left->info == temp->info)
			{
				
				delete x->left;
				x->left = nullptr;
			
			}
			if (x->right &&x->right->info == temp->info)
			{
				
				delete x->right;
				x->right = nullptr;
				
			}
			
			org->info = v;
			
			
			
		}
	   
	
	}
	/*Node<T>* getParent(T val,Node<T>*p)
	{
		if (p->left && p->left->info == val)
		{
			return p;
		}
		if (p->right && p->right->info == val)
		{
			return p;
		}
		if (p->left)
		{
			getParent(val, p->left);
		}
		if (p->right)
		{
			getParent(val, p->right);
		}
	}*/
	void insert(T val, Node<T>*p)
	{
		
		if (root == nullptr)
		{
			
			root = new Node<T>(val);
			return;
		}
		
		if (p->left && val < p->info)
		{
			
			insert(val, p->left);
		}
		if (p->right && val >= p->info)
		{
		
			insert(val, p->right);
		}
		
		if (val < p->info && p->left==0 )
		{
	
			p->left = new Node<T>(val);
			
			
		}
		if (val >= p->info && p->right==0 )
		{

			p->right = new Node<T>(val);
			
			
		}
	}


	void preOrder(Node<T>* p)
	{
		
		
		if (p->right)
		{
			preOrder(p->right);
		}
		
		if (p->left)
		{
			preOrder(p->left);
		}
		cout << " " << p->info << " ";
		
		

	}
	void inOrder(Node<T>* p)
	{


		

		if (p->left)
		{
			postOrder(p->left);
		}
		cout << " " << p->info << " ";
		if (p->right)
		{
			postOrder(p->right);
		}

	}
	Node<T>*getRoot()
	{

		if (root)
		{
			return root;
		}
	}
	Node<T>* search(T val, Node<T>*p)
	{
		Node<T>*x = 0;
		if (p->info == val)
		{
			return p;
		}
		if (val < p->info && p->left)
		{
			if(search(val, p->left))
			x=search(val, p->left);
		}
		if (val >= p->info && p->right)
		{
			if(search(val, p->right))
			x = search(val, p->right);
		}
		return x;

	}
	Node<T>* getParent(T node, Node<T>*p)
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
			x = getParent(node, p->left);
		}
		if (!x && p->right)
		{
			x = getParent(node, p->right);
		}
		return x;
	}
	/*void remove(T node)
	{
		Node<T>*x = search(node,root);
		Node<T>*parent = getParent(node, root);
	
		if (parent->left && parent->left->info == node)
		{
			parent->left= nullptr;
		}
		if (parent->right && parent->right->info == node)
		{
			parent->right = nullptr;
		}
	
		delete x;
		x = nullptr;
	}*/
	void parenthesisedView(Node<T>*p)
	{
		cout << " " << p->info << " ";
		if(p->left ||p->right)
		cout << "( ";
		if (p->left)
		{
			parenthesisedView(p->left);
		}
		if (p->left || p->right)
		cout << ",";
		if (p->right)
		{
			parenthesisedView(p->right);
		}
		if (p->left || p->right)
		cout << ") ";
	}

};
