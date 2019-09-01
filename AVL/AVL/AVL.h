#ifndef AVL_H
#define AVL_H
#include"Node.h"
#include<iostream>
#include<stack>
using namespace std;
template <typename T>
class AVL
{
public:
	Node<T> *root;
	AVL()
	{
		root = 0;
	}

	void setRoot(int v)
	{
		root = new Node<T>(v);

	}
	int balanceFactor(Node<T>*p)
{
	int l=0, r=0;
	if(p->left)
	l = p->left->height;
	if (p->right)
	r = p->right->height;
	return l - r;
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
void isDisturbed(Node<T>*p,stack<Node<T>*>s)
{
	int bF = balanceFactor(p);
	if (bF > 1 || bF < -1)
	{
	
		int ll = 0, lr = 0, rl = 0, rr = 0;
		if (p->left&&p->left->left)
			ll = p->left->left->height;
		if (p->left&&p->left->right)
			lr = p->left->right->height;
		if (p->right&&p->right->left)
			rl = p->right->left->height;
		if (p->right&&p->right->right)
			rr = p->right->right->height;
	
		if (ll > lr && ll > rl && ll > rr)
		{
			
			rotateRight(p,s);
		
	    }
		
		if (lr > ll && lr > rl && lr > rr)
		{
			rotatelR(p, s);
		}
		if (rl > lr && rl > ll && rl > rr)
		{
			rotateRl(p, s);
		}
		if (rr > lr && rr > ll && rr > rl)
		{
			rotateLeft(p, s);
		}
	}
}
void adjustHeight(Node<T>*p)
{
	if(p)
	p->height = heightOfTree(p);
	if (p->left)
		adjustHeight(p->left);
	if (p->right)
		adjustHeight(p->right);
}
void insert(T val, Node<T>*p, stack<Node<T>*> s, stack<Node<T>*> sB)
{
	
	if (root == nullptr)
	{
		root = new Node<T>(val);
		return;
	}
	
	if (p->left && val < p->info)
	{
		s.push(p);
		sB.push(p);
		insert(val, p->left, s,sB);
	}
	if (p->right && val > p->info)
	{
		s.push(p);
		sB.push(p);
		insert(val, p->right, s,sB);
	}
	bool status1=0, status2 = 0;
	if (val < p->info && p->left == 0)
	{
		p->left = new Node<T>(val);
		status1 = 1;
	
	
	}
	if (val >= p->info && p->right == 0)
	{
		p->right = new Node<T>(val);
		status2 = 1;
	
	}
	updateHeight(p);
	Node<T>*x;
	

	while (!s.empty())
	{
		
		
		x = s.top();
		s.pop();
		updateHeight(x);
		
	}
	if (status1 || status2)
	{
		Node<T>*bP = p;
		isDisturbed(bP,sB);
		
		while (!sB.empty())
		{

			bP = sB.top();
			sB.pop();
			isDisturbed(bP,sB);

		}
	}

}
void updateHeight(Node<T>*p)
{
	int hL = 0, hR = 0;
	if (p->right)
	hR = p->right->height;
	if (p->left)
		hL = p->left->height;
	if ( hR>=hL)
		p->height = hR+1;
	else if(hR<=hL)
		p->height = hL+1;
}
Node<T>* getParent(T val, Node<T>*p)
{
	static Node<T>*x=0;
	if (p->left && p->left->info == val)
		return p;
	if (p->right && p->right->info == val)
		return p;
	if (p->left && val<p->info)
		x=getParent(val, p->left);
	if (p->right && val>p->info)
		x = getParent(val, p->right);
	return x;
}
void rotateRight(Node<T>*p, stack<Node<T>*>s)
{
	Node<T>*lp=0, *pp=0, *lrp=0;
	if (p != root)
	{
		pp = getParent(p->info, root);
	}
	else
		pp = p;
	lp = p->left;
	if(lp->right)
	lrp = lp->right;
	
	lp->right = p;
	if (lrp)
	p->left = lrp;
	
	
	if (pp->left == p)
	{
		pp->left = lp;
	}
	else
		root = lp;
	updateHeight(p);
	updateHeight(lp);
	updateHeight(pp);
	Node<T>*x;
	while (!s.empty())
	{
		x = s.top();
		s.pop();
		updateHeight(x);
	}

   
}
void rotateLeft(Node<T>*p,stack<Node<T>*>s)
{
	Node<T>*pr = 0, *pp = 0, *prl= 0;
	if (p != root)
		pp = getParent(p->info, root);
	else
		pp = p;
	pr = p->right;
	if (pr->left)
		prl = pr->left;

	pr->left = p;
	if (prl)
		p->right = prl;


	if (pp->right == p)
	{
		pp->right = pr;
	}
	else
		pp->left = pr;
	updateHeight(p);
	updateHeight(pr);
	updateHeight(pp);
	Node<T>*x;
	while (!s.empty())
	{
		x = s.top();
		s.pop();
		updateHeight(x);
	}


}
void rotateRl(Node<T>*p, stack<Node<T>*>s)
{
	rotateRight(p->right,s);
	rotateLeft(p,s);
}
void rotatelR(Node<T>*p, stack<Node<T>*>s)
{
	
	rotateLeft(p->left,s);
	rotateRight(p,s);
}
void preOrder(Node<T>* p)
{
	if (p->left)
	{
		preOrder(p->left);
	}
	cout << " " << p->info << " ";
	if (p->right)
	{
		preOrder(p->right);
	}

}
void parenthesisedView(Node<T>*p)
{
	cout << " " << p->info << "[ "<<p->height<<"]";
	if (p->left || p->right)
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




#endif


