#include<iostream>
#include"string"
#include"Stack.h"
#include<stack>
#include<algorithm>
#include<utility>


using namespace std;

//TASK-1
//int main()
//{
//	string str;
//	cin >> str;
//	bool status=1;
//	/*Stack <char> s;
//	int c = 0;
//	
//		for (int i = 0; i < str.length(); i++)
//		{
//			
//			
//			if (str[i] == 'a')
//			{
//				s.push(str[i]);
//			}
//			if (str[i] == 'b')
//			{
//				s.pop();
//			}
//		}
//		
//		
//		if (!s.isEmpty())
//		{
//			cout << "\n Not part of Language";
//		}
//		else
//			cout << "\n Part of Language";*/
//	
//	
//
//	int c = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == 'a')
//		{
//			c++;
//			if (i + 1 != c)
//			{
//				status = 0;
//			}
//		}
//		if (str[i] == 'b')
//		{
//			c--;
//			
//		}
//	}
//	if (status & c == 0)
//	{
//		cout << "VALID";
//	}
//	else
//		cout << "INVALID";
//}


//TASK-2

//int main()
//{
//	Stack <char> s;
//	string str;
//	cin >> str;
//	/*for (int i = 0; i < str.length(); i++)
//	{
//		while(str[i]=='a')
//		s.push(str[i]);
//	}
//
//	if (s.stackTop() == 'b' )
//	{
//		cout << "\n  part of Language";
//	}
//	else cout << "\nNot Part of Language";*/
//	bool status = 1;
//	int c = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == 'a')
//		{
//			c++;
//			if (i + 1 != c)
//			{
//				status = 0;
//			}
//
//			 
//		}
//	}
//	if (status)
//	{
//		cout << "\n Part";
//	}
//	else
//		cout << "\n Not Part";
//}

//TASK-3
//int main()
//{
//	int size[3] = {0};
//	Stack <char> s;
//	string str;
//	cin >> str;
//	int a=0, b=0;
//	bool status = 0;
//	/*for (int i = 0; i < str.length(); i++)
//	{
//		for (int j = 97; j <= 99; j++)
//		{
//			if ((int)str[i] == j)
//			{
//				size[j-97]++;
//			}
//		}
//		s.push(str[i]);
//			
//
//	}
//	bool status = 1;
//	for (int i = 0; i < 2; i++)
//	{
//		if (size[i] != size[i + 1] )
//		{
//			
//			status = 0;
//		}
//	}
//	char t1, t2;
//	t1 = s.stackTop();
//
//	for (int i = 0; i < size[2]; i++)
//	{
//		
//		s.pop();
//	}
//	t2 = s.stackTop();
//	if (status && t1== 'c' && t2=='b')
//		cout << "\nPART";
//	else  
//		cout << "\n Not";*/
//
//	/*int i = 0;
//		while (str[i] == 'a')
//		{
//			a++;
//			
//			if (i + 1 != a)
//			{
//				status = 0;
//			}
//			i++;
//		}
//		b = i;
//		while (str[i] == 'b')
//		{
//			a--;
//			b++;
//		
//			if (i + 1 != b)
//			{
//				status = 0;
//			}
//			i++;
//		}
//
//
//		while (str[i] == 'c')
//		{
//	
//			b--;
//			i++;
//		}
//		*/
//	int i = 0;
//	while (str[i]=='a')
//	{
//		a++;
//		i++;
//	}
//	while (str[i] == 'b')
//	{
//		a--;
//		b++; 
//		i++;
//	}
//	while (str[i] != '\0')
//	{
//		b--;
//		i++;
//	}
//		if (a == 0 && b == 0)
//		{
//			cout << "\n Part of the language";
//		}
//		else
//			cout << "\n Not a part";
//
//	
//}


//TASK-4
//int main()
//{
//	Stack <int> s,t1,t2;
//	s.push(1);
//	s.push(2);
//	s.push(3);
//	s.push(4);
//	while (!s.isEmpty())
//	{
//		t1.push(s.pop());
//	}
//	while (!t1.isEmpty())
//	{
//		t2.push(t1.pop());
//	}
//	while (!t2.isEmpty())
//	{
//		s.push(t2.pop());
//	}
//	while (!s.isEmpty())
//	{
//		cout << s.pop();
//	}
//}


//TASK-7
//int main()
//{
//	Stack <int> s1,s2, t;
//		s1.push(1);
//		s1.push(2);
//		s1.push(3);
//		s1.push(4);
//		while (!s1.isEmpty())
//				{
//					t.push(s1.pop());
//				}
//		while (!t.isEmpty())
//				{
//					s2.push(t.pop());
//				}
//		while (!s2.isEmpty())
//				{
//					cout<<s2.pop();
//				}
//
//}

//TASK-9

//int main()
//{
//	Stack <char> s;
//	string str;
//	
//	cin >> str;
//	for (int i = 0; i<str.length(); i++)
//	{
//		s.push(str[i]);
//	}
//	bool status = 1;
//	for ( int i = 0; i < str.length(); i++)
//	{
//		
//		if (str[i] != s.pop())
//		status = 0;
//	}
//	
//	if (status)
//	{
//		cout << "Palindrome";
//	}
//	else
//		cout << "Not Palindrome";
//
//}


//int main()
//{
//	string str;
//	cin >> str;
//	bool status = 1;
//	for (int i = 0; i < str.length() / 2; i++)
//	{
//		if(str[i]!=str[str.length()-1-i])
//		{
//			status = 0;
//		}
//	}
//	if (status)
//	{
//		cout << "\n Palindrome";
//	}
//	else
//		cout << "\n Not Palindrome";
//}

//TASK-10

//int main()
//{
//	string str;
//	cin >> str;
//	Stack <char> s;
//	for (int i = 0; i < str.length(); i++)
//	{
//		s.push(str[i]);
//	}
//	for (int i = 0; i < str.length(); i++)
//	{
//		
//		str[i] = s.pop();
//	}
//	cout << str;
//}
//
//int main()
//{
//	string str; cin >> str;
//	for (int i = 0; i < str.length()/2; i++)
//	{
//		char temp = str[i];
//		str[i] = str[str.length() - 1 - i];
//		str[str.length() - 1 - i] = temp;
//	}
//	for (int i = 0; i < str.length(); i++)
//			{
//				
//		cout<<str[i]<<" ";
//			}
//}

////TASK-8
//int main()
//{
//	string str;
//
//	char final[100];
//	cin >> str;
//	Stack <char> rev, s;
//	
//	
//		for (int i = 0; i < str.length(); i++)
//		{
//			s.push(str[i]);
//		}
//		for (int i = 0; i < str.length(); i++)
//		{
//			
//			str[i] = s.pop();
//		}
//	
//	int c = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		
//		if (str[i] == 41 /*|| str[i]==41*/)
//		{
//			rev.push(64);
//		}
//		if ( str[i]>= 42 && str[i] <= 47)
//		{
//			
//			if(str[i]<=rev.stackTop())
//			rev.push(str[i]);
//			else
//			{
//				
//				final[c] = rev.pop();
//				rev.push(str[i]);
//				c++;
//			}
//		}
//		if (str[i] >= 65 && str[i] <= 90)
//		{
//			final[c] = str[i];
//			c++;
//		}
//		i++;
//	}
//	final[c] = rev.pop();
//	cout << str;
//}

#include<vector>
#include<algorithm>

//TASK-8
//int main()
//{
//	char str[100];
//	cin >> str;
//	int length=0;
//	while (str[length] != '\0')
//	{
//		length++;
//	}
//	vector <char> v;
//	Stack <char> s;
//	
//	reverse(str, str+length);
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] == ')')
//		{
//			s.push(str[i]);
//		}
//		else if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
//		{
//			if (s.stackTop() == ')' && str[i] >= ')')
//			{
//				s.push(str[i]);
//			}
//			else if (str[i] <= s.stackTop())
//			{
//				s.push(str[i]);
//			}
//			else
//			{
//				
//				v.push_back(s.pop());
//				s.push(str[i]);
//			}
//		}
//		else 
//			v.push_back(str[i]);
//		
//	}
//	v.push_back(s.pop());
//	for (int i = 0; i < v.size(); i++)
//				{
//					cout << v[i];
//				}
//}

//Task-12
//int main()
//{
//	string str;
//		cin >> str;
//		vector<char> v;
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] != ')' && str[i] != '(')
//			{
//				v.push_back(str[i]);
//			}
//		}
//		for (int i = 0; i < v.size(); i++)
//		{
//			cout << v[i];
//		}
//}


//TASK-13
//template <typename T>
//T getMin(Stack<T>&s)
//{
//	 int min = s.stackTop();
//	while (!s.isEmpty())
//	{
//		if (s.stackTop() < min)
//		{
//			min = s.stackTop();
//		}
//		s.pop();
//	}
//	return min;
//}
//int main()
//{
//	Stack <int> s;
//	
//	s.push(9);
//	s.push(0);
//	s.push(4);
//	s.push(-11);
//
//	cout<<getMin(s);
//}


//TASK-4 (B)
//int main()
//{
//	Stack <int> s, t;
//	int var;
//		s.push(1);
//		s.push(2);
//		s.push(3);
//		s.push(4);
//		
//		
//		
//		int no = s.getNumberOfElements();
//		int in = s.getNumberOfElements();
//		
//		for (int i = 0; i < no-1; i++)
//		{
//			
//		
//			var = s.pop();
//			for (int j =i;j<in-1;j++)
//			{
//				
//				t.push(s.pop());
//			}
//	
//			s.push(var);
//			
//			while (!t.isEmpty())
//			{
//				s.push(t.pop());
//			}
//			
//
//		}
//		while (!s.isEmpty())
//		{
//			cout << s.pop();
//		}
//		
//		
//}


//Stack<int> reverse(Stack<int> s, int r, int e)
//{
//	Stack<int>t, sec;
//	int var;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < e; j++)
//		{
//			t.push(s.pop());
//		}
//		for (int j = 0; j < e - 1; j++)
//		{
//			var = t.pop();
//			for (int x = j; x < e - 1; x++)
//			{
//				sec.push(t.pop());
//			}
//			t.push(var);
//			while (!sec.isEmpty())
//			{
//				t.push(sec.pop());
//			}
//		}
//	}
//
//	return s;
//
//}
//int main()
//{
//	Stack <int> s;
//
//			s.push(1);
//			s.push(2);
//			s.push(3);
//			s.push(4);
//			Stack <int>t = reverse(s, 2, 3);
//			while (!s.isEmpty())
//			{
//				cout << s.pop() << " ";
//			}
//			cout << "\n";
//			while (!t.isEmpty())
//			{
//				cout << t.pop()<<" ";
//			}
//			
//}


//int main()
//{
//	Stack <int> s, t;
//		int min;
//			s.push(11);
//			s.push(1);
//			s.push(2);
//			s.push(4);
//			min = s.stackTop();
//			while (!s.isEmpty())
//			{
//				if (s.stackTop() < min)
//				{
//					
//					min = s.stackTop();
//					
//				}
//				else
//					t.push(s.pop());
//			}
//			while (!t.isEmpty())
//			{
//				s.push(t.pop());
//			}
//			s.push(min);
//			s.display();
//}


//class Undo
//{
//	int capacity;
//	Stack <string> s,r;
//	string *str;
//public:
//	Undo(int c = 10)
//	{
//		capacity = 10;
//		str = new string[200];
//	}
//	void memoriseOperation(int op=10)
//	{
//		
//		cout << "Enter quantity of string ";
//		int c;
//		cin >> c;
//		cin.ignore();
//		for (int i = 0; i < c; i++)
//		{
//			getline(cin, str[i]);
//	
//		}
//		int i;
//		if (c > op)
//		{
//			i = c - op;
//		}
//		else
//			i = 0;
//		for (; i < c; i++)
//		{
//			s.push(str[i]);
//			if (str[i][0] >= 97 && str[i][0] <= 122)
//			{
//				str[i][0] = (int)str[i][0] - 32;
//				s.push(str[i]);
//			}
//			
//		}
//		
//		s.pop();
//	}
//
//	void undo()
//	{
//		
//		r.push(s.stackTop());
//		cout << s.pop()<<"\n";
//	}
//	void redo()
//	{
//		cout << r.pop()<<"\n";
//	}
//};
//int main()
//{
//	Undo u;
//	u.memoriseOperation(10);
//	for(int i=0;i<5;i++)
//	u.undo();
//	cout << "\n REDO";
//	for (int i = 0; i<5; i++)
//	u.redo();
//}

//#include<algorithm>
//#include<vector>
//int main()
//{
//	int n;
//	while ( cin >> n && n!=0)
//	{
//		int trains=n;
//		vector<int>cariges(1000, 0);
//		vector<int>per(1000, 0);
//		int x = 0,c=0;
//		for(int i=0;i<trains;i++)
//		{
//			cin >> cariges[i];
//		}
//		c = 0;
//	
//		while (cin >> x && x!=0)
//		{
//			per[c] = x;
//		
//			c++;
//		}
//		if (is_permutation(cariges.begin(), cariges.begin()+trains, per.begin()) && c==trains)
//		{
//			cout << "Yes\n";
//		}
//		else
//			cout << "No\n";
//		
//		
//
//	}
//}


//int main()
//{
//	string str;
//	
//	while (getline(cin, str))
//	{
//		bool status = 1;
//		for (int i = 0; i < str.length(); i++)
//		{
//			if (str[i] == 'Z' || str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || (str[i] > 'p'&& str[i] <= 'z'))
//			{
//				
//			}
//			else
//			{
//				status = 0;
//			}
//		}
//		if (status)
//		{
//			cout << "YES\n";
//		}
//		else
//		{
//			cout << "NO\n";
//		}
//	}
//}


//int main()
//{
//	
//	
//	int dim;
//	int testCase = 0;
//	while (cin >> dim && dim!=0)
//	{
//		testCase++;
//		Stack <pair<int, int>> A;
//		Stack <pair<int, int>> B;
//		char** board = new char*[dim];
//		for (int i = 0; i < dim; i++)
//		{
//			board[i] = new char[dim];
//		}
//		for (int i = 0; i < dim; i++)
//		{
//			for (int j = 0; j < dim; j++)
//			{
//				cin >> board[i][j];
//			}
//		}
//		bool s1=1,s2=1;
//		pair<int, int> curA;
//		pair<int, int> curB;
//		for (int i = 0; i < dim && s1; i++)
//		{
//			if (board[0][i] == 'w')
//			{
//				curA.first=0;
//				curA.second = i;
//				A.push(curA);
//				s1 = 0;
//				board[0][i] = 'a';
//			}
//		}
//	
//		for (int i = 0; i < dim && s2; i++)
//		{
//			if (board[i][0] == 'b')
//			{
//				curB.first = i;
//				curB.second = 0;
//				B.push(curB);
//				s2 = 0;
//				board[i][0] = 'z';
//			}
//		}
//		pair<int, int> loc;
//		loc = A.stackTop();
//		
//		while (loc.first != dim - 1)
//		{
//			bool check = 1;
//			loc = A.stackTop();
//		
//			if (loc.first < 3 && loc.second < 3 && check)
//			{
//				if (board[loc.first + 1][loc.second + 1] == 'b')
//				{
//					loc.first = loc.first + 1;
//					loc.second = loc.second + 1;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if ( loc.second < 3 && check)
//			{
//				if (board[loc.first][loc.second + 1] == 'b')
//				{
//					loc.first = loc.first;
//					loc.second = loc.second + 1;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if (loc.first < 3  && check)
//			{
//				if (board[loc.first + 1][loc.second] == 'b')
//				{
//					loc.first = loc.first + 1;
//					loc.second = loc.second;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if ( loc.second >0 && check)
//			{
//				if (board[loc.first][(loc.second - 1)] == 'b')
//				{
//					loc.first = loc.first;
//					loc.second = loc.second - 1;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if (loc.first >0  && check)
//			{
//				if (board[(loc.first - 1)][loc.second] == 'b')
//				{
//					loc.first = loc.first - 1;
//					loc.second = loc.second;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if (loc.first <3 && loc.second > 0 && check)//
//			{
//				if (board[(loc.first + 1)][(loc.second - 1)] == 'b')
//				{
//					loc.first = loc.first + 1;
//					loc.second = loc.second - 1;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if (loc.first >0 && loc.second <3 && check)//
//			{
//				if (board[(loc.first - 1)][(loc.second + 1)] == 'b')
//				{
//					loc.first = loc.first - 1;
//					loc.second = loc.second + 1;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if (loc.first >0 && loc.second >0 && check)
//			{
//				if (board[(loc.first - 1)][(loc.second - 1)] == 'b')
//				{
//					loc.first = loc.first - 1;
//					loc.second = loc.second - 1;
//					A.push(loc);
//					board[loc.first][loc.second] = 'a';
//					check = 0;
//				}
//			}
//			if(check)
//			{
//				loc = A.pop();
//				
//				board[loc.first][loc.second] = 'a';
//				check = 0;
//			}
//			
//			
//		}
//		
//		loc = B.stackTop();
//		while (loc.second != dim - 1)
//		{
//			
//			bool check = 1;
//			loc = B.stackTop();
//			if (loc.first < 3 && loc.second < 3 && check)
//			{
//				if (board[loc.first + 1][loc.second + 1] == 'w')
//				{
//					loc.first = loc.first + 1;
//					loc.second = loc.second + 1;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (loc.second < 3 && check)
//			{
//				if (board[loc.first][loc.second + 1] == 'w')
//				{
//					loc.first = loc.first;
//					loc.second = loc.second + 1;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (loc.first < 3 && check)
//			{
//				if (board[loc.first + 1][loc.second] == 'w')
//				{
//					loc.first = loc.first + 1;
//					loc.second = loc.second;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			
//			if (loc.second >0 && check)
//			{
//				if (board[loc.first][(loc.second - 1)] == 'w')
//				{
//					loc.first = loc.first;
//					loc.second = loc.second - 1;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (loc.first >0 && check)
//			{
//				if (board[(loc.first - 1)][loc.second] == 'w')
//				{
//					loc.first = loc.first - 1;
//					loc.second = loc.second;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (loc.first <3 && loc.second > 0 && check)//
//			{
//				if (board[(loc.first + 1)][(loc.second - 1)] == 'w')
//				{
//					loc.first = loc.first + 1;
//					loc.second = loc.second - 1;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (loc.first >0 && loc.second <3 && check)//
//			{
//				if (board[(loc.first - 1)][(loc.second + 1)] == 'w')
//				{
//					loc.first = loc.first - 1;
//					loc.second = loc.second + 1;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (loc.first >0 && loc.second >0 && check)
//			{
//				if (board[(loc.first - 1)][(loc.second - 1)] == 'w')
//				{
//					loc.first = loc.first - 1;
//					loc.second = loc.second - 1;
//					B.push(loc);
//					board[loc.first][loc.second] = 'z';
//					check = 0;
//				}
//			}
//			if (check)
//			{
//				loc = B.pop();
//
//				board[loc.first][loc.second] = 'z';
//				check = 0;
//			}
//
//		}
//		if (A.getNumberOfElements() < B.getNumberOfElements())
//		{
//			cout << testCase << " " << "B\n";
//		}
//		else
//		{
//			cout << testCase << " " << "W\n";
//		}
//
//	}
//	
//}

#include<sstream>
//int postfix(string str)
//{
//	
//	Stack <double> s;
//	stringstream x(str);
//	string p;
//	double sol=0;
//	while (getline(x, p, ','))
//	{
//		
//		if (p == "+")
//		{
//			double v1, v2;
//			 v2 = s.pop();
//			v1 =s.pop();
//			sol = v1 + v2;
//			s.push(sol);
//
//
//		}
//		else if (p == "-")
//		{
//			double v1, v2;
//			v2 = s.pop();
//			v1 = s.pop();
//			sol = v1 - v2;
//			s.push(sol);
//		}
//
//		else if (p == "*")
//		{
//			double v1, v2;
//			v2 = s.pop();
//			v1 = s.pop();
//			sol = v1 * v2;
//			s.push(sol);
//			
//		}
//
//		else if (p == "/")
//		{
//			double v1, v2;
//			v2 = s.pop();
//			v1 = s.pop();
//			sol = v1 / v2;
//			s.push(sol);
//			
//		}
//
//		else
//		{
//			s.push(stod(p));
//			
//		}
//		
//		
//	}
//	return sol;
//}
//int main()
//{
//	cout<<postfix("134,21,+,79,/,3,*");
//	cout <<"\n "<< postfix("1.34,2.66,+,2,/,10,+");
//}


//TASK-6

//int main()
//{
//
//		Stack <int> s,t;
//		int min,m;
//				s.push(1);
//				s.push(2);
//				s.push(0);
//				s.push(9);
//				s.push(4);
//				
//				for (int i = 0; i <s.getNumberOfElements()-1; i++)
//				{
//					min = s.pop();
//					for (int j = i; i < s.getNumberOfElements() - 1; j++)
//					{
//						m = s.pop();
//						if (m < min)
//						{
//							int swap = min;
//							min = m;
//							m = swap;
//						}
//						t.push(m);
//
//					}
//					s.push(min);
//					while (!t.isEmpty())
//					{
//						s.push(t.pop());
//					}
//
//				}
//				while (!s.isEmpty())
//				{
//					cout << s.pop() << " ";
//				}
//}


#include<sstream>
int infix(string str)
{

	stack <double> opr,
		stack < string >ope;
	stringstream x(str);
	string p;
	double sol = 0;
	while(getline(x,p,','))
	{
		
		 if (p== "+" || p == "-" || p== "/" || p == "*")
		{
			ope.push(p);
		}
		else if (p== ")")
		{

			if (ope.top() == "+")
			{
				double v1, v2;
				v2 = opr.top();
				v1 = opr.top();
				opr.pop(); opr.pop();
				sol = v1 + v2;
				opr.push(sol);


			}
			else if (ope.top() == "-")
			{
				double v1, v2;
				
				sol = v1 - v2;
				opr.push(sol);
			}
			
			else if (ope.top() == "*")
			{
				double v1, v2;
				v2 = opr.top();
				v1 = opr.top();
				opr.pop(); opr.pop();
				sol = v1 * v2;
				opr.push(sol);

			}

			else if (ope.top() == "/")
			{
				double v1, v2;
				v2 = opr.top();
				v1 = opr.top();
				opr.pop(); opr.pop();
				sol = v1 / v2;
				opr.push(sol);

			}

		}
		else 
		 {
		
			
			 opr.push(stod(p));
		 }
	}
	return sol;
}

	int main()
{
	cout << infix("(,(,6,*,(8,/,3,),),-,7,)");
	
}
