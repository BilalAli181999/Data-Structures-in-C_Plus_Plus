#ifndef SCHEDULAR_H
#define SCHEDULAR_H
#include"process.h"
#include"Queue.h"
class Schedular
{
public:
	Process* processArray;
	int arrayLength;
	int timeQuantum;

	Schedular(Process *p,int length, int quantum)
	{
		arrayLength = length;
		processArray = p;
		timeQuantum = quantum;
	}
	void assignProcessor()
	{
		Queue<Process> q(arrayLength+1);
		Process test,time;
		for (int i = 0; i < arrayLength; i++)
		{
			q.enqueue(processArray[i]);
		}

		while (!q.isEmpty())
		{
		
		/*	cout << "\n-------------------------------Array----------------------------------------";
			q.display();
			cout << "----------------------------------------------------------------------------------------------------------------";*/
			time = q[0];
			
			q[0].executionTime = q[0].executionTime -  timeQuantum;
			if (q[0].executionTime <= 0)
			{
				cout << "\n PROCESS REMOVED\n";
				
				try {
					test=q.dequeue();
					test.display();
				
				}
				catch (char*s)
				{
					cout << s;
				}
			}
			
				q.rotate();
				
		}
	}

};
#endif // !SCHEDULAR_H

