#include<iostream>
using namespace std;
#include<stack>
#include<utility>
void display(pair<stack<int>, char> a, pair<stack<int>, char> b, pair<stack<int>, char> c)
{
	stack<int> temp;
	cout << "\n";

	
	
	if (a.second == 'A')
	{
		if(a.first.empty())
		cout << "A=>";
		else
			cout << "A=>   ";
		while (!a.first.empty())
		{
			temp.push(a.first.top());
			a.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() <<" ";
			temp.pop();
		}
		
	}
	else if (b.second == 'A')
	{
		if (b.first.empty())
			cout << "A=>";
		else
			cout << "A=>   ";
		while (!b.first.empty())
		{
			temp.push(b.first.top());
			b.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	else if (c.second == 'A')
	{
		if (c.first.empty())
			cout << "A=>";
		else
			cout << "A=>   ";
		while (!c.first.empty())
		{
			temp.push(c.first.top());
			c.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	cout << "\n";
	
	if (a.second == 'B')
	{
		if (a.first.empty())
			cout << "B=>";
		else
			cout << "B=>   ";
		while (!a.first.empty())
		{
			temp.push(a.first.top());
			a.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	else if (b.second == 'B')
	{
		if (b.first.empty())
			cout << "B=>";
		else
			cout << "B=>   ";
		while (!b.first.empty())
		{
			temp.push(b.first.top());
			b.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	else if (c.second == 'B')
	{
		if (c.first.empty())
			cout << "B=>";
		else
			cout << "B=>   ";
		while (!c.first.empty())
		{
			temp.push(c.first.top());
			c.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	cout << "\n";
	
	if (a.second == 'C')
	{
		if (a.first.empty())
			cout << "C=>";
		else
			cout << "C=>   ";
		while (!a.first.empty())
		{
			temp.push(a.first.top());
			a.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	else if (b.second == 'C')
	{
		if (b.first.empty())
			cout << "C=>";
		else
			cout << "C=>   ";
		while (!b.first.empty())
		{
			temp.push(b.first.top());
			b.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	else if (c.second == 'C')
	{
		if (c.first.empty())
			cout << "C=>";
		else
			cout << "C=>   ";
		while (!c.first.empty())
		{
			temp.push(c.first.top());
			c.first.pop();
		}

		while (!temp.empty())
		{
			cout << temp.top() << " ";
			temp.pop();
		}
		
	}
	cout << "\n";
}
void tower(int n, pair<stack<int>,char> &a, pair<stack<int>, char> &b, pair<stack<int>, char> &c,int &counter)
{
	
	if (n == 1)
	{
	
		if(counter>=0)
		display(a, b, c);
		
		
		
		
		c.first.push(a.first.top());
		a.first.pop();
	
	
		counter--;
	}
	else if(counter>=0)
	{
		
		tower(n - 1, a, c,b,counter);
		tower(1, a, b,c,counter);
		tower(n - 1, b,a,c,counter);
	}
	
}
int main()
{
	
	
	int c, n;
	int co = 0;
	
	while (cin >> n && cin >> c && n != 0 && c != 0)
	{
		co++;
		pair<stack<int>, char>A, B, C;
		A.second = 'A';
		B.second = 'B';
		C.second = 'C';
		
		for (int i = n; i > 0; i--)
		{
			A.first.push(i);
		}
		
		cout << "Problem #" << co<<"\n";
		tower(n, A, B, C, c);
		cout << "\n";
	} 
}



