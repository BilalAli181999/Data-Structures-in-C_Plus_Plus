#include<iostream>
#include<vector>
#include<algorithm>
#include"Queue.h"
#include<utility>
using namespace std;
int smallest(vector<int> &a)
{
	int min = a[0];
	for (int i = 0; i < a.size(); i++)
	{
	
		if (min > a[i])
		{
			min = a[i];
		}
	}
	if (min >= 2)
	{
		return min / 2;
	}
	else
		return min;

}
void display(char**b,int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (int)b[i][j] << "\t";
		}
		cout << "\n";
	}
}
int shortestPath(char **board,int n,int m,pair<int,int> source, pair<int, int>destination)
{
	vector<int> a;
	pair<int, int>cur,t;
	Queue <pair<int, int>> q;
	int count;
	
				cur.first = source.first;
				cur.second = source.second;
				board[cur.first][cur.second] =0;
				
				q.enQueue(cur);
		
	
	while (!q.isEmpty() && cur!=destination)
	{

		cur = q.deQueue();
		if (cur.second < m &&  board[cur.first][cur.second+1]=='e')
		{
			count = board[cur.first][cur.second];
			board[cur.first][cur.second + 1] =count+1 ;
			t.first = cur.first;
			t.second = cur.second + 1;
		
			q.enQueue(t);
		}
		if (cur.first>0 && board[cur.first-1][cur.second] == 'e')
		{
			count = board[cur.first][cur.second];
			board[cur.first-1][cur.second ] =count+1 ;
			t.first = cur.first-1;
			t.second = cur.second;
		
			q.enQueue(t);
		}
		if (cur.second>0 && board[cur.first][cur.second-1] == 'e')
		{
			count = board[cur.first][cur.second];
			board[cur.first][cur.second - 1] =count+1 ;
			t.first = cur.first;
			t.second = cur.second - 1;
			
			q.enQueue(t);
		}
		if (cur.first<n &&  board[cur.first+1][cur.second] == 'e')
		{
			count = board[cur.first][cur.second];
			board[cur.first+1][cur.second ] =count+1 ;
			t.first = cur.first+1;
			t.second = cur.second ;
			
			q.enQueue(t);
		}
		
	}
	if (destination.second > 0)
	{
		
		a.push_back( board[destination.first][destination.second - 1]);
	}
	
	if (destination.first > 0)
	{
		a.push_back( board[destination.first - 1][destination.second]);
	}
	
	if (destination.first <6)
	{
		a.push_back (board[destination.first + 1][destination.second]);
	}
	
	if (destination.second <6)
	{
		a.push_back (board[destination.first][destination.second + 1]);
	}
	
	display(board,n);
	return smallest(a);
}

int main()
{
	char b[7][7] = { {'e','e' ,'e','e','e','e', 'e'},{ 'e','e' ,'e','e','e','e', 'e' },{ 'e','e' ,'e','e','e','e', 'e' },{ 'e','e' ,'e','e','e','e', 'e' },{ 'e','e' ,'e','e','e','e', 'e' },{'e','e' ,'e','e','e','e', 'e'},{ 'e','e' ,'e','e','e','e', 'e' } };
	

	b[2][1] = 'a';
	b[6][6] = 'b';
	b[3][4] = 'z';
	b[2][4] = 'z';
	b[4][4] = 'z';


	pair<int, int> s, d;
	s.first = 2;
	s.second = 1;
	d.first = 6;
	d.second = 6;
	cout<<shortestPath(b, 7, 7, s, d);

}


//int shortestPath(char** board, int n, pair<int, int> source, pair<int, int>destination)
//{
//	vector<int> a;
//	pair<int, int>cur, t;
//	Queue <pair<int, int>> q;
//	int count=1;
//	
//	cur.first = source.first;
//	cur.second = source.second;
//	board[cur.first][cur.second] = count;
//
//	q.enQueue(cur);
//
//	bool status = 1;
//	while (!q.isEmpty() && status)
//	{
//		bool st = 1;
//		cur = q.deQueue();
//
//		count = board[cur.first][cur.second];
//	
//		if (cur.second < n-1 &&  board[cur.first][cur.second + 1] == '.' && st)
//		{
//			int  s=cur.second+1;
//			
//			while (board[cur.first][s]=='.' && s<n-1)
//			{
//				if (cur.first == destination.first)
//				{
//					status = 0;
//				}
//				s++;
//			}
//			if (status)
//			{
//				board[cur.first][s] = count + 1;
//
//				t.first = cur.first;
//				t.second = s;
//
//				q.enQueue(t);
//				st = 0;
//			}
//		}
//		if (cur.first>0 && board[cur.first - 1][cur.second] == '.' && st)
//		{
//			count = board[cur.first][cur.second];
//			int f=cur.first-1;
//			
//			while (board[f][cur.second]=='.' && f>0)
//			{
//				if ( cur.second == destination.second)
//				{
//					status = 0;
//				}
//				f--;
//			}
//			if (status)
//			{
//				board[f][cur.second] = count + 1;
//
//				t.first = f;
//				t.second = cur.second;
//
//				q.enQueue(t);
//				st = 0;
//			}
//		}
//		if (cur.second>0 && board[cur.first][cur.second - 1] == '.' && st)
//		{
//			count = board[cur.first][cur.second];
//			int  s = cur.second-1;
//
//			while (board[cur.first][s] == '.' && s> 0)
//			{
//				if (cur.first == destination.first /*&& s== destination.second*/)
//				{
//					status = 0;
//				}
//				s--;
//			}
//			if (status)
//			{
//				board[cur.first][s] = count + 1;
//
//				t.first = cur.first;
//				t.second = s;
//
//				q.enQueue(t);
//				st = 0;
//			}
//		}
//		if (cur.first<n-1 &&  board[cur.first + 1][cur.second] == '.' && st)
//		{
//			count = board[cur.first][cur.second];
//			int f = cur.first+1;
//
//			while (board[f][cur.second] == '.' && f<n - 1)
//			{
//				if (/*f == destination.first && */cur.second == destination.second)
//				{
//					status = 0;
//				}
//				f++;
//			}
//			if (status)
//			{
//				board[f][cur.second] = count + 1;
//
//				t.first = f;
//				t.second = cur.second;
//
//				q.enQueue(t);
//				st = 0;
//			}
//		}
//		
//
//	}
//	
//	return count;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	char **b = new char*[n];
//	for (int i = 0; i < n; i++)
//	{
//		b[i] = new char[n];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> b[i][j];
//			
//		}
//	}
//	pair<int, int> s, d;
//		cin>>s.first;
//		cin>>s.second ;
//		cin>>d.first ;
//		cin>>d.second ;
//		cout<<shortestPath(b,n, s, d);
//
//}