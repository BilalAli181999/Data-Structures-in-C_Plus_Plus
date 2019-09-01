
#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
#include"TNode.h"
int main()
{
	KAryTree t;
	t.root = new TNode;
	t.root->fFName = 1;
	t.root->size = 1;
	t.root->fFName = "InetPub";
	t.root->childList.childListHead = new ChildNode;//3
	t.root->childList.childListHead->nextSib = new ChildNode;//4
	t.root->childList.childListHead->nextSib->nextSib= new ChildNode;//5
	t.root->childList.childListHead->nextSib->nextSib->nextChild = new TNode;
	t.root->childList.childListHead->nextSib->nextSib->nextChild->fFName = "scripts";
	t.root->childList.childListHead->nextSib->nextSib->nextSib = new ChildNode;//6
	t.root->childList.childListHead->nextChild = new TNode;//7
	t.root->childList.childListHead->nextChild->flagFF = 0;
	t.root->childList.childListHead->nextChild->size = 1;
	t.root->childList.childListHead->nextChild->fFName = "AdminScripts";
	t.root->childList.childListHead->nextSib->nextChild = new TNode;//8
	t.root->childList.childListHead->nextSib->nextChild->flagFF=1;
	t.root->childList.childListHead->nextSib->nextChild->size=1;
	t.root->childList.childListHead->nextSib->nextChild->fFName = "iisSamples";
	TNode *p = t.root->childList.childListHead->nextSib->nextChild;

	p->childList.childListHead = new ChildNode;//11

	
	p->childList.childListHead->nextChild = new TNode;
	p = p->childList.childListHead->nextChild;
	
	p->fFName = "sdk";
	p->childList.childListHead = new ChildNode;//13
	p->childList.childListHead->nextChild = new TNode;//15
	p->childList.childListHead->nextChild->fFName = "asp";
	p->childList.childListHead->nextSib = new ChildNode;
	p->childList.childListHead->nextSib->nextChild = new TNode;
	p->childList.childListHead->nextSib->nextChild->fFName = "admin";
	p->childList.childListHead->nextChild->childList.childListHead = new ChildNode;
	p->childList.childListHead->nextChild->childList.childListHead->nextChild = new TNode;
	p->childList.childListHead->nextChild->childList.childListHead->nextChild->fFName = "applications";
	p->childList.childListHead->nextChild->childList.childListHead->nextSib= new ChildNode;
	p->childList.childListHead->nextChild->childList.childListHead->nextSib->nextChild = new TNode;
	p->childList.childListHead->nextChild->childList.childListHead->nextSib->nextChild->fFName = "component";
	p->childList.childListHead->nextChild->childList.childListHead->nextSib->nextSib = new ChildNode;
	p->childList.childListHead->nextChild->childList.childListHead->nextSib->nextSib->nextChild = new TNode;
	p->childList.childListHead->nextChild->childList.childListHead->nextSib->nextSib->nextChild->fFName = "dataBase";


	t.expandedView(t.root);
}












//class cstring
//{
//private:
//	char *data;
//	int size;
//public:
//	int getLength()const
//	{
//		int i = 0;
//		while (data[i] != '\0')
//		{
//			i++;
//		}
//		return i;
//	}
//	int getCharLength(char * &ch)
//	{
//		int i = 0;
//		while (ch[i] != '\0')
//		{
//			i++;
//		}
//		return i;
//	}
//	
//	char & operator[](int index)
//	{
//		return data[index];
//	}
//	int remove(char ch)
//	{
//		bool status = 0;
//		for (int i = 0; i < getLength(); i++)
//		{
//			if (data[i] == ch)
//			{
//				for (int j = i; j < getLength(); j++)
//				{
//					status = 1;
//					data[j] = data[j + 1];
//				}
//
//			}
//		}
//		if (status)
//			return 1;
//		if (!status)
//			return 0;
//	}
//	int insertString(int index, cstring &subStr)
//	{
//		char *ch = new char[size];
//		for (int i = 0; i < size; i++)
//		{
//			ch[i] = data[i];
//		}
//		int cS = subStr.getLength();
//		int oldSize = size;
//		size = size + cS;
//		data = new char[size];
//
//		for (int i = 0; i < oldSize; i++)
//		{
//			data[i] = ch[i];
//
//		}
//		int x = index;
//		for (int j = index + cS; j < size; j++)
//		{
//			data[j] = ch[x];
//			x++;
//		}
//		int c = 0;
//		for (int i = index; i < cS + index; i++)
//		{
//			data[i] = subStr[c];
//			c++;
//		}
//		data[size - 1] = '\0';
//
//
//		return 0;
//	}
//	int isEqual(const cstring & s2)
//	{
//		for (int i = 0; i < s2.getLength(); i++)
//		{
//			if (this->data[i] != s2.data[i])
//				return false;
//		}
//		return true;
//	}
//	int isEqual(const char s2)
//	{
//		if (this->data[0] == s2)
//			return 1;
//		else
//			return 0;
//
//	}
//	cstring::cstring(char *ch)
//	{
//
//		size = getCharLength(ch) + 1;
//
//		data = new char[size];
//		for (int j = 0; j < size - 1; j++)
//		{
//
//			data[j] = ch[j];
//		}
//		data[size - 1] = '\0';
//
//	}
//};
//bool  isCapital(int n, cstring t)
//{
//	
//		int j = 0;
//while(j<t.getLength())
//{
//	if (t[j] >= 65 && t[j] <= 92)
//		return true;
//	j++;
//}
//return false;
//	
//}
//bool isValid( cstring *cfg, cstring *eq,int n, cstring s,cstring t)
//{
//	while (isCapital(n, t))
//	{
//		bool status = 1;
//		for (int i = 0; i < t.getLength() && status; i++)
//		{
//			if (t[i] >= 65 && t[i] <= 92)
//			{
//				
//				for (int j = 0; j < n&& status; j++)
//				{
//					if ( cfg[j].isEqual(t[i]))
//					{
//						char ch = cfg[j][0];
//						t.remove(ch);
//						t.insertString(i, eq[j]);
//						status = 0;
//					}
//				}
//			}
//		}
//	}
//	if (t.isEqual(s))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	cstring exp("aeccd"),t("S");
//	int n=3;
//
//	cstring cfg[3] = {"S","A","B"};
//	cstring eq[3] = {"aB","cd","ecA"};
//	
//	if (isValid(cfg, eq, 3, exp, t))
//		cout << "\n Valid";
//	else
//		cout << "\n Not Valid";
//}