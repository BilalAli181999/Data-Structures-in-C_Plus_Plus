#include<iostream>
#include"AVL.h"
using namespace std;
int main()
{
	AVL<int> t;
	stack<Node<int>*> s,sB;
	//ll
	/*t.insert(100,t.root,s,sB);
	t.insert(50, t.root, s,sB);

	t.insert(130, t.root, s, sB);
	t.insert(30, t.root, s,sB);
	t.insert(60, t.root, s, sB);
	t.insert(140, t.root, s, sB);
	
	t.insert(15, t.root, s, sB);
	t.insert(45, t.root, s, sB);
	t.insert(10, t.root, s, sB);
*/
	
	/*t.insert(100, t.root, s, sB);
	t.insert(50, t.root, s, sB);
	t.insert(150, t.root, s, sB);
	t.insert(10, t.root, s, sB);

	t.insert(80, t.root, s, sB);
	t.insert(70, t.root, s, sB);
	t.insert(90, t.root, s, sB);*/
	




	


	//rr
	t.insert(100, t.root, s, sB);
	t.insert(50, t.root, s, sB);
	t.insert(120, t.root, s, sB);
	t.insert(90, t.root, s, sB);
	t.insert(150, t.root, s, sB);
	t.insert(140, t.root, s, sB);
	



	
	


	
	t.parenthesisedView(t.root);
//	t.preOrder(t.root);
//	t.rotateRight(t.root);
	cout << "\n\n\n";
	t.preOrder(t.root); 
//	t.adjustHeight(t.root);
	
	t.parenthesisedView(t.root);
}