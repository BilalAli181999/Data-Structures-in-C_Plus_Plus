#include<iostream>
#include"Graphs.h"
using namespace std;
int main()
{
	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(1,2);
	g.addEdge(4, 1);
	g.addEdge(0, 3);
	g.addEdge(3, 2);
	g.addEdge(0, 2);
	g.addEdge(3, 1);
	g.addEdge(3, 6);
	g.addEdge(5, 6);
	g.DFS();
	g.BFS();
}