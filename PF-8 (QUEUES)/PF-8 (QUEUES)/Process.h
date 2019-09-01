#ifndef PROCESS_H
#define PROCESS_H
#include<iostream>
using namespace std;
#include<string>
class Process
{
public:
	int processId;
	string processName;
	int executionTime;
	void display()
	{
		
		cout << "\nPROCESS ID:" << processId;
		cout << "\nPROCESS NAME:" << processName;
		cout << "\nEXECUTION TIME:" << executionTime<<"\n";
	}
	Process(int id=1,string pName="notepad",int burstTime=10)
	{
		processId = id;
		processName = pName;
		executionTime = burstTime;
	}

};
#endif // !PROCESS_H

