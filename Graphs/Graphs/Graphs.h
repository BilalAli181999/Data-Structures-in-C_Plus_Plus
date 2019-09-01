#ifndef GRAPHS_H
#define GRAPHS_H
#include"Matrix.h"
#include<queue>
class Graph
{
public:
	int vertices;
	Matrix grp;
	Graph(int v):grp(v,v)
	{
		vertices = v;
	}
	void addEdge(int r, int c)
	{
		grp.at(r, c)=1;
	}
	void addWeightedEdge(int w,int r, int c)
	{
		grp.at(r, c) = w;
	}
	void DFS(int i, bool *visited)
	{
		if(!visited[i])
		cout << i << "\t";
		visited[i] = 1;
		for (int j = 0; j < vertices; j++)
		{
			if (grp.at(i, j) && !visited[j])
			{
				DFS(j, visited);
			}
		}
	}
	void DFS()
	{
		bool *visited = new bool[vertices] ();
		for (int i = 0; i < vertices; i++)
		{
			if (!visited[i])
			{
				DFS(i, visited);
			}
		}
	}
	void BFS()
	{
		bool  *visited = new bool[vertices]();
		for (int j = 0; j < vertices; j++)
		{
			if (!visited[j])
			{
				BFS(j, visited);
			}
		}
	}
	void BFS(int i,bool *visited)
	{
		queue<int> q;
		q.push(i);
		while (!q.empty())
		{
			i = q.front();
			if(!visited[i])
			cout << i << " ";
			visited[i] = 1;
			q.pop();
			for (int j = 0; j < vertices; j++)
			{
				if (grp.at(i, j))
				{
					q.push(j);
				}
			}
		}
	}


};
#endif // !GRAPHS_H

