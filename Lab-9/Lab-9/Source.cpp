#include<iostream>
#include<string>
#include"Lsll.h"
using namespace std;

bool same(int a[], int size, int first)
{
	bool s1 = 0;
	for (int i = 0; i < size /*&& !s1*/ ; i++)
	{
		if (a[i] == first)
		{
			s1 = 1;
		}
		
	}
	return s1;
}


int main()
{
	int noTeams;
	while (cin >> noTeams &&  noTeams != 0)
	{
		Lsll<int> l;
		int**teams = new int*[noTeams];
		int *teamSize = new int[noTeams];
		for (int j = 0; j < noTeams; j++)
		{
			
			cin >> teamSize[j];
		
				teams[j] = new int[teamSize[j]];
	
			for (int i = 0; i < teamSize[j]; i++)
			{
				cin>>teams[j][i];
			}
		}
		string command;
		while (cin >> command && command != "STOP")
		{
			if (command == "ENQUEUE")
			{
				int x;
				cin >> x;
				if (l.head == 0)
				{
					l.insertAtHead(x);
				}
				else
				{
					for (int i = 0; i < noTeams; i++)
					{
						if (same(teams[i], teamSize[i], x))
						{
							
							l.sameTeamInsert(teams[i], teamSize[i],x);
							
						}
					}
				}
			}
			else if (command == "DEQUEUE")
			{
				l.printAndDeleteAtHead();
			}
		}
	}
}