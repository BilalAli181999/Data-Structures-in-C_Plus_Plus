
#ifndef TNODE_H
#define TNODE_H
#include<iostream>
using namespace std;
#include<string>

class ChildNode;
class TNode;
class ChildList;
class ChildNode;
class ChildList
{
public:
	ChildNode* childListHead;
	ChildList()
	{
		childListHead = nullptr;
	}

};
class TNode
{
public:
	int flagFF;
	int size;
	string fFName;
	ChildList childList;

};
class ChildNode
{
public:
	ChildNode* nextSib;
	TNode *nextChild;
	ChildNode() 
	{
		nextSib = nullptr;
		nextChild = nullptr;
	}
	
};


class KAryTree
{
public:
	TNode*root;
	TNode*current;
	void expandedView(TNode* p)
	{
		if (p)
		{
			cout << "\n" << p->fFName;
		}
		if (p&&p->childList.childListHead&&p->childList.childListHead->nextChild)
		{
			expandedView(p->childList.childListHead->nextChild);
		}
		while (p&&p->childList.childListHead&&p->childList.childListHead->nextSib)
		{
			expandedView(p->childList.childListHead->nextSib->nextChild);
			p->childList.childListHead->nextSib = p->childList.childListHead->nextSib->nextSib;
		}
	}
};


#endif

