#include<iostream>
#include"schedular.h"
#include<utility>
#include<queue>
using namespace std;
//int main()
//{
//	Process arr[4] = { Process(1,"notepad",20),Process(13,"mp3Palyer",5),Process(4,"bcc",30),Process(11,"explorer",2) };
//	Schedular s(arr, 4, 5);
//	s.assignProcessor();
//}

int main()
{
	
	pair<double, double>*arr;
	
	int n;
	cin >> n;
	arr = new pair<double,double>[n];
	int rear = 0;
	int front = 0;
	double profit=0;
	while (n--)
	{
		double* value = new double[n];
		int noE = 0;
		char trans;
		cin >> trans;
		if (trans == 'b')
		{
			double qT, price;
			cin >> qT >> price;
			pair<double, double> cur;
			cur.first = qT;
			cur.second = price;
			value[noE] = qT*price;
			noE++;
			arr[rear] = cur;
			rear++;
		}
		else if (trans == 's')
		{
			double sQ, sP;
			cin >> sQ >> sP;
			pair<double, double> firstP;
			firstP = arr[front];
			while (!sQ <= 0)
			{
				
				if (sQ <= firstP.first)
				{
					profit = profit + ((sQ*sP) - (sQ * firstP.second));
					firstP.first = firstP.first - sQ;
					arr[front] = firstP;
					sQ = 0;
				}
				else
				{
					profit = profit + ((firstP.first*sP) - (firstP.first * firstP.second));
					sQ = sQ - firstP.first;
					firstP.first = 0;
				}
				if (sQ > firstP.first)
				{
					front++;
					firstP = arr[front];
				}
			}
		}
	}
	cout << profit;
}


