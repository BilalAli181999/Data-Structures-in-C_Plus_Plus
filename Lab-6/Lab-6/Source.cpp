#include<iostream>
#include"queue"
#include<utility>
using namespace std;
//int main()
//{
//	Queue<pair<int, int>>iq,temp;
//	
//
//	int n, x;
//	cin >> n >> x;
//	pair<int,int> *a = new pair<int,int>[n];
//	
//	
//	pair <int, int>v;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v.first;
//		v.second = i + 1;
//		iq.enQueue(v);
//		
//	}
//	
//	int index;
//	for (int i = 0; i < x; i++)
//	{
//		int m = -99;
//		int noe = 0;
//		if (x < iq.getNoOfElements())
//		{
//			for (int j = 0; j < x; j++)
//			{
//				pair<int, int> max = iq.deQueue();
//				
//				a[noe].first = max.first;
//				a[noe].second = max.second;
//				noe++;
//				if (max.first > m)
//				{
//					m = max.first;
//					index = max.second;
//				}
//			}
//			
//		}
//		else
//		{
//			while (!iq.isEmpty())
//			{
//				pair<int, int> max = iq.deQueue();
//				a[noe].first = max.first;
//				a[noe].second = max.second;
//				noe++;
//				if (max.first > m)
//				{
//					m = max.first;
//					index = max.second;
//				}
//
//				
//			}
//			
//		}
//		
//		for (int i = 0; i < noe; i++)
//		{
//			if (index  != a[i].second)
//			{
//				if (a[i].first != 0)
//				{
//					a[i].first = a[i].first - 1;
//				}
//				iq.enQueue(a[i]);
//			}
//		}
//		cout << index << "\n";
//		
//		
//
//	}
//	
//}

#include<string>
int main()
{
	string str;
	queue<char> q;
	int one = 0, zero = 0;
	while (cin >> str)
	{
		one = 0, zero = 0;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '0')
			{
				zero++;
			}
			else
			{
				one++;
			}
			q.push(str[i]);
		}
		if (zero == one && q.front() == 0)
		{
			cout << "SHOOT\n";
		}
		else if (zero != one)
		{
			cout << "ROTATE\n";
		}
		else
			cout << "EQUAL\n";

	}
}