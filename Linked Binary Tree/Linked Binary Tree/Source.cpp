#include<iostream>
#include"LinkedBinaryTree.h"

using namespace std;
int main()
{
	BinaryTree<int> t;
		t.setRoot(5);
	t.setLeftChild(5,2);
	t.setRightChild(5, 5);
    t.setLeftChild(2, 1);
	t.setRightChild(2, 5);
	//t.setLeftChild(3, 6);
	//t.setRightChild(3, 7);
	//t.setRightChild(7, 9);
	//t.setRightChild(9, 17);
	//t.setRightChild(17, 19);
	cout<<t.treeChecking(t.root);
//cout<<	t.giveLength(t.root, 2);
//	t.displayAllLengths(t.root,0);
	//t1=t.createClone();
//	cout << t.lowestCommonAncestor(17,19,t.root);
	//t.parenthesised(t.root);
	//cout << t.levelOfNode(7,t.root);
	int a[10];
	cout << " v\n";
//	t.displayLongestPath(t.root,a,0);
	/*t1.setRoot(1);
	t1.setLeftChild(1, 2);
	t1.setRightChild(1, 3);
	t1.setLeftChild(2, 4);
	t1.setRightChild(2, 5);
	t1.setLeftChild(3, 6);
	t1.setRightChild(3, 7);*/
	
//	t.setRightChild(7, 8);
//t.setRightChild(8, 10);
	//t.displayLevel(2,t.root);
	//cout << t.maxValue(t.root);
	//cout << t.countLeafNodes(t.root);
//	cout << t.isComplete(t.root);
	//cout << t.heightOfTree(t.root);
//cout<<	t.getParent(5,t.root);
//t.displayAncestors(5,t.root);
	//t.preOrder(t.root);
	//t.postOrder(t.root);
	//t.inOrder(t.root);
	//cout<<t.getParent(1,t.root);
	//t.remove(2);
	//t.remove(2);
//	t.displayAncestors(2, t.root);
//	t.preOrder(t.root);
	//t.displayDescendents(2);
	//cout<<t.heightOfTree(t.root);
//	t.levelOrder(t.root);
//	t.parenthesised(t.root);
//cout<<	t.getLevelOfNode(6,t.root);
	//t.displayExplorerView(t.root);
	//t.displayLevel(3,t.root);
	/*BinaryTree<int> t1 = t;

	
	t1.setRoot(32);*/
//	cout<<t.countNodes(t.root);
//	cout << t.minValue(t.root);
//	cout << t.countLeafNodes(t.root);
	/*t.preOrder(t.root);
	cout << "\n";
	t.nonRecPreOrder();*/
	//cout<<t.isComplete(t.root);
	//cout << t.balancedFactor(1);
	//cout << t.findNodeSiblings(8);
	//cout << t.countLeafNodes(t.root);
	//cout << t.isIsoMorphic(t, t1);
//	BinaryTree<int> t2=t;
//	t2.parenthesised(t2.root);
	
//	t.parenthesised(t.root); cout << "\n";
	//BinaryTree<int> t3=t.mirrorImage();
	//
	//t3.parenthesised(t3.root);
	//cout << t3.isMirror(t3.root,t.root);
	//int a[100];
	/*t.displayLongestPath(t.root,a,0);*/
	/*t.displayAllPaths(t.root, a, 0);*/
	//t.displayAllPathsLength(t.root, a, 0);
//cout<<"Lowest Common Ancestor: "<<t.lowestCommonAncestor(5, 6,t.root);
	//cout << t.levelOfNode(5, t.root);
	//cout << t.findDistance(1, 5);


	BinaryTree<int> temp;// = t.mirrorImage();
	temp.setRoot(100);
	temp.setLeftChild(100, 25);
	temp.setRightChild(100, 150);
	temp.setLeftChild(25, 23);
temp.setRightChild(150, 170);
	temp.setRightChild(25, 200);
	temp.setRightChild(200, 70);
	temp.setRightChild(70, 20);
//	t.parenthesised(temp.root);
	cout << "\n";
//	temp.doubleTree(temp.root);
//	temp.parenthesised(temp.root);
	//cout<<t.countTrees(3);
	//cout<<temp.treeChecking(temp.root);
//	cout << t.maxValue(t.root,t.root->info);
//	cout << temp.isBst(temp.root);
//	cout<<temp.giveLength(temp.root,20);
}
